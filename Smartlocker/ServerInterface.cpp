#include "ServerInterface.h"

ServerInterface::ServerInterface()
{

}

ServerInterface::~ServerInterface()
{

}

bool ServerInterface::pushOperation(OperationInfo opinfo)
{
    QJsonObject jsonobj;
    jsonobj.insert("logID", opinfo.logID);
    jsonobj.insert("deviceID", opinfo.deviceID);
    jsonobj.insert("deviceName", opinfo.deviceName);
    jsonobj.insert("peopleID", opinfo.peopleID);
    jsonobj.insert("peopleName", opinfo.peopleName);
    jsonobj.insert("phone", opinfo.phone);
    jsonobj.insert("time", opinfo.time);
    jsonobj.insert("number", opinfo.number);
    jsonobj.insert("option", opinfo.option);
    jsonobj.insert("openType", opinfo.openType);
    jsonobj.insert("sign", opinfo.sign);
    QJsonDocument document;
    document.setObject(jsonobj);
    QByteArray byteArray = document.toJson(QJsonDocument::Compact);
    QString strJson(byteArray);

    HttpRequestImp req;
    req.open("POST", QUrl("http://xx.com/locker/uplink/deviceLog"));
    req.setTimeout(30 * 1000);      // 30 s
    req.setRequestHeader("Content-Type", "application/json");
    req.setRequestHeader("Referer", "");
    req.send(strJson);
    return true;
}

bool ServerInterface::getSmsCode(CodeInfo cinfo)
{
    QJsonObject jsonobj;
    jsonobj.insert("deviceID", cinfo.deviceID);
    jsonobj.insert("deviceName", cinfo.deviceName);
    jsonobj.insert("phone", cinfo.phone);
    jsonobj.insert("time", cinfo.time);
    jsonobj.insert("code", cinfo.code);
    jsonobj.insert("sign", cinfo.sign);
    QJsonDocument document;
    document.setObject(jsonobj);
    QByteArray byteArray = document.toJson(QJsonDocument::Compact);
    QString strJson(byteArray);

    HttpRequestImp req;
    req.open("POST", QUrl("http://xx.com/locker/uplink/smsCode"));
    req.setTimeout(30 * 1000);      // 30 s
    req.setRequestHeader("Content-Type", "application/json");
    req.setRequestHeader("Referer", "");
    req.send(strJson);
    return true;
}

bool ServerInterface::getUserInfo()
{
    return true;
}

bool ServerInterface::delUserInfo()
{
    return true;
}

bool ServerInterface::delAllUserInfo()
{
    return true;
}

bool ServerInterface::openTheDoor()
{
    return true;
}
