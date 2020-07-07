#ifndef HTTPDELALLPEOPLECTRL_H
#define HTTPDELALLPEOPLECTRL_H

#include <QList>
#include <QString>
#include "httprequesthandler.h"

using namespace stefanfrings;


class HttpDelAllPeopleCtrl: public HttpRequestHandler
{
    Q_OBJECT
public:
    HttpDelAllPeopleCtrl(QObject* parent=Q_NULLPTR);

    void service(HttpRequest& request, HttpResponse& response);

private:

};



#endif // HTTPDELALLPEOPLECTRL_H
