/****************************************************************************
** Meta object code from reading C++ file 'qtcolorschooser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/Utils/Qt/qtcolorschooser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcolorschooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CGoGN__Utils__QT__ColorsChooser[] = {

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
      35,   33,   32,   32, 0x09,
      57,   53,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CGoGN__Utils__QT__ColorsChooser[] = {
    "CGoGN::Utils::QT::ColorsChooser\0\0x\0"
    "select_color(int)\0col\0change_color(QColor)\0"
};

void CGoGN::Utils::QT::ColorsChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorsChooser *_t = static_cast<ColorsChooser *>(_o);
        switch (_id) {
        case 0: _t->select_color((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->change_color((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CGoGN::Utils::QT::ColorsChooser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CGoGN::Utils::QT::ColorsChooser::staticMetaObject = {
    { &QtPopUp::staticMetaObject, qt_meta_stringdata_CGoGN__Utils__QT__ColorsChooser,
      qt_meta_data_CGoGN__Utils__QT__ColorsChooser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CGoGN::Utils::QT::ColorsChooser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CGoGN::Utils::QT::ColorsChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CGoGN::Utils::QT::ColorsChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CGoGN__Utils__QT__ColorsChooser))
        return static_cast<void*>(const_cast< ColorsChooser*>(this));
    return QtPopUp::qt_metacast(_clname);
}

int CGoGN::Utils::QT::ColorsChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtPopUp::qt_metacall(_c, _id, _a);
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
