/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,
      60,   41,   11,   11, 0x0a,
      89,   82,   11,   11, 0x0a,
     114,   11,   11,   11, 0x0a,
     151,  131,   11,   11, 0x0a,
     199,  179,   11,   11, 0x0a,
     227,  220,   11,   11, 0x0a,
     246,   11,   11,   11, 0x08,
     265,   11,   11,   11, 0x08,
     283,   11,   11,   11, 0x08,
     305,   11,   11,   11, 0x08,
     328,   11,   11,   11, 0x08,
     353,  348,   11,   11, 0x08,
     381,   11,   11,   11, 0x28,
     402,  348,   11,   11, 0x08,
     432,   11,   11,   11, 0x28,
     455,   11,   11,   11, 0x08,
     472,   11,   11,   11, 0x08,
     494,  487,   11,   11, 0x08,
     564,  547,   11,   11, 0x08,
     605,   82,   11,   11, 0x08,
     625,   11,   11,   11, 0x08,
     639,   11,   11,   11, 0x08,
     654,   11,   11,   11, 0x08,
     669,   11,   11,   11, 0x08,
     688,   11,   11,   11, 0x08,
     703,   11,   11,   11, 0x08,
     731,  722,   11,   11, 0x08,
     754,   11,   11,   11, 0x28,
     773,   11,   11,   11, 0x08,
     789,   11,   11,   11, 0x08,
     818,  804,   11,   11, 0x08,
     846,   11,   11,   11, 0x28,
     870,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BitcoinGUI[] = {
    "BitcoinGUI\0\0count\0setNumConnections(int)\0"
    "count,nTotalBlocks\0setNumBlocks(int,int)\0"
    "status\0setEncryptionStatus(int)\0"
    "setStakeMining()\0title,message,modal\0"
    "error(QString,QString,bool)\0"
    "nFeeRequired,payFee\0askFee(qint64,bool*)\0"
    "strURI\0handleURI(QString)\0gotoOverviewPage()\0"
    "gotoHistoryPage()\0gotoAddressBookPage()\0"
    "gotoReceiveCoinsPage()\0gotoSendCoinsPage()\0"
    "addr\0gotoSignMessageTab(QString)\0"
    "gotoSignMessageTab()\0gotoVerifyMessageTab(QString)\0"
    "gotoVerifyMessageTab()\0optionsClicked()\0"
    "aboutClicked()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "parent,start,end\0"
    "incomingTransaction(QModelIndex,int,int)\0"
    "encryptWallet(bool)\0cloneWallet()\0"
    "exportWallet()\0importWallet()\0"
    "changePassphrase()\0unlockWallet()\0"
    "lockWalletToggle()\0fInitial\0"
    "stakeMinerToggle(bool)\0stakeMinerToggle()\0"
    "inspectWallet()\0repairWallet()\0"
    "fToggleHidden\0showNormalIfMinimized(bool)\0"
    "showNormalIfMinimized()\0toggleHidden()\0"
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setStakeMining(); break;
        case 4: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 6: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->gotoOverviewPage(); break;
        case 8: _t->gotoHistoryPage(); break;
        case 9: _t->gotoAddressBookPage(); break;
        case 10: _t->gotoReceiveCoinsPage(); break;
        case 11: _t->gotoSendCoinsPage(); break;
        case 12: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->gotoSignMessageTab(); break;
        case 14: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->gotoVerifyMessageTab(); break;
        case 16: _t->optionsClicked(); break;
        case 17: _t->aboutClicked(); break;
        case 18: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 19: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->cloneWallet(); break;
        case 22: _t->exportWallet(); break;
        case 23: _t->importWallet(); break;
        case 24: _t->changePassphrase(); break;
        case 25: _t->unlockWallet(); break;
        case 26: _t->lockWalletToggle(); break;
        case 27: _t->stakeMinerToggle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->stakeMinerToggle(); break;
        case 29: _t->inspectWallet(); break;
        case 30: _t->repairWallet(); break;
        case 31: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->showNormalIfMinimized(); break;
        case 33: _t->toggleHidden(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BitcoinGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI,
      qt_meta_data_BitcoinGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BitcoinGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
