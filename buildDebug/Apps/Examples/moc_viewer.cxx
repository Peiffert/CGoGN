/****************************************************************************
** Meta object code from reading C++ file 'viewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Apps/Examples/viewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Viewer[] = {

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
      10,    8,    7,    7, 0x0a,
      36,   34,    7,    7, 0x0a,
      59,    8,    7,    7, 0x0a,
      80,    8,    7,    7, 0x0a,
     101,   34,    7,    7, 0x0a,
     124,    8,    7,    7, 0x0a,
     144,    8,    7,    7, 0x0a,
     167,   34,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Viewer[] = {
    "Viewer\0\0b\0slot_drawVertices(bool)\0i\0"
    "slot_verticesSize(int)\0slot_drawEdges(bool)\0"
    "slot_drawFaces(bool)\0slot_faceLighting(int)\0"
    "slot_drawTopo(bool)\0slot_drawNormals(bool)\0"
    "slot_normalsSize(int)\0"
};

void Viewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Viewer *_t = static_cast<Viewer *>(_o);
        switch (_id) {
        case 0: _t->slot_drawVertices((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slot_verticesSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slot_drawEdges((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slot_drawFaces((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slot_faceLighting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slot_drawTopo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slot_drawNormals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->slot_normalsSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Viewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Viewer::staticMetaObject = {
    { &Utils::QT::SimpleQGLV::staticMetaObject, qt_meta_stringdata_Viewer,
      qt_meta_data_Viewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Viewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Viewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Viewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Viewer))
        return static_cast<void*>(const_cast< Viewer*>(this));
    typedef Utils::QT::SimpleQGLV QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Viewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Utils::QT::SimpleQGLV QMocSuperClass;
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
