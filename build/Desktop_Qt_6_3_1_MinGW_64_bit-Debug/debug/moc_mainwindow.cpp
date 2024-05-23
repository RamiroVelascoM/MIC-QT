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
    const uint offsetsAndSize[48];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 15), // "openSerialPorts"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 16), // "closeSerialPorts"
QT_MOC_LITERAL(45, 11), // "dataRecived"
QT_MOC_LITERAL(57, 10), // "decodeData"
QT_MOC_LITERAL(68, 8), // "uint8_t*"
QT_MOC_LITERAL(77, 7), // "datosRx"
QT_MOC_LITERAL(85, 7), // "uint8_t"
QT_MOC_LITERAL(93, 6), // "source"
QT_MOC_LITERAL(100, 14), // "sendDataSerial"
QT_MOC_LITERAL(115, 11), // "sendDataUDP"
QT_MOC_LITERAL(127, 28), // "on_pushButtonUdpOpen_clicked"
QT_MOC_LITERAL(156, 11), // "OnUdpRxData"
QT_MOC_LITERAL(168, 9), // "OnQTimer1"
QT_MOC_LITERAL(178, 16), // "inicializaciones"
QT_MOC_LITERAL(195, 15), // "lecturaSensores"
QT_MOC_LITERAL(211, 11), // "reiniciarUI"
QT_MOC_LITERAL(223, 22), // "on_radarButton_clicked"
QT_MOC_LITERAL(246, 17), // "DibujarFondoRadar"
QT_MOC_LITERAL(264, 8), // "RadarRun"
QT_MOC_LITERAL(273, 16), // "DibujarDeteccion"
QT_MOC_LITERAL(290, 22), // "on_clearButton_clicked"
QT_MOC_LITERAL(313, 13) // "cleanDataInfo"

    },
    "MainWindow\0openSerialPorts\0\0"
    "closeSerialPorts\0dataRecived\0decodeData\0"
    "uint8_t*\0datosRx\0uint8_t\0source\0"
    "sendDataSerial\0sendDataUDP\0"
    "on_pushButtonUdpOpen_clicked\0OnUdpRxData\0"
    "OnQTimer1\0inicializaciones\0lecturaSensores\0"
    "reiniciarUI\0on_radarButton_clicked\0"
    "DibujarFondoRadar\0RadarRun\0DibujarDeteccion\0"
    "on_clearButton_clicked\0cleanDataInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x08,    1 /* Private */,
       3,    0,  123,    2, 0x08,    2 /* Private */,
       4,    0,  124,    2, 0x08,    3 /* Private */,
       5,    2,  125,    2, 0x08,    4 /* Private */,
      10,    0,  130,    2, 0x08,    7 /* Private */,
      11,    0,  131,    2, 0x08,    8 /* Private */,
      12,    0,  132,    2, 0x08,    9 /* Private */,
      13,    0,  133,    2, 0x08,   10 /* Private */,
      14,    0,  134,    2, 0x08,   11 /* Private */,
      15,    0,  135,    2, 0x08,   12 /* Private */,
      16,    0,  136,    2, 0x08,   13 /* Private */,
      17,    0,  137,    2, 0x08,   14 /* Private */,
      18,    0,  138,    2, 0x08,   15 /* Private */,
      19,    0,  139,    2, 0x08,   16 /* Private */,
      20,    0,  140,    2, 0x08,   17 /* Private */,
      21,    0,  141,    2, 0x08,   18 /* Private */,
      22,    0,  142,    2, 0x08,   19 /* Private */,
      23,    0,  143,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openSerialPorts(); break;
        case 1: _t->closeSerialPorts(); break;
        case 2: _t->dataRecived(); break;
        case 3: _t->decodeData((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 4: _t->sendDataSerial(); break;
        case 5: _t->sendDataUDP(); break;
        case 6: _t->on_pushButtonUdpOpen_clicked(); break;
        case 7: _t->OnUdpRxData(); break;
        case 8: _t->OnQTimer1(); break;
        case 9: _t->inicializaciones(); break;
        case 10: _t->lecturaSensores(); break;
        case 11: _t->reiniciarUI(); break;
        case 12: _t->on_radarButton_clicked(); break;
        case 13: _t->DibujarFondoRadar(); break;
        case 14: _t->RadarRun(); break;
        case 15: _t->DibujarDeteccion(); break;
        case 16: _t->on_clearButton_clicked(); break;
        case 17: _t->cleanDataInfo(); break;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t *, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
