#include "httpopenlocker.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>


HttpOpenLocker::HttpOpenLocker(QObject* parent)
    : HttpRequestHandler(parent) {

}


// http://xx.com/locker/downlink/openLocker
void HttpOpenLocker::service(HttpRequest &request, HttpResponse &response)
{
    //返回格式如下
    //{
    //“result”: “0”，
    //“message”：”成功！”
    //}

    QJsonObject response_jsonObj;
    QJsonObject jsonObject;


    QString WeGetJsonOpenLock(request.getBody());
    QJsonParseError isErrorHappened;
    QJsonDocument jsonDocument = QJsonDocument::fromJson(WeGetJsonOpenLock.toLocal8Bit().data(),&isErrorHappened);
    if( jsonDocument.isNull() )
    {
        QString logError = QString("recv http post(locker/downlink/openLocker) body(json info),format invalid ===> please check the string,reason:%1 ")
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
//        参数名	   必选	类型	    说明
//        deviceID	是	string	设备ID
//        deviceName	是	string	设备名称
//        number	是	int	储物柜编号
//        time	是	string	时间（YYYY-MM-DD hh:mm:ss )
//        sign	是	Sting	签名，算法请见签名加密说明

        jsonObject = jsonDocument.object();
        QString deviceId = jsonObject["deviceID"].toString();
        QString deviceName = jsonObject["deviceName"].toString();
        int iNumber = jsonObject["number"].toInt();
        QString time_str = jsonObject["time"].toString();
        QString sign_str = jsonObject["sign"].toString();


    }
}
