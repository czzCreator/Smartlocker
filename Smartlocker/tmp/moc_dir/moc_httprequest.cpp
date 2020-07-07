/****************************************************************************
** Meta object code from reading C++ file 'httprequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/HttpRequest/src/httprequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httprequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HttpRequest_t {
    QByteArrayData data[79];
    char stringdata0[1226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpRequest_t qt_meta_stringdata_HttpRequest = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HttpRequest"
QT_MOC_LITERAL(1, 12, 7), // "started"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 16), // "downloadProgress"
QT_MOC_LITERAL(4, 38, 13), // "bytesReceived"
QT_MOC_LITERAL(5, 52, 10), // "bytesTotal"
QT_MOC_LITERAL(6, 63, 14), // "uploadProgress"
QT_MOC_LITERAL(7, 78, 9), // "bytesSent"
QT_MOC_LITERAL(8, 88, 8), // "finished"
QT_MOC_LITERAL(9, 97, 5), // "error"
QT_MOC_LITERAL(10, 103, 7), // "timeout"
QT_MOC_LITERAL(11, 111, 5), // "abort"
QT_MOC_LITERAL(12, 117, 19), // "responseTextChanged"
QT_MOC_LITERAL(13, 137, 17), // "readyStateChanged"
QT_MOC_LITERAL(14, 155, 13), // "statusChanged"
QT_MOC_LITERAL(15, 169, 17), // "statusTextChanged"
QT_MOC_LITERAL(16, 187, 5), // "clear"
QT_MOC_LITERAL(17, 193, 10), // "setTimeout"
QT_MOC_LITERAL(18, 204, 4), // "time"
QT_MOC_LITERAL(19, 209, 10), // "getTimeout"
QT_MOC_LITERAL(20, 220, 17), // "setRequestCookies"
QT_MOC_LITERAL(21, 238, 7), // "cookies"
QT_MOC_LITERAL(22, 246, 16), // "setRequestHeader"
QT_MOC_LITERAL(23, 263, 7), // "headers"
QT_MOC_LITERAL(24, 271, 10), // "headerName"
QT_MOC_LITERAL(25, 282, 5), // "value"
QT_MOC_LITERAL(26, 288, 16), // "getRequestHeader"
QT_MOC_LITERAL(27, 305, 4), // "open"
QT_MOC_LITERAL(28, 310, 6), // "method"
QT_MOC_LITERAL(29, 317, 3), // "url"
QT_MOC_LITERAL(30, 321, 5), // "async"
QT_MOC_LITERAL(31, 327, 4), // "send"
QT_MOC_LITERAL(32, 332, 4), // "data"
QT_MOC_LITERAL(33, 337, 20), // "getAllResponseHeader"
QT_MOC_LITERAL(34, 358, 12), // "responseText"
QT_MOC_LITERAL(35, 371, 10), // "readyState"
QT_MOC_LITERAL(36, 382, 18), // "HttpRequest::State"
QT_MOC_LITERAL(37, 401, 6), // "status"
QT_MOC_LITERAL(38, 408, 26), // "HttpRequest::NetworkStatus"
QT_MOC_LITERAL(39, 435, 10), // "statusText"
QT_MOC_LITERAL(40, 446, 5), // "State"
QT_MOC_LITERAL(41, 452, 7), // "UnStart"
QT_MOC_LITERAL(42, 460, 7), // "Loading"
QT_MOC_LITERAL(43, 468, 5), // "Error"
QT_MOC_LITERAL(44, 474, 8), // "Finished"
QT_MOC_LITERAL(45, 483, 7), // "TimeOut"
QT_MOC_LITERAL(46, 491, 13), // "NetworkStatus"
QT_MOC_LITERAL(47, 505, 7), // "NoError"
QT_MOC_LITERAL(48, 513, 22), // "ConnectionRefusedError"
QT_MOC_LITERAL(49, 536, 21), // "RemoteHostClosedError"
QT_MOC_LITERAL(50, 558, 17), // "HostNotFoundError"
QT_MOC_LITERAL(51, 576, 12), // "TimeoutError"
QT_MOC_LITERAL(52, 589, 22), // "OperationCanceledError"
QT_MOC_LITERAL(53, 612, 23), // "SslHandshakeFailedError"
QT_MOC_LITERAL(54, 636, 28), // "TemporaryNetworkFailureError"
QT_MOC_LITERAL(55, 665, 25), // "NetworkSessionFailedError"
QT_MOC_LITERAL(56, 691, 32), // "BackgroundRequestNotAllowedError"
QT_MOC_LITERAL(57, 724, 19), // "UnknownNetworkError"
QT_MOC_LITERAL(58, 744, 27), // "ProxyConnectionRefusedError"
QT_MOC_LITERAL(59, 772, 26), // "ProxyConnectionClosedError"
QT_MOC_LITERAL(60, 799, 18), // "ProxyNotFoundError"
QT_MOC_LITERAL(61, 818, 17), // "ProxyTimeoutError"
QT_MOC_LITERAL(62, 836, 32), // "ProxyAuthenticationRequiredError"
QT_MOC_LITERAL(63, 869, 17), // "UnknownProxyError"
QT_MOC_LITERAL(64, 887, 19), // "ContentAccessDenied"
QT_MOC_LITERAL(65, 907, 33), // "ContentOperationNotPermittedE..."
QT_MOC_LITERAL(66, 941, 20), // "ContentNotFoundError"
QT_MOC_LITERAL(67, 962, 27), // "AuthenticationRequiredError"
QT_MOC_LITERAL(68, 990, 18), // "ContentReSendError"
QT_MOC_LITERAL(69, 1009, 20), // "ContentConflictError"
QT_MOC_LITERAL(70, 1030, 16), // "ContentGoneError"
QT_MOC_LITERAL(71, 1047, 19), // "UnknownContentError"
QT_MOC_LITERAL(72, 1067, 20), // "ProtocolUnknownError"
QT_MOC_LITERAL(73, 1088, 29), // "ProtocolInvalidOperationError"
QT_MOC_LITERAL(74, 1118, 15), // "ProtocolFailure"
QT_MOC_LITERAL(75, 1134, 19), // "InternalServerError"
QT_MOC_LITERAL(76, 1154, 28), // "OperationNotImplementedError"
QT_MOC_LITERAL(77, 1183, 23), // "ServiceUnavailableError"
QT_MOC_LITERAL(78, 1207, 18) // "UnknownServerError"

    },
    "HttpRequest\0started\0\0downloadProgress\0"
    "bytesReceived\0bytesTotal\0uploadProgress\0"
    "bytesSent\0finished\0error\0timeout\0abort\0"
    "responseTextChanged\0readyStateChanged\0"
    "statusChanged\0statusTextChanged\0clear\0"
    "setTimeout\0time\0getTimeout\0setRequestCookies\0"
    "cookies\0setRequestHeader\0headers\0"
    "headerName\0value\0getRequestHeader\0"
    "open\0method\0url\0async\0send\0data\0"
    "getAllResponseHeader\0responseText\0"
    "readyState\0HttpRequest::State\0status\0"
    "HttpRequest::NetworkStatus\0statusText\0"
    "State\0UnStart\0Loading\0Error\0Finished\0"
    "TimeOut\0NetworkStatus\0NoError\0"
    "ConnectionRefusedError\0RemoteHostClosedError\0"
    "HostNotFoundError\0TimeoutError\0"
    "OperationCanceledError\0SslHandshakeFailedError\0"
    "TemporaryNetworkFailureError\0"
    "NetworkSessionFailedError\0"
    "BackgroundRequestNotAllowedError\0"
    "UnknownNetworkError\0ProxyConnectionRefusedError\0"
    "ProxyConnectionClosedError\0"
    "ProxyNotFoundError\0ProxyTimeoutError\0"
    "ProxyAuthenticationRequiredError\0"
    "UnknownProxyError\0ContentAccessDenied\0"
    "ContentOperationNotPermittedError\0"
    "ContentNotFoundError\0AuthenticationRequiredError\0"
    "ContentReSendError\0ContentConflictError\0"
    "ContentGoneError\0UnknownContentError\0"
    "ProtocolUnknownError\0ProtocolInvalidOperationError\0"
    "ProtocolFailure\0InternalServerError\0"
    "OperationNotImplementedError\0"
    "ServiceUnavailableError\0UnknownServerError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       4,  184, // properties
       2,  200, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  129,    2, 0x06 /* Public */,
       3,    2,  130,    2, 0x06 /* Public */,
       6,    2,  135,    2, 0x06 /* Public */,
       8,    0,  140,    2, 0x06 /* Public */,
       9,    0,  141,    2, 0x06 /* Public */,
      10,    0,  142,    2, 0x06 /* Public */,
      11,    0,  143,    2, 0x06 /* Public */,
      12,    0,  144,    2, 0x06 /* Public */,
      13,    0,  145,    2, 0x06 /* Public */,
      14,    0,  146,    2, 0x06 /* Public */,
      15,    0,  147,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      16,    0,  148,    2, 0x02 /* Public */,
      17,    1,  149,    2, 0x02 /* Public */,
      19,    0,  152,    2, 0x02 /* Public */,
      20,    1,  153,    2, 0x02 /* Public */,
      22,    1,  156,    2, 0x02 /* Public */,
      22,    2,  159,    2, 0x02 /* Public */,
      26,    1,  164,    2, 0x02 /* Public */,
      27,    3,  167,    2, 0x02 /* Public */,
      27,    2,  174,    2, 0x22 /* Public | MethodCloned */,
      31,    1,  179,    2, 0x02 /* Public */,
      31,    0,  182,    2, 0x22 /* Public | MethodCloned */,
      33,    0,  183,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    7,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QJsonObject,   21,
    QMetaType::Void, QMetaType::QJsonObject,   23,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   24,   25,
    QMetaType::QString, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl, QMetaType::Bool,   28,   29,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,   28,   29,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void,
    QMetaType::QJsonArray,

 // properties: name, type, flags
      34, QMetaType::QString, 0x00495001,
      35, 0x80000000 | 36, 0x00495009,
      37, 0x80000000 | 38, 0x00495009,
      39, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       7,
       8,
       9,
      10,

 // enums: name, flags, count, data
      40, 0x0,    5,  208,
      46, 0x0,   32,  218,

 // enum data: key, value
      41, uint(HttpRequest::UnStart),
      42, uint(HttpRequest::Loading),
      43, uint(HttpRequest::Error),
      44, uint(HttpRequest::Finished),
      45, uint(HttpRequest::TimeOut),
      47, uint(HttpRequest::NoError),
      48, uint(HttpRequest::ConnectionRefusedError),
      49, uint(HttpRequest::RemoteHostClosedError),
      50, uint(HttpRequest::HostNotFoundError),
      51, uint(HttpRequest::TimeoutError),
      52, uint(HttpRequest::OperationCanceledError),
      53, uint(HttpRequest::SslHandshakeFailedError),
      54, uint(HttpRequest::TemporaryNetworkFailureError),
      55, uint(HttpRequest::NetworkSessionFailedError),
      56, uint(HttpRequest::BackgroundRequestNotAllowedError),
      57, uint(HttpRequest::UnknownNetworkError),
      58, uint(HttpRequest::ProxyConnectionRefusedError),
      59, uint(HttpRequest::ProxyConnectionClosedError),
      60, uint(HttpRequest::ProxyNotFoundError),
      61, uint(HttpRequest::ProxyTimeoutError),
      62, uint(HttpRequest::ProxyAuthenticationRequiredError),
      63, uint(HttpRequest::UnknownProxyError),
      64, uint(HttpRequest::ContentAccessDenied),
      65, uint(HttpRequest::ContentOperationNotPermittedError),
      66, uint(HttpRequest::ContentNotFoundError),
      67, uint(HttpRequest::AuthenticationRequiredError),
      68, uint(HttpRequest::ContentReSendError),
      69, uint(HttpRequest::ContentConflictError),
      70, uint(HttpRequest::ContentGoneError),
      71, uint(HttpRequest::UnknownContentError),
      72, uint(HttpRequest::ProtocolUnknownError),
      73, uint(HttpRequest::ProtocolInvalidOperationError),
      74, uint(HttpRequest::ProtocolFailure),
      75, uint(HttpRequest::InternalServerError),
      76, uint(HttpRequest::OperationNotImplementedError),
      77, uint(HttpRequest::ServiceUnavailableError),
      78, uint(HttpRequest::UnknownServerError),

       0        // eod
};

void HttpRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpRequest *_t = static_cast<HttpRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->finished(); break;
        case 4: _t->error(); break;
        case 5: _t->timeout(); break;
        case 6: _t->abort(); break;
        case 7: _t->responseTextChanged(); break;
        case 8: _t->readyStateChanged(); break;
        case 9: _t->statusChanged(); break;
        case 10: _t->statusTextChanged(); break;
        case 11: _t->clear(); break;
        case 12: _t->setTimeout((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 13: { int _r = _t->getTimeout();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setRequestCookies((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 15: _t->setRequestHeader((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 16: _t->setRequestHeader((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 17: { QString _r = _t->getRequestHeader((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 19: _t->open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 20: _t->send((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->send(); break;
        case 22: { QJsonArray _r = _t->getAllResponseHeader();
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HttpRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HttpRequest::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::downloadProgress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HttpRequest::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::uploadProgress)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HttpRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::finished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (HttpRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::error)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (HttpRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::timeout)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (HttpRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::abort)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (HttpRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::responseTextChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (HttpRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::readyStateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (HttpRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::statusChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (HttpRequest::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequest::statusTextChanged)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpRequest *_t = static_cast<HttpRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getResponseText(); break;
        case 1: *reinterpret_cast< HttpRequest::State*>(_v) = _t->getReadyState(); break;
        case 2: *reinterpret_cast< HttpRequest::NetworkStatus*>(_v) = _t->getStatus(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getStatusText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject HttpRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpRequest.data,
      qt_meta_data_HttpRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HttpRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HttpRequest.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int HttpRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HttpRequest::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HttpRequest::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HttpRequest::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HttpRequest::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void HttpRequest::error()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void HttpRequest::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void HttpRequest::abort()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void HttpRequest::responseTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void HttpRequest::readyStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void HttpRequest::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void HttpRequest::statusTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
struct qt_meta_stringdata_HttpRequestFactory_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpRequestFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpRequestFactory_t qt_meta_stringdata_HttpRequestFactory = {
    {
QT_MOC_LITERAL(0, 0, 18), // "HttpRequestFactory"
QT_MOC_LITERAL(1, 19, 6), // "create"
QT_MOC_LITERAL(2, 26, 12), // "HttpRequest*"
QT_MOC_LITERAL(3, 39, 0) // ""

    },
    "HttpRequestFactory\0create\0HttpRequest*\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpRequestFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2,

       0        // eod
};

void HttpRequestFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpRequestFactory *_t = static_cast<HttpRequestFactory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { HttpRequest* _r = _t->create();
            if (_a[0]) *reinterpret_cast< HttpRequest**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject HttpRequestFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpRequestFactory.data,
      qt_meta_data_HttpRequestFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HttpRequestFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpRequestFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HttpRequestFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HttpRequestFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
