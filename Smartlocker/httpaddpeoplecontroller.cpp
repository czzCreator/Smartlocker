#include "httpaddpeoplecontroller.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>


HttpAddPeopleController::HttpAddPeopleController(QObject* parent)
    : HttpRequestHandler(parent) {

}

//http://xx.com/locker/downlink/addPeople
void HttpAddPeopleController::service(HttpRequest &request, HttpResponse &response)
{
    //返回格式如下
    //{
    //“result”: “0”，
    //“message”：”成功！”
    //}

    QJsonObject response_jsonObj;
    QJsonObject jsonObject;


    QString WeGetJsonAdd(request.getBody());
    QJsonParseError isErrorHappened;
    QJsonDocument jsonDocument = QJsonDocument::fromJson(WeGetJsonAdd.toLocal8Bit().data(),&isErrorHappened);
    if( jsonDocument.isNull() )
    {
        QString logError = QString("recv http post(locker/downlink/addPeople) body(json info),format invalid ===> please check the string,reason:%1 ")
                .arg(isErrorHappened.errorString());
        qCritical() <<logError;

        //reponse ....
        response_jsonObj.insert("result",500);
        response_jsonObj.insert("message",logError);
        response.setHeader("Content-Type", "application/json; charset=utf-8");
        response.write(QJsonDocument(response_jsonObj).toJson(),true);

        return;
    }
    //解析成功
    else
    {
//        参数名	    必选	 类型	 说明
//        deviceID	是	string	设备ID
//        peopleID	是	string	人员ID，陌生人填写：0
//        peopleName	是	string	人员姓名或陌生人
//        deptName	是	string	部门
//        phone	是	String	手机号
//        pic	是	String	BASE64照片
//        time	是	String	时间戳
//        sign	是	Sting	签名，算法请见签名加密说明

        jsonObject = jsonDocument.object();
        QString deviceId = jsonObject["deviceID"].toString();
        QString peopleId = jsonObject["peopleID"].toString();
        QString peopleName = jsonObject["peopleName"].toString();
        QString deptName = jsonObject["deptName"].toString();
        QString phone_str = jsonObject["phone"].toString();
        QString pic_str = jsonObject["pic"].toString();
        QString time_str = jsonObject["time"].toString();
        QString sign_str = jsonObject["sign"].toString();

    }
}
