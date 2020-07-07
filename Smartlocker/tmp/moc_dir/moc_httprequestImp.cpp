/****************************************************************************
** Meta object code from reading C++ file 'httprequestImp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/HttpRequest/src/httprequestImp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httprequestImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HttpRequestImp_t {
    QByteArrayData data[79];
    char stringdata0[1235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpRequestImp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpRequestImp_t qt_meta_stringdata_HttpRequestImp = {
    {
QT_MOC_LITERAL(0, 0, 14), // "HttpRequestImp"
QT_MOC_LITERAL(1, 15, 7), // "started"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "downloadProgress"
QT_MOC_LITERAL(4, 41, 13), // "bytesReceived"
QT_MOC_LITERAL(5, 55, 10), // "bytesTotal"
QT_MOC_LITERAL(6, 66, 14), // "uploadProgress"
QT_MOC_LITERAL(7, 81, 9), // "bytesSent"
QT_MOC_LITERAL(8, 91, 8), // "finished"
QT_MOC_LITERAL(9, 100, 5), // "error"
QT_MOC_LITERAL(10, 106, 7), // "timeout"
QT_MOC_LITERAL(11, 114, 5), // "abort"
QT_MOC_LITERAL(12, 120, 19), // "responseTextChanged"
QT_MOC_LITERAL(13, 140, 17), // "readyStateChanged"
QT_MOC_LITERAL(14, 158, 13), // "statusChanged"
QT_MOC_LITERAL(15, 172, 17), // "statusTextChanged"
QT_MOC_LITERAL(16, 190, 5), // "clear"
QT_MOC_LITERAL(17, 196, 10), // "setTimeout"
QT_MOC_LITERAL(18, 207, 4), // "time"
QT_MOC_LITERAL(19, 212, 10), // "getTimeout"
QT_MOC_LITERAL(20, 223, 17), // "setRequestCookies"
QT_MOC_LITERAL(21, 241, 7), // "cookies"
QT_MOC_LITERAL(22, 249, 16), // "setRequestHeader"
QT_MOC_LITERAL(23, 266, 7), // "headers"
QT_MOC_LITERAL(24, 274, 10), // "headerName"
QT_MOC_LITERAL(25, 285, 5), // "value"
QT_MOC_LITERAL(26, 291, 16), // "getRequestHeader"
QT_MOC_LITERAL(27, 308, 4), // "open"
QT_MOC_LITERAL(28, 313, 6), // "method"
QT_MOC_LITERAL(29, 320, 3), // "url"
QT_MOC_LITERAL(30, 324, 5), // "async"
QT_MOC_LITERAL(31, 330, 4), // "send"
QT_MOC_LITERAL(32, 335, 4), // "data"
QT_MOC_LITERAL(33, 340, 20), // "getAllResponseHeader"
QT_MOC_LITERAL(34, 361, 12), // "responseText"
QT_MOC_LITERAL(35, 374, 10), // "readyState"
QT_MOC_LITERAL(36, 385, 21), // "HttpRequestImp::State"
QT_MOC_LITERAL(37, 407, 6), // "status"
QT_MOC_LITERAL(38, 414, 29), // "HttpRequestImp::NetworkStatus"
QT_MOC_LITERAL(39, 444, 10), // "statusText"
QT_MOC_LITERAL(40, 455, 5), // "State"
QT_MOC_LITERAL(41, 461, 7), // "UnStart"
QT_MOC_LITERAL(42, 469, 7), // "Loading"
QT_MOC_LITERAL(43, 477, 5), // "Error"
QT_MOC_LITERAL(44, 483, 8), // "Finished"
QT_MOC_LITERAL(45, 492, 7), // "TimeOut"
QT_MOC_LITERAL(46, 500, 13), // "NetworkStatus"
QT_MOC_LITERAL(47, 514, 7), // "NoError"
QT_MOC_LITERAL(48, 522, 22), // "ConnectionRefusedError"
QT_MOC_LITERAL(49, 545, 21), // "RemoteHostClosedError"
QT_MOC_LITERAL(50, 567, 17), // "HostNotFoundError"
QT_MOC_LITERAL(51, 585, 12), // "TimeoutError"
QT_MOC_LITERAL(52, 598, 22), // "OperationCanceledError"
QT_MOC_LITERAL(53, 621, 23), // "SslHandshakeFailedError"
QT_MOC_LITERAL(54, 645, 28), // "TemporaryNetworkFailureError"
QT_MOC_LITERAL(55, 674, 25), // "NetworkSessionFailedError"
QT_MOC_LITERAL(56, 700, 32), // "BackgroundRequestNotAllowedError"
QT_MOC_LITERAL(57, 733, 19), // "UnknownNetworkError"
QT_MOC_LITERAL(58, 753, 27), // "ProxyConnectionRefusedError"
QT_MOC_LITERAL(59, 781, 26), // "ProxyConnectionClosedError"
QT_MOC_LITERAL(60, 808, 18), // "ProxyNotFoundError"
QT_MOC_LITERAL(61, 827, 17), // "ProxyTimeoutError"
QT_MOC_LITERAL(62, 845, 32), // "ProxyAuthenticationRequiredError"
QT_MOC_LITERAL(63, 878, 17), // "UnknownProxyError"
QT_MOC_LITERAL(64, 896, 19), // "ContentAccessDenied"
QT_MOC_LITERAL(65, 916, 33), // "ContentOperationNotPermittedE..."
QT_MOC_LITERAL(66, 950, 20), // "ContentNotFoundError"
QT_MOC_LITERAL(67, 971, 27), // "AuthenticationRequiredError"
QT_MOC_LITERAL(68, 999, 18), // "ContentReSendError"
QT_MOC_LITERAL(69, 1018, 20), // "ContentConflictError"
QT_MOC_LITERAL(70, 1039, 16), // "ContentGoneError"
QT_MOC_LITERAL(71, 1056, 19), // "UnknownContentError"
QT_MOC_LITERAL(72, 1076, 20), // "ProtocolUnknownError"
QT_MOC_LITERAL(73, 1097, 29), // "ProtocolInvalidOperationError"
QT_MOC_LITERAL(74, 1127, 15), // "ProtocolFailure"
QT_MOC_LITERAL(75, 1143, 19), // "InternalServerError"
QT_MOC_LITERAL(76, 1163, 28), // "OperationNotImplementedError"
QT_MOC_LITERAL(77, 1192, 23), // "ServiceUnavailableError"
QT_MOC_LITERAL(78, 1216, 18) // "UnknownServerError"

    },
    "HttpRequestImp\0started\0\0downloadProgress\0"
    "bytesReceived\0bytesTotal\0uploadProgress\0"
    "bytesSent\0finished\0error\0timeout\0abort\0"
    "responseTextChanged\0readyStateChanged\0"
    "statusChanged\0statusTextChanged\0clear\0"
    "setTimeout\0time\0getTimeout\0setRequestCookies\0"
    "cookies\0setRequestHeader\0headers\0"
    "headerName\0value\0getRequestHeader\0"
    "open\0method\0url\0async\0send\0data\0"
    "getAllResponseHeader\0responseText\0"
    "readyState\0HttpRequestImp::State\0"
    "status\0HttpRequestImp::NetworkStatus\0"
    "statusText\0State\0UnStart\0Loading\0Error\0"
    "Finished\0TimeOut\0NetworkStatus\0NoError\0"
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

static const uint qt_meta_data_HttpRequestImp[] = {

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
      41, uint(HttpRequestImp::UnStart),
      42, uint(HttpRequestImp::Loading),
      43, uint(HttpRequestImp::Error),
      44, uint(HttpRequestImp::Finished),
      45, uint(HttpRequestImp::TimeOut),
      47, uint(HttpRequestImp::NoError),
      48, uint(HttpRequestImp::ConnectionRefusedError),
      49, uint(HttpRequestImp::RemoteHostClosedError),
      50, uint(HttpRequestImp::HostNotFoundError),
      51, uint(HttpRequestImp::TimeoutError),
      52, uint(HttpRequestImp::OperationCanceledError),
      53, uint(HttpRequestImp::SslHandshakeFailedError),
      54, uint(HttpRequestImp::TemporaryNetworkFailureError),
      55, uint(HttpRequestImp::NetworkSessionFailedError),
      56, uint(HttpRequestImp::BackgroundRequestNotAllowedError),
      57, uint(HttpRequestImp::UnknownNetworkError),
      58, uint(HttpRequestImp::ProxyConnectionRefusedError),
      59, uint(HttpRequestImp::ProxyConnectionClosedError),
      60, uint(HttpRequestImp::ProxyNotFoundError),
      61, uint(HttpRequestImp::ProxyTimeoutError),
      62, uint(HttpRequestImp::ProxyAuthenticationRequiredError),
      63, uint(HttpRequestImp::UnknownProxyError),
      64, uint(HttpRequestImp::ContentAccessDenied),
      65, uint(HttpRequestImp::ContentOperationNotPermittedError),
      66, uint(HttpRequestImp::ContentNotFoundError),
      67, uint(HttpRequestImp::AuthenticationRequiredError),
      68, uint(HttpRequestImp::ContentReSendError),
      69, uint(HttpRequestImp::ContentConflictError),
      70, uint(HttpRequestImp::ContentGoneError),
      71, uint(HttpRequestImp::UnknownContentError),
      72, uint(HttpRequestImp::ProtocolUnknownError),
      73, uint(HttpRequestImp::ProtocolInvalidOperationError),
      74, uint(HttpRequestImp::ProtocolFailure),
      75, uint(HttpRequestImp::InternalServerError),
      76, uint(HttpRequestImp::OperationNotImplementedError),
      77, uint(HttpRequestImp::ServiceUnavailableError),
      78, uint(HttpRequestImp::UnknownServerError),

       0        // eod
};

void HttpRequestImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpRequestImp *_t = static_cast<HttpRequestImp *>(_o);
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
            typedef void (HttpRequestImp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HttpRequestImp::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::downloadProgress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HttpRequestImp::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::uploadProgress)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HttpRequestImp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::finished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (HttpRequestImp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::error)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (HttpRequestImp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::timeout)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (HttpRequestImp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::abort)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (HttpRequestImp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::responseTextChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (HttpRequestImp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::readyStateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (HttpRequestImp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::statusChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (HttpRequestImp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestImp::statusTextChanged)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpRequestImp *_t = static_cast<HttpRequestImp *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getResponseText(); break;
        case 1: *reinterpret_cast< HttpRequestImp::State*>(_v) = _t->getReadyState(); break;
        case 2: *reinterpret_cast< HttpRequestImp::NetworkStatus*>(_v) = _t->getStatus(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getStatusText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject HttpRequestImp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpRequestImp.data,
      qt_meta_data_HttpRequestImp,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HttpRequestImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpRequestImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HttpRequestImp.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int HttpRequestImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void HttpRequestImp::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HttpRequestImp::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HttpRequestImp::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HttpRequestImp::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void HttpRequestImp::error()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void HttpRequestImp::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void HttpRequestImp::abort()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void HttpRequestImp::responseTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void HttpRequestImp::readyStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void HttpRequestImp::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void HttpRequestImp::statusTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
struct qt_meta_stringdata_HttpRequestFactory_t {
    QByteArrayData data[4];
    char stringdata0[43];
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
QT_MOC_LITERAL(2, 26, 15), // "HttpRequestImp*"
QT_MOC_LITERAL(3, 42, 0) // ""

    },
    "HttpRequestFactory\0create\0HttpRequestImp*\0"
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
        case 0: { HttpRequestImp* _r = _t->create();
            if (_a[0]) *reinterpret_cast< HttpRequestImp**>(_a[0]) = std::move(_r); }  break;
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
