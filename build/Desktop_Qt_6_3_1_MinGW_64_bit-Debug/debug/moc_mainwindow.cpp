/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[80];
    char stringdata0[480];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 7), // "buttons"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 16), // "QAbstractButton*"
QT_MOC_LITERAL(37, 6), // "button"
QT_MOC_LITERAL(44, 11), // "eventFilter"
QT_MOC_LITERAL(56, 7), // "watched"
QT_MOC_LITERAL(64, 7), // "QEvent*"
QT_MOC_LITERAL(72, 5), // "event"
QT_MOC_LITERAL(78, 15), // "openSerialPorts"
QT_MOC_LITERAL(94, 16), // "closeSerialPorts"
QT_MOC_LITERAL(111, 11), // "dataRecived"
QT_MOC_LITERAL(123, 10), // "decodeData"
QT_MOC_LITERAL(134, 8), // "uint8_t*"
QT_MOC_LITERAL(143, 7), // "datosRx"
QT_MOC_LITERAL(151, 7), // "uint8_t"
QT_MOC_LITERAL(159, 6), // "source"
QT_MOC_LITERAL(166, 14), // "sendDataSerial"
QT_MOC_LITERAL(181, 11), // "sendDataUDP"
QT_MOC_LITERAL(193, 28), // "on_pushButtonUdpOpen_clicked"
QT_MOC_LITERAL(222, 11), // "OnUdpRxData"
QT_MOC_LITERAL(234, 9), // "OnQTimer1"
QT_MOC_LITERAL(244, 16), // "inicializaciones"
QT_MOC_LITERAL(261, 15), // "lecturaSensores"
QT_MOC_LITERAL(277, 11), // "reiniciarUI"
QT_MOC_LITERAL(289, 22), // "on_radarButton_clicked"
QT_MOC_LITERAL(312, 13), // "DrawMotionMPU"
QT_MOC_LITERAL(326, 12), // "DrawMovement"
QT_MOC_LITERAL(339, 22), // "on_clearButton_clicked"
QT_MOC_LITERAL(362, 7), // "sendCMD"
QT_MOC_LITERAL(370, 3), // "CMD"
QT_MOC_LITERAL(374, 13), // "cleanDataInfo"
QT_MOC_LITERAL(388, 9), // "integrate"
QT_MOC_LITERAL(398, 7), // "int16_t"
QT_MOC_LITERAL(406, 8), // "uint16_t"
QT_MOC_LITERAL(415, 8), // "newValue"
QT_MOC_LITERAL(424, 9), // "lastValue"
QT_MOC_LITERAL(434, 9), // "condition"
QT_MOC_LITERAL(444, 12), // "timeInterval"
QT_MOC_LITERAL(457, 22) // "on_Open_SERIAL_clicked"

    },
    "MainWindow\0buttons\0\0QAbstractButton*\0"
    "button\0eventFilter\0watched\0QEvent*\0"
    "event\0openSerialPorts\0closeSerialPorts\0"
    "dataRecived\0decodeData\0uint8_t*\0datosRx\0"
    "uint8_t\0source\0sendDataSerial\0sendDataUDP\0"
    "on_pushButtonUdpOpen_clicked\0OnUdpRxData\0"
    "OnQTimer1\0inicializaciones\0lecturaSensores\0"
    "reiniciarUI\0on_radarButton_clicked\0"
    "DrawMotionMPU\0DrawMovement\0"
    "on_clearButton_clicked\0sendCMD\0CMD\0"
    "cleanDataInfo\0integrate\0int16_t\0"
    "uint16_t\0newValue\0lastValue\0condition\0"
    "timeInterval\0on_Open_SERIAL_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x08,    1 /* Private */,
       5,    2,  149,    2, 0x08,    3 /* Private */,
       9,    0,  154,    2, 0x08,    6 /* Private */,
      10,    0,  155,    2, 0x08,    7 /* Private */,
      11,    0,  156,    2, 0x08,    8 /* Private */,
      12,    2,  157,    2, 0x08,    9 /* Private */,
      17,    0,  162,    2, 0x08,   12 /* Private */,
      18,    0,  163,    2, 0x08,   13 /* Private */,
      19,    0,  164,    2, 0x08,   14 /* Private */,
      20,    0,  165,    2, 0x08,   15 /* Private */,
      21,    0,  166,    2, 0x08,   16 /* Private */,
      22,    0,  167,    2, 0x08,   17 /* Private */,
      23,    0,  168,    2, 0x08,   18 /* Private */,
      24,    0,  169,    2, 0x08,   19 /* Private */,
      25,    0,  170,    2, 0x08,   20 /* Private */,
      26,    0,  171,    2, 0x08,   21 /* Private */,
      27,    0,  172,    2, 0x08,   22 /* Private */,
      28,    0,  173,    2, 0x08,   23 /* Private */,
      29,    1,  174,    2, 0x08,   24 /* Private */,
      31,    0,  177,    2, 0x08,   26 /* Private */,
      32,    4,  178,    2, 0x08,   27 /* Private */,
      39,    0,  187,    2, 0x08,   32 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   30,
    QMetaType::Void,
    0x80000000 | 33, 0x80000000 | 34, 0x80000000 | 33, 0x80000000 | 15, 0x80000000 | 15,   35,   36,   37,   38,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttons((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 1: { bool _r = _t->eventFilter((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->openSerialPorts(); break;
        case 3: _t->closeSerialPorts(); break;
        case 4: _t->dataRecived(); break;
        case 5: _t->decodeData((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 6: _t->sendDataSerial(); break;
        case 7: _t->sendDataUDP(); break;
        case 8: _t->on_pushButtonUdpOpen_clicked(); break;
        case 9: _t->OnUdpRxData(); break;
        case 10: _t->OnQTimer1(); break;
        case 11: _t->inicializaciones(); break;
        case 12: _t->lecturaSensores(); break;
        case 13: _t->reiniciarUI(); break;
        case 14: _t->on_radarButton_clicked(); break;
        case 15: _t->DrawMotionMPU(); break;
        case 16: _t->DrawMovement(); break;
        case 17: _t->on_clearButton_clicked(); break;
        case 18: _t->sendCMD((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 19: _t->cleanDataInfo(); break;
        case 20: { int16_t _r = _t->integrate((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int16_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[4])));
            if (_a[0]) *reinterpret_cast< int16_t*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->on_Open_SERIAL_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>, QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t *, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int16_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>, QtPrivate::TypeAndForceComplete<int16_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
