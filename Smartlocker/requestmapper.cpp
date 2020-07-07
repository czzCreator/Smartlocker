#include "requestmapper.h"

#include "httpaddpeoplecontroller.h"
#include "httpdelpeoplecontroller.h"
#include "httpdelallpeoplectrl.h"
#include "httpopenlocker.h"


RequestMapper::RequestMapper(QObject* parent)
    : HttpRequestHandler(parent) {
    // empty
}

void RequestMapper::service(HttpRequest& request, HttpResponse& response) {
    QByteArray path=request.getPath();
    qDebug("RequestMapper: path=%s",path.data());

    //区分是什么样的方法 get 还是 post
    QString getRequestMethodType(request.getMethod());

    if (getRequestMethodType.contains("POST") && path=="/locker/downlink/addPeople") {
        HttpAddPeopleController().service(request, response);
    }
    else if (getRequestMethodType.contains("POST") && path=="/locker/downlink/deletePeople") {
        HttpDelPeopleController().service(request, response);
    }
    else if (getRequestMethodType.contains("POST") && path=="/locker/downlink/deleteAllPeople") {
        HttpDelAllPeopleCtrl().service(request, response);
    }
    else if (getRequestMethodType.contains("POST") && path=="/locker/downlink/openLocker") {
        HttpOpenLocker().service(request, response);
    }
    else {
        response.setStatus(404,"Not found");
        response.write("The URL is wrong, no such document.",true);
    }

    qDebug("RequestMapper: finished request");
}
