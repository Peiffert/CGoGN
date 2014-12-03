/****************************************************************************
** Meta object code from reading C++ file 'mcmesh.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Apps/Examples/mcmesh.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mcmesh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MCMesh[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    8,    7,    7, 0x0a,
      31,    8,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MCMesh[] = {
    "MCMesh\0\0b\0slot_drawEdges(bool)\0"
    "slot_drawFaces(bool)\0"
};

void MCMesh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MCMesh *_t = static_cast<MCMesh *>(_o);
        switch (_id) {
        case 0: _t->slot_drawEdges((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slot_drawFaces((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MCMesh::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MCMesh::staticMetaObject = {
    { &Utils::QT::SimpleQT::staticMetaObject, qt_meta_stringdata_MCMesh,
      qt_meta_data_MCMesh, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MCMesh::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MCMesh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MCMesh::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MCMesh))
        return static_cast<void*>(const_cast< MCMesh*>(this));
    typedef Utils::QT::SimpleQT QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MCMesh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Utils::QT::SimpleQT QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
