/****************************************************************************
** Meta object code from reading C++ file 'speedconverter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dashboard/speedconverter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'speedconverter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpeedConverter_t {
    QByteArrayData data[6];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpeedConverter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpeedConverter_t qt_meta_stringdata_SpeedConverter = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SpeedConverter"
QT_MOC_LITERAL(1, 15, 16), // "velocidadChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "velocidadChangedMPH"
QT_MOC_LITERAL(4, 53, 22), // "velocidadChangedDouble"
QT_MOC_LITERAL(5, 76, 12) // "setVelocidad"

    },
    "SpeedConverter\0velocidadChanged\0\0"
    "velocidadChangedMPH\0velocidadChangedDouble\0"
    "setVelocidad"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpeedConverter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,
       4,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void SpeedConverter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpeedConverter *_t = static_cast<SpeedConverter *>(_o);
        switch (_id) {
        case 0: _t->velocidadChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->velocidadChangedMPH((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->velocidadChangedDouble((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setVelocidad((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SpeedConverter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpeedConverter::velocidadChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (SpeedConverter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpeedConverter::velocidadChangedMPH)) {
                *result = 1;
            }
        }
        {
            typedef void (SpeedConverter::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SpeedConverter::velocidadChangedDouble)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject SpeedConverter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SpeedConverter.data,
      qt_meta_data_SpeedConverter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpeedConverter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpeedConverter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpeedConverter.stringdata))
        return static_cast<void*>(const_cast< SpeedConverter*>(this));
    return QObject::qt_metacast(_clname);
}

int SpeedConverter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SpeedConverter::velocidadChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpeedConverter::velocidadChangedMPH(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SpeedConverter::velocidadChangedDouble(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE