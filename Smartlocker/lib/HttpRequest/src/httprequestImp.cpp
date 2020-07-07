#include "httprequestImp.h"
#include "httprequest_p.h"
#include "networkcookiejar.h"

#include <QTimer>
#include <QtDebug>
#include <QtQml>
#include <QNetworkCookie>
#include <QVariant>

HttpRequestImp::HttpRequestImp(QObject *parent) :
    HttpRequestImp(Q_NULLPTR, parent)
{ }

HttpRequestImp::HttpRequestImp(QNetworkAccessManager *networkManager, QObject *parent):
    QObject(parent),
    d_ptr(new HttpRequestPrivate(networkManager, this))
{
    qRegisterMetaType<NetworkStatus>("HttpRequestImp::NetworkStatus");
    qRegisterMetaType<State>("HttpRequestImp::State");

    connect(d_ptr, &HttpRequestPrivate::responseTextChanged, this, &HttpRequestImp::responseTextChanged);
    connect(d_ptr, &HttpRequestPrivate::readyStateChanged, this, &HttpRequestImp::readyStateChanged);
    connect(d_ptr, &HttpRequestPrivate::statusChanged, this, &HttpRequestImp::statusChanged);
    connect(d_ptr, &HttpRequestPrivate::statusTextChanged, this, &HttpRequestImp::statusTextChanged);
    connect(d_ptr, &HttpRequestPrivate::error, this, &HttpRequestImp::error);
}

HttpRequestImp::~HttpRequestImp()
{
}

void HttpRequestImp::clear()
{
    Q_EMIT abort();
    d_ptr->clear();
}

void HttpRequestImp::setTimeout(qint32 time)
{
    if(this->getReadyState() != Loading ) {
        d_ptr->setTimeout(time);
    }
}

int HttpRequestImp::getTimeout() const
{
    return d_ptr->getTimeout();
}

void HttpRequestImp::setRequestCookies(const QJsonObject &cookies)
{
    QJsonObject::ConstIterator iter = cookies.begin();
    QJsonObject::ConstIterator end = cookies.end();

    QByteArray cookiesString = "";

    while(iter != end) {
        QByteArray cookieName = iter.key().toUtf8();
        QByteArray cookieValue = iter.value().toString().toUtf8();
        QByteArray cookieString = cookieName + "=" + cookieValue + "; ";
        cookiesString += cookieString;

        iter++;
    }
    this->setRequestHeader("Cookie", cookiesString);
}

void HttpRequestImp::setRequestHeader(const QJsonObject &headers)
{
    QJsonObject::ConstIterator iter = headers.begin();
    QJsonObject::ConstIterator end = headers.end();

    while(iter != end) {
        this->setRequestHeader(iter.key().toUtf8(), iter.value().toString().toUtf8());
        iter++;
    }
}

void HttpRequestImp::setRequestHeader(const QByteArray &headerName, const QByteArray &value)
{
    if(d_ptr->getReadyState() == Loading) {
        return ;
    }

    QNetworkRequest request(d_ptr->getRequest());
    request.setRawHeader(headerName, value);
    d_ptr->setRequest(request);
}

QString HttpRequestImp::getRequestHeader(const QString &headerName) const
{
    return d_ptr->getRequest().rawHeader(headerName.toUtf8());
}

void HttpRequestImp::open(const QString &method, const QUrl &url, bool async)
{
    Q_UNUSED(async)

    d_ptr->setMethodName(method);
    QNetworkRequest request(d_ptr->getRequest());
    request.setUrl(url);
    d_ptr->setRequest(request);
    d_ptr->setReadyState(HttpRequestImp::UnStart);
    Q_EMIT this->abort();
}

void HttpRequestImp::send(const QString &data)
{
    QNetworkAccessManager* netManager = d_ptr->getManager();
    if(netManager == Q_NULLPTR) {
        qDebug() << "NetAccessManager is nullptr";
        Q_EMIT error();
        return;
    }

    if(d_ptr->getReadyState() == Loading) {
        return ;
    }
    NetworkCookieJar* cookieJar = qobject_cast<NetworkCookieJar*>(d_ptr->getManager()->cookieJar());
    if(cookieJar) {

        QNetworkRequest request(d_ptr->getRequest());
        auto cookies = cookieJar->getAllCookies();
        QByteArray cookiesString;
        foreach(auto cookie, cookies) {
            cookiesString += cookie.toRawForm() + ";";
        }
        if(!request.hasRawHeader("Cookie")) {
#ifdef QT_DEBUG
        qDebug() << "cookiesString" << cookiesString;
#endif
            request.setRawHeader("Cookie", cookiesString);
        }
        d_ptr->setRequest(request);
    }

    QString methodName = d_ptr->getMethodName().toUpper();

    if(methodName == "GET") {
        QNetworkReply* reply = netManager->get(d_ptr->getRequest());
        d_ptr->setReply(reply);

    } else if(methodName == "POST") {
        QNetworkReply* reply = netManager->post(d_ptr->getRequest(), data.toUtf8());
        d_ptr->setReply(reply);

    } else if(methodName == "PUT") {
        QNetworkReply* reply = netManager->put(d_ptr->getRequest(), data.toUtf8());
        d_ptr->setReply(reply);

    } else if(methodName == "DELETE") {
        QNetworkReply* reply = netManager->deleteResource(d_ptr->getRequest());
        d_ptr->setReply(reply);

    } else if(methodName == "HEAD") {
        QNetworkReply* reply = netManager->head(d_ptr->getRequest());
        d_ptr->setReply(reply);
    } else {
        qDebug() << "Invaild method : " << methodName;
        return ;
    }

    connect(d_ptr, &HttpRequestPrivate::finished,
            this, &HttpRequestImp::finished);

    connect(this, &HttpRequestImp::abort,
            d_ptr->getReply(), &QNetworkReply::abort);

    connect( d_ptr->getReply(), &QNetworkReply::downloadProgress,
             this, &HttpRequestImp::downloadProgress);

    connect( d_ptr->getReply(), &QNetworkReply::uploadProgress,
             this, &HttpRequestImp::uploadProgress);

    const int usageNumber = d_ptr->increaseUsageCount();

    if(d_ptr->getTimeout() > 0) {
        QTimer::singleShot(d_ptr->getTimeout(), this, [=](){
            if(d_ptr->getReply()
                    && d_ptr->getReply()->isRunning()
                    && usageNumber == d_ptr->getUsageCount())
            {
                Q_EMIT this->abort();
                Q_EMIT this->timeout();
            }
        });
    }

    Q_EMIT started();
    d_ptr->setReadyState(HttpRequestImp::Loading);
}

/*
 * QString more better than QByteArray in qml.
*/
QString HttpRequestImp::getResponseText() const
{
    return QString(d_ptr->getResponseText());
}

QString HttpRequestImp::getStatusText() const
{
    return d_ptr->getStatusText();
}

HttpRequestImp::NetworkStatus HttpRequestImp::getStatus() const
{
    return d_ptr->getStatus();
}

HttpRequestImp::State HttpRequestImp::getReadyState() const
{
    return d_ptr->getReadyState();
}

QJsonArray HttpRequestImp::getAllResponseHeader() const
{
    QList<QNetworkReply::RawHeaderPair> rawHeaderPairs = d_ptr->getRawHeaderPairs();
    QJsonArray responseHeaders;
    if(!rawHeaderPairs.isEmpty()) {
        foreach(auto iter, rawHeaderPairs) {
            QJsonObject header;
            header[iter.first] = QString(iter.second);
            responseHeaders.push_back(QJsonValue(header));
        }
    }
    return responseHeaders;
}

QNetworkAccessManager *HttpRequestImp::manager() const {
    return d_ptr->getManager();
}

void HttpRequestImp::setManager(QNetworkAccessManager *manager) {
    d_ptr->setManager(manager);
}


void HttpRequestImp::classBegin()
{
    // qDebug() << Q_FUNC_INFO;
}

void HttpRequestImp::componentComplete()
{
    // qDebug() << Q_FUNC_INFO;
    QQmlContext* context = qmlContext(this);
    if(context && context->engine() && context->engine()->networkAccessManager()) {
        d_ptr->setManager(context->engine()->networkAccessManager());
         qDebug() << "Set Net Access Manager Success";
    }
}

HttpRequestFactory::HttpRequestFactory(QObject *parent):
    QObject(parent)
{}

HttpRequestImp *HttpRequestFactory::create()
{
    qDebug() << Q_FUNC_INFO;
    HttpRequestImp* httpRequest = nullptr;
    QQmlEngine* qmlEngine = qobject_cast<QQmlEngine *>(this->parent());
    if(qmlEngine && qmlEngine->networkAccessManager()) {
        httpRequest = new HttpRequestImp(qmlEngine->networkAccessManager(),
                                      Q_NULLPTR);
    } else {
        httpRequest = new HttpRequestImp();
    }

    QQmlEngine::setObjectOwnership(httpRequest, QQmlEngine::JavaScriptOwnership);

    return httpRequest;
}

QObject *HttpRequestFactory::singleton(QQmlEngine *engine, QJSEngine *jsEngine)
{
    Q_UNUSED(jsEngine)
    return new HttpRequestFactory(engine);
}

