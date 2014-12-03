/****************************************************************************
** Meta object code from reading C++ file 'show_traversors3.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Apps/Tuto/Traversals/show_traversors3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'show_traversors3.h' doesn't include <QObject>."
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
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    6,    5,    5, 0x0a,
      23,    6,    5,    5, 0x0a,
      38,    6,    5,    5, 0x0a,
      53,    6,    5,    5, 0x0a,
      68,    6,    5,    5, 0x0a,
      83,    6,    5,    5, 0x0a,
     100,   98,    5,    5, 0x0a,
     119,    6,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyQT[] = {
    "MyQT\0\0x\0cb_combo1(int)\0cb_combo2(int)\0"
    "cb_combo3(int)\0cb_combo4(int)\0"
    "cb_combo5(int)\0cb_combo6(int)\0b\0"
    "cb_checkTopo(bool)\0cb_explode(int)\0"
};

void MyQT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyQT *_t = static_cast<MyQT *>(_o);
        switch (_id) {
        case 0: _t->cb_combo1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cb_combo2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->cb_combo3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->cb_combo4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->cb_combo5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->cb_combo6((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->cb_checkTopo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->cb_explode((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
