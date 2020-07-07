#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include <QStandardPaths>
#include <QQmlNetworkAccessManagerFactory>
#include <HttpRequest>
#include <NetworkCookieJar>


#include "httplistener.h"

#include "database.hpp"

/**
 * Search the configuration file.
 * Aborts the application if not found.
 * @return The valid filename
 */
QString searchConfigFile() {
    QString binDir=QCoreApplication::applicationDirPath();
    QString appName=QCoreApplication::applicationName();
    QFile file;
    file.setFileName(binDir+"/webapp1.ini");
    if (!file.exists()) {
        file.setFileName(binDir+"/etc/webapp1.ini");
        if (!file.exists()) {
            file.setFileName(binDir+"/../etc/webapp1.ini");
            if (!file.exists()) {
                file.setFileName(binDir+"/../"+appName+"/etc/webapp1.ini");
                if (!file.exists()) {
                    file.setFileName(binDir+"/../../"+appName+"/etc/webapp1.ini");
                    if (!file.exists()) {
                        file.setFileName(binDir+"/../../../../../"+appName+"/etc/webapp1.ini");
                        if (!file.exists()) {
                            file.setFileName(QDir::rootPath()+"etc/webapp1.ini");
                        }
                    }
                }
            }
        }
    }
    if (file.exists()) {
        QString configFileName=QDir(file.fileName()).canonicalPath();
        qDebug("using config file %s", qPrintable(configFileName));
        return configFileName;
    }
    else {
        qFatal("config file not found");
    }
}




class MyNetworkAccessManagerFactory : public QQmlNetworkAccessManagerFactory
{
public:
    virtual QNetworkAccessManager *create(QObject *parent);
};

QNetworkAccessManager *MyNetworkAccessManagerFactory::create(QObject *parent)
{
    QNetworkAccessManager *nam = new QNetworkAccessManager(parent);

    nam->setCookieJar(new NetworkCookieJar(nam));

    return nam;
}


/*************************************** main start below... ********************************************/

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    database db("/Users/hdx/sqlite_test.db");

    //qml http网络设置,不直接用qml里的xmlhttp方法是因为，后续c++里面如果需要调用可以直接通用
    //https://github.com/qyvlik/HttpRequest 上面有demo和用法
    qmlRegisterType<HttpRequestImp>("Network",
                                 1, 0,
                                 "HttpRequestImp");

    qmlRegisterSingletonType<HttpRequestFactory>("Network",
                                                 1, 0,
                                                 "HttpRequestFactory",
                                                 &HttpRequestFactory::singleton);

    QQmlApplicationEngine engine;
    engine.setNetworkAccessManagerFactory(new MyNetworkAccessManagerFactory());
    engine.rootContext()->setContextProperty("$fullScreen", false);
    engine.load(QUrl(QLatin1String("qrc:/MainScreen.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    // Load the configuration file
    QString configFileName=searchConfigFile();
    QSettings* listenerSettings=new QSettings(configFileName, QSettings::IniFormat, &app);
    listenerSettings->beginGroup("listener");

    // Start the HTTP server
    new stefanfrings::HttpListener(listenerSettings, new stefanfrings::HttpRequestHandler(&app), &app);

    return app.exec();
}
