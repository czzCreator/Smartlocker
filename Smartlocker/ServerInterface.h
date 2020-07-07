#ifndef SERVERINTERFACE_H
#define SERVERINTERFACE_H

#endif // SERVERINTERFACE_H

#include <QObject>
#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonArray>

#include "HttpRequest"

struct OperationInfo
{
    QString logID;
    QString deviceID;
    QString deviceName;
    QString peopleID;
    QString peopleName;
    QString phone;
    QString time;
    int number;
    int option;
    int openType;
    QString sign;
};

struct CodeInfo
{
    QString deviceID;
    QString deviceName;
    QString phone;
    QString time;
    int code;
    QString sign;
};

class ServerInterface: public QObject
{
    Q_OBJECT
public:
    ServerInterface();
    virtual ~ServerInterface();
    bool pushOperation(OperationInfo opinfo);
    bool getSmsCode(CodeInfo cinfo);
    bool getUserInfo();
    bool delUserInfo();
    bool delAllUserInfo();
    bool openTheDoor();
};
