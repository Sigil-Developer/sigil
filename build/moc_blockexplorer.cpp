/****************************************************************************
** Meta object code from reading C++ file 'blockexplorer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/blockexplorer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blockexplorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BlockExplorer[] = {

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
      15,   14,   14,   14, 0x0a,
      30,   14,   14,   14, 0x0a,
      42,   14,   14,   14, 0x0a,
      68,   63,   14,   14, 0x08,
      95,   14,   14,   14, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_BlockExplorer[] = {
    "BlockExplorer\0\0blockClicked()\0txClicked()\0"
    "updateExplorer(bool)\0TxID\0"
    "gotoBlockExplorer(QString)\0"
    "gotoBlockExplorer()\0"
};

void BlockExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BlockExplorer *_t = static_cast<BlockExplorer *>(_o);
        switch (_id) {
        case 0: _t->blockClicked(); break;
        case 1: _t->txClicked(); break;
        case 2: _t->updateExplorer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->gotoBlockExplorer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->gotoBlockExplorer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BlockExplorer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BlockExplorer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BlockExplorer,
      qt_meta_data_BlockExplorer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlockExplorer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlockExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlockExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlockExplorer))
        return static_cast<void*>(const_cast< BlockExplorer*>(this));
    return QDialog::qt_metacast(_clname);
}

int BlockExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
