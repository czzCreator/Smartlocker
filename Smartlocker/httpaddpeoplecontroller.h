#ifndef HTTPADDPEOPLECONTROLLER_H
#define HTTPADDPEOPLECONTROLLER_H

#include <QList>
#include <QString>
#include "httprequesthandler.h"


using namespace stefanfrings;


class HttpAddPeopleController: public HttpRequestHandler
{
    Q_OBJECT
public:
    HttpAddPeopleController(QObject* parent=Q_NULLPTR);

    void service(HttpRequest& request, HttpResponse& response);

private:

};



#endif // HTTPADDPEOPLECONTROLLER_H
