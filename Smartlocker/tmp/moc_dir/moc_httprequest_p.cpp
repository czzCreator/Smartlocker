/****************************************************************************
** Meta object code from reading C++ file 'httprequest_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/HttpRequest/src/httprequest_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httprequest_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HttpRequestPrivate_t {
    QByteArrayData data[15];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpRequestPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpRequestPrivate_t qt_meta_stringdata_HttpRequestPrivate = {
    {
QT_MOC_LITERAL(0, 0, 18), // "HttpRequestPrivate"
QT_MOC_LITERAL(1, 19, 19), // "responseTextChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "readyStateChanged"
QT_MOC_LITERAL(4, 58, 13), // "statusChanged"
QT_MOC_LITERAL(5, 72, 17), // "statusTextChanged"
QT_MOC_LITERAL(6, 90, 8), // "finished"
QT_MOC_LITERAL(7, 99, 5), // "error"
QT_MOC_LITERAL(8, 105, 10), // "onFinished"
QT_MOC_LITERAL(9, 116, 12), // "responseText"
QT_MOC_LITERAL(10, 129, 10), // "readyState"
QT_MOC_LITERAL(11, 140, 21), // "HttpRequestImp::State"
QT_MOC_LITERAL(12, 162, 6), // "status"
QT_MOC_LITERAL(13, 169, 29), // "HttpRequestImp::NetworkStatus"
QT_MOC_LITERAL(14, 199, 10) // "statusText"

    },
    "HttpRequestPrivate\0responseTextChanged\0"
    "\0readyStateChanged\0statusChanged\0"
    "statusTextChanged\0finished\0error\0"
    "onFinished\0responseText\0readyState\0"
    "HttpRequestImp::State\0status\0"
    "HttpRequestImp::NetworkStatus\0statusText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpRequestPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QByteArray, 0x00495103,
      10, 0x80000000 | 11, 0x0049510b,
      12, 0x80000000 | 13, 0x0049510b,
      14, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void HttpRequestPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpRequestPrivate *_t = static_cast<HttpRequestPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseTextChanged(); break;
        case 1: _t->readyStateChanged(); break;
        case 2: _t->statusChanged(); break;
        case 3: _t->statusTextChanged(); break;
        case 4: _t->finished(); break;
        case 5: _t->error(); break;
        case 6: _t->onFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HttpRequestPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestPrivate::responseTextChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HttpRequestPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestPrivate::readyStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HttpRequestPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestPrivate::statusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HttpRequestPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestPrivate::statusTextChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (HttpRequestPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestPrivate::finished)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (HttpRequestPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HttpRequestPrivate::error)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HttpRequestPrivate *_t = static_cast<HttpRequestPrivate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->getResponseText(); break;
        case 1: *reinterpret_cast< HttpRequestImp::State*>(_v) = _t->getReadyState(); break;
        case 2: *reinterpret_cast< HttpRequestImp::NetworkStatus*>(_v) = _t->getStatus(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getStatusText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HttpRequestPrivate *_t = static_cast<HttpRequestPrivate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setResponseText(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setReadyState(*reinterpret_cast< HttpRequestImp::State*>(_v)); break;
        case 2: _t->setStatus(*reinterpret_cast< HttpRequestImp::NetworkStatus*>(_v)); break;
        case 3: _t->setStatusText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_HttpRequestPrivate[] = {
        &HttpRequestImp::staticMetaObject,
    nullptr
};

const QMetaObject HttpRequestPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpRequestPrivate.data,
      qt_meta_data_HttpRequestPrivate,  qt_static_metacall, qt_meta_extradata_HttpRequestPrivate, nullptr}
};


const QMetaObject *HttpRequestPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpRequestPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HttpRequestPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HttpRequestPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void HttpRequestPrivate::responseTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HttpRequestPrivate::readyStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HttpRequestPrivate::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void HttpRequestPrivate::statusTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void HttpRequestPrivate::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void HttpRequestPrivate::error()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
