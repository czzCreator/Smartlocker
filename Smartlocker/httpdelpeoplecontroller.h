#ifndef HTTPDELPEOPLECONTROLLER_H
#define HTTPDELPEOPLECONTROLLER_H


#include <QList>
#include <QString>
#include "httprequesthandler.h"


using namespace stefanfrings;


class HttpDelPeopleController: public HttpRequestHandler
{
    Q_OBJECT
public:
    HttpDelPeopleController(QObject* parent=Q_NULLPTR);

    void service(HttpRequest& request, HttpResponse& response);

private:

};



#endif // HTTPDELPEOPLECONTROLLER_H
