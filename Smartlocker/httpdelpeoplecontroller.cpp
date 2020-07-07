#include "httpdelpeoplecontroller.h"


#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>


HttpDelPeopleController::HttpDelPeopleController(QObject* parent)
    : HttpRequestHandler(parent) {

}


//http://xx.com/locker/downlink/deletePeople
void HttpDelPeopleController::service(HttpRequest &request, HttpResponse &response)
{
    //返回格式如下
    //{
    //“result”: “0”，
    //“message”：”成功！”
    //}

    QJsonObject response_jsonObj;
    QJsonObject jsonObject;


    QString WeGetJsonDel(request.getBody());
    QJsonParseError isErrorHappened;
    QJsonDocument jsonDocument = QJsonDocument::fromJson(WeGetJsonDel.toLocal8Bit().data(),&isErrorHappened);
    if( jsonDocument.isNull() )
    {
        QString logError = QString("recv http post(locker/downlink/deletePeople) body(json info),format invalid ===> please check the string,reason:%1 ")
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
//        参数名	    必选	类型	    说明
//        deviceID	是	string	设备ID
//        peopleID	是	string	人员ID
//        time	是	string	时间（YYYY-MM-DD hh:mm:ss )
//        sign	是	Sting	签名，算法请见签名加密说明

        jsonObject = jsonDocument.object();
        QString deviceId = jsonObject["deviceID"].toString();
        QString peopleId = jsonObject["peopleID"].toString();
        QString time_str = jsonObject["time"].toString();
        QString sign_str = jsonObject["sign"].toString();

    }
}
