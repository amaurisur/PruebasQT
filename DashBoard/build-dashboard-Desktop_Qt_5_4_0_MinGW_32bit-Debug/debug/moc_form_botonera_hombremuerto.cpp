/****************************************************************************
** Meta object code from reading C++ file 'form_botonera_hombremuerto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dashboard/form_botonera_hombremuerto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form_botonera_hombremuerto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Form_botonera_hombreMuerto_t {
    QByteArrayData data[7];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Form_botonera_hombreMuerto_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Form_botonera_hombreMuerto_t qt_meta_stringdata_Form_botonera_hombreMuerto = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Form_botonera_hombreMuerto"
QT_MOC_LITERAL(1, 27, 22), // "on_SistemaHombreMuerto"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 23), // "off_SistemaHombreMuerto"
QT_MOC_LITERAL(4, 75, 15), // "on_rutinaAlarma"
QT_MOC_LITERAL(5, 91, 13), // "on_rutinaSafe"
QT_MOC_LITERAL(6, 105, 14) // "do_rutinaMurio"

    },
    "Form_botonera_hombreMuerto\0"
    "on_SistemaHombreMuerto\0\0off_SistemaHombreMuerto\0"
    "on_rutinaAlarma\0on_rutinaSafe\0"
    "do_rutinaMurio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form_botonera_hombreMuerto[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Form_botonera_hombreMuerto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Form_botonera_hombreMuerto *_t = static_cast<Form_botonera_hombreMuerto *>(_o);
        switch (_id) {
        case 0: _t->on_SistemaHombreMuerto(); break;
        case 1: _t->off_SistemaHombreMuerto(); break;
        case 2: _t->on_rutinaAlarma(); break;
        case 3: _t->on_rutinaSafe(); break;
        case 4: _t->do_rutinaMurio(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Form_botonera_hombreMuerto::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Form_botonera_hombreMuerto.data,
      qt_meta_data_Form_botonera_hombreMuerto,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Form_botonera_hombreMuerto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form_botonera_hombreMuerto::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Form_botonera_hombreMuerto.stringdata))
        return static_cast<void*>(const_cast< Form_botonera_hombreMuerto*>(this));
    return QWidget::qt_metacast(_clname);
}

int Form_botonera_hombreMuerto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
