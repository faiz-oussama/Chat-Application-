/****************************************************************************
** Meta object code from reading C++ file 'ClientChatWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/ClientChatWidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClientChatWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSClientChatWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSClientChatWidgetENDCLASS = QtMocHelpers::stringData(
    "ClientChatWidget",
    "clientNameChanged",
    "",
    "prevName",
    "name",
    "isTyping",
    "message",
    "statusChanged",
    "ChatProtocol::Status",
    "status",
    "textForOtherClients",
    "receiver",
    "sender",
    "clientDisconnected",
    "on_btnSend_clicked",
    "textMessageReceived",
    "onTyping",
    "onInitReceivingFile",
    "clientName",
    "fileName",
    "fileSize",
    "onFileSaved",
    "path",
    "on_lblOpenFolder_linkActivated",
    "link",
    "onClientNameChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientChatWidgetENDCLASS_t {
    uint offsetsAndSizes[52];
    char stringdata0[17];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[5];
    char stringdata5[9];
    char stringdata6[8];
    char stringdata7[14];
    char stringdata8[21];
    char stringdata9[7];
    char stringdata10[20];
    char stringdata11[9];
    char stringdata12[7];
    char stringdata13[19];
    char stringdata14[19];
    char stringdata15[20];
    char stringdata16[9];
    char stringdata17[20];
    char stringdata18[11];
    char stringdata19[9];
    char stringdata20[9];
    char stringdata21[12];
    char stringdata22[5];
    char stringdata23[31];
    char stringdata24[5];
    char stringdata25[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientChatWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientChatWidgetENDCLASS_t qt_meta_stringdata_CLASSClientChatWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ClientChatWidget"
        QT_MOC_LITERAL(17, 17),  // "clientNameChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 8),  // "prevName"
        QT_MOC_LITERAL(45, 4),  // "name"
        QT_MOC_LITERAL(50, 8),  // "isTyping"
        QT_MOC_LITERAL(59, 7),  // "message"
        QT_MOC_LITERAL(67, 13),  // "statusChanged"
        QT_MOC_LITERAL(81, 20),  // "ChatProtocol::Status"
        QT_MOC_LITERAL(102, 6),  // "status"
        QT_MOC_LITERAL(109, 19),  // "textForOtherClients"
        QT_MOC_LITERAL(129, 8),  // "receiver"
        QT_MOC_LITERAL(138, 6),  // "sender"
        QT_MOC_LITERAL(145, 18),  // "clientDisconnected"
        QT_MOC_LITERAL(164, 18),  // "on_btnSend_clicked"
        QT_MOC_LITERAL(183, 19),  // "textMessageReceived"
        QT_MOC_LITERAL(203, 8),  // "onTyping"
        QT_MOC_LITERAL(212, 19),  // "onInitReceivingFile"
        QT_MOC_LITERAL(232, 10),  // "clientName"
        QT_MOC_LITERAL(243, 8),  // "fileName"
        QT_MOC_LITERAL(252, 8),  // "fileSize"
        QT_MOC_LITERAL(261, 11),  // "onFileSaved"
        QT_MOC_LITERAL(273, 4),  // "path"
        QT_MOC_LITERAL(278, 30),  // "on_lblOpenFolder_linkActivated"
        QT_MOC_LITERAL(309, 4),  // "link"
        QT_MOC_LITERAL(314, 19)   // "onClientNameChanged"
    },
    "ClientChatWidget",
    "clientNameChanged",
    "",
    "prevName",
    "name",
    "isTyping",
    "message",
    "statusChanged",
    "ChatProtocol::Status",
    "status",
    "textForOtherClients",
    "receiver",
    "sender",
    "clientDisconnected",
    "on_btnSend_clicked",
    "textMessageReceived",
    "onTyping",
    "onInitReceivingFile",
    "clientName",
    "fileName",
    "fileSize",
    "onFileSaved",
    "path",
    "on_lblOpenFolder_linkActivated",
    "link",
    "onClientNameChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientChatWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   86,    2, 0x06,    1 /* Public */,
       5,    1,   91,    2, 0x06,    4 /* Public */,
       7,    1,   94,    2, 0x06,    6 /* Public */,
      10,    3,   97,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,  104,    2, 0x08,   12 /* Private */,
      14,    0,  105,    2, 0x08,   13 /* Private */,
      15,    2,  106,    2, 0x08,   14 /* Private */,
      16,    0,  111,    2, 0x08,   17 /* Private */,
      17,    3,  112,    2, 0x08,   18 /* Private */,
      21,    1,  119,    2, 0x08,   22 /* Private */,
      23,    1,  122,    2, 0x08,   24 /* Private */,
      25,    2,  125,    2, 0x08,   26 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,   11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,   18,   19,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClientChatWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientChatWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientChatWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientChatWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientChatWidget, std::true_type>,
        // method 'clientNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'isTyping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'statusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ChatProtocol::Status, std::false_type>,
        // method 'textForOtherClients'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'clientDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSend_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onTyping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInitReceivingFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'onFileSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_lblOpenFolder_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onClientNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void ClientChatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientChatWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clientNameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->isTyping((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->statusChanged((*reinterpret_cast< std::add_pointer_t<ChatProtocol::Status>>(_a[1]))); break;
        case 3: _t->textForOtherClients((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 4: _t->clientDisconnected(); break;
        case 5: _t->on_btnSend_clicked(); break;
        case 6: _t->textMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->onTyping(); break;
        case 8: _t->onInitReceivingFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[3]))); break;
        case 9: _t->onFileSaved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->on_lblOpenFolder_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->onClientNameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientChatWidget::*)(QString , QString );
            if (_t _q_method = &ClientChatWidget::clientNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientChatWidget::*)(QString );
            if (_t _q_method = &ClientChatWidget::isTyping; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientChatWidget::*)(ChatProtocol::Status );
            if (_t _q_method = &ClientChatWidget::statusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientChatWidget::*)(QString , QString , QString );
            if (_t _q_method = &ClientChatWidget::textForOtherClients; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *ClientChatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientChatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientChatWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ClientChatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ClientChatWidget::clientNameChanged(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientChatWidget::isTyping(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientChatWidget::statusChanged(ChatProtocol::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientChatWidget::textForOtherClients(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
