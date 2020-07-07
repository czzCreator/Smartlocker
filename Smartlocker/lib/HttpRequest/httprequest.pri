INCLUDEPATH *= \
    $$PWD/include/

QT += network qml

SOURCES += \
    $$PWD/src/networkcookiejar.cpp \
    $$PWD/src/httprequestImp.cpp

HEADERS += \
    $$PWD/src/httprequest_p.h \
    $$PWD/src/networkcookiejar.h \
    $$PWD/src/httprequestImp.h


