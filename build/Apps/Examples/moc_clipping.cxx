/****************************************************************************
** Meta object code from reading C++ file 'clipping.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Apps/Examples/clipping.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clipping.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Clipping[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   10,    9,    9, 0x0a,
      36,   10,    9,    9, 0x0a,
      57,   10,    9,    9, 0x0a,
      78,   10,    9,    9, 0x0a,
     100,   98,    9,    9, 0x0a,
     128,   98,    9,    9, 0x0a,
     156,   98,    9,    9, 0x0a,
     184,    9,    9,    9, 0x0a,
     213,  211,    9,    9, 0x0a,
     246,    9,    9,    9, 0x0a,
     282,    9,    9,    9, 0x0a,
     310,  211,    9,    9, 0x0a,
     345,    9,    9,    9, 0x0a,
     382,   98,    9,    9, 0x0a,
     432,   10,    9,    9, 0x0a,
     468,   10,    9,    9, 0x0a,
     512,    9,    9,    9, 0x0a,
     551,    9,    9,    9, 0x0a,
     595,    9,    9,    9, 0x0a,
     641,    9,    9,    9, 0x0a,
     673,   98,    9,    9, 0x0a,
     734,  728,    9,    9, 0x0a,
     763,    9,    9,    9, 0x0a,
     785,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Clipping[] = {
    "Clipping\0\0b\0slot_drawVertices(bool)\0"
    "slot_drawLines(bool)\0slot_drawFaces(bool)\0"
    "slot_drawTopo(bool)\0c\0slot_explodTopoPhi1(double)\0"
    "slot_explodTopoPhi2(double)\0"
    "slot_explodTopoPhi3(double)\0"
    "slot_pushButton_addPlane()\0i\0"
    "slot_spinBox_GridResolution(int)\0"
    "slot_pushButton_changePlanesColor()\0"
    "slot_pushButton_addSphere()\0"
    "slot_spinBox_SphereResolution(int)\0"
    "slot_pushButton_changeSpheresColor()\0"
    "slot_doubleSpinBox_ColorAttenuationFactor(double)\0"
    "slot_radioButton_ClippingMode(bool)\0"
    "slot_radioButton_ColorAttenuationMode(bool)\0"
    "slot_pushButton_deleteSelectedObject()\0"
    "slot_pushButton_applyStaticClippingPreset()\0"
    "slot_pushButton_applyAnimatedClippingPreset()\0"
    "slot_pushButton_StopAnimation()\0"
    "slot_doubleSpinBox_AnimatedClippingPresetSpeed(double)\0"
    "state\0slot_setAnimationState(bool)\0"
    "slot_animationTimer()\0button_compile()\0"
};

void Clipping::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Clipping *_t = static_cast<Clipping *>(_o);
        switch (_id) {
        case 0: _t->slot_drawVertices((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slot_drawLines((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slot_drawFaces((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->slot_drawTopo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slot_explodTopoPhi1((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->slot_explodTopoPhi2((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->slot_explodTopoPhi3((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->slot_pushButton_addPlane(); break;
        case 8: _t->slot_spinBox_GridResolution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slot_pushButton_changePlanesColor(); break;
        case 10: _t->slot_pushButton_addSphere(); break;
        case 11: _t->slot_spinBox_SphereResolution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slot_pushButton_changeSpheresColor(); break;
        case 13: _t->slot_doubleSpinBox_ColorAttenuationFactor((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->slot_radioButton_ClippingMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slot_radioButton_ColorAttenuationMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->slot_pushButton_deleteSelectedObject(); break;
        case 17: _t->slot_pushButton_applyStaticClippingPreset(); break;
        case 18: _t->slot_pushButton_applyAnimatedClippingPreset(); break;
        case 19: _t->slot_pushButton_StopAnimation(); break;
        case 20: _t->slot_doubleSpinBox_AnimatedClippingPresetSpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->slot_setAnimationState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->slot_animationTimer(); break;
        case 23: _t->button_compile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Clipping::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Clipping::staticMetaObject = {
    { &Utils::QT::SimpleQT::staticMetaObject, qt_meta_stringdata_Clipping,
      qt_meta_data_Clipping, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Clipping::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Clipping::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Clipping::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Clipping))
        return static_cast<void*>(const_cast< Clipping*>(this));
    typedef Utils::QT::SimpleQT QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Clipping::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Utils::QT::SimpleQT QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
