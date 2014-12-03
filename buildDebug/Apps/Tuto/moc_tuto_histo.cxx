/****************************************************************************
** Meta object code from reading C++ file 'tuto_histo.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Apps/Tuto/tuto_histo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tuto_histo.h' doesn't include <QObject>."
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
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    6,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyQT[] = {
    "MyQT\0\0i,j\0clickHisto(uint,uint)\0"
};

void MyQT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyQT *_t = static_cast<MyQT *>(_o);
        switch (_id) {
        case 0: _t->clickHisto((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
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
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
