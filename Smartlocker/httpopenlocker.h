#ifndef HTTPOPENLOCKER_H
#define HTTPOPENLOCKER_H

#include <QList>
#include <QString>
#include "httprequesthandler.h"

using namespace stefanfrings;

class HttpOpenLocker: public HttpRequestHandler
{
    Q_OBJECT
public:
    HttpOpenLocker(QObject* parent=Q_NULLPTR);

    void service(HttpRequest& request, HttpResponse& response);

private:

};


#endif // HTTPOPENLOCKER_H
