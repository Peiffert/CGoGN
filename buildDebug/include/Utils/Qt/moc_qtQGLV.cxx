/****************************************************************************
** Meta object code from reading C++ file 'qtQGLV.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/Utils/Qt/qtQGLV.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtQGLV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CGoGN__Utils__QT__SimpleQGLV[] = {

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
      30,   29,   29,   29, 0x0a,
      39,   29,   29,   29, 0x0a,
      49,   29,   29,   29, 0x0a,
      59,   29,   29,   29, 0x0a,
      69,   29,   29,   29, 0x0a,
      86,   29,   29,   29, 0x0a,
      97,   29,   29,   29, 0x0a,
     115,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CGoGN__Utils__QT__SimpleQGLV[] = {
    "CGoGN::Utils::QT::SimpleQGLV\0\0cb_New()\0"
    "cb_Open()\0cb_Save()\0cb_Quit()\0"
    "cb_about_cgogn()\0cb_about()\0"
    "cb_consoleOnOff()\0cb_consoleClear()\0"
};

void CGoGN::Utils::QT::SimpleQGLV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimpleQGLV *_t = static_cast<SimpleQGLV *>(_o);
        switch (_id) {
        case 0: _t->cb_New(); break;
        case 1: _t->cb_Open(); break;
        case 2: _t->cb_Save(); break;
        case 3: _t->cb_Quit(); break;
        case 4: _t->cb_about_cgogn(); break;
        case 5: _t->cb_about(); break;
        case 6: _t->cb_consoleOnOff(); break;
        case 7: _t->cb_consoleClear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CGoGN::Utils::QT::SimpleQGLV::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CGoGN::Utils::QT::SimpleQGLV::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CGoGN__Utils__QT__SimpleQGLV,
      qt_meta_data_CGoGN__Utils__QT__SimpleQGLV, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CGoGN::Utils::QT::SimpleQGLV::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CGoGN::Utils::QT::SimpleQGLV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CGoGN::Utils::QT::SimpleQGLV::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CGoGN__Utils__QT__SimpleQGLV))
        return static_cast<void*>(const_cast< SimpleQGLV*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CGoGN::Utils::QT::SimpleQGLV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
