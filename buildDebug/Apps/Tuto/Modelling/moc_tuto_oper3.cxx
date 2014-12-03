/****************************************************************************
** Meta object code from reading C++ file 'tuto_oper3.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Apps/Tuto/Modelling/tuto_oper3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tuto_oper3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyQT[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    6,    5,    5, 0x0a,
      23,    5,    5,    5, 0x0a,
      31,   29,    5,    5, 0x0a,
      42,    6,    5,    5, 0x0a,
      63,    6,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyQT[] = {
    "MyQT\0\0x\0operation(int)\0svg()\0w\0"
    "width(int)\0clipping_onoff(bool)\0"
    "hide_onoff(bool)\0"
};

void MyQT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyQT *_t = static_cast<MyQT *>(_o);
        switch (_id) {
        case 0: _t->operation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->svg(); break;
        case 2: _t->width((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clipping_onoff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->hide_onoff((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyQT::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyQT::staticMetaObject = {
    { &Utils::QT::SimpleQT::staticMetaObject, qt_meta_stringdata_MyQT,
      qt_meta_data_MyQT, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyQT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyQT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyQT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyQT))
        return static_cast<void*>(const_cast< MyQT*>(this));
    typedef Utils::QT::SimpleQT QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MyQT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Utils::QT::SimpleQT QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
