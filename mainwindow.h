#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qlcdnumber.h"
#define NUMSWITCHES                 1
#define SERIALCONNECTION            1
#define UDPCONNECTION               2
#define MINRANGOSLIDER              100

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtNetwork/QUdpSocket>
#include <QLabel>
#include <QDebug>
#include <QInputDialog>
#include "settingsdialog.h"
#include <QTimer>
#include "qdatetime.h"
#include <qpaintbox.h>
#include <QPainter>
#include <QStyle>
#include <qlcdnumber.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void openSerialPorts();

    void closeSerialPorts();

    void dataRecived();

    void decodeData(uint8_t *datosRx, uint8_t source);

    void sendDataSerial();

    void sendDataUDP();

    void on_pushButtonUdpOpen_clicked();

    void OnUdpRxData();

    void OnQTimer1(); // Se implementa con Alt + enter

    void inicializaciones();

    void lecturaSensores();

    void reiniciarUI();

    void on_radarButton_clicked();

    void DibujarFondoRadar();

    void RadarRun();

    void DibujarDeteccion();

    void on_clearButton_clicked();

    void cleanDataInfo();
private:

    Ui::MainWindow *ui;
    QSerialPort *serial;
    SettingsDialog *settingPorts;
    QLabel *estadoSerial;
    QUdpSocket *UdpSocket1;
    QHostAddress RemoteAddress;
    quint16 RemotePort;
    QHostAddress clientAddress;
    QDateTime       dt;
    int puertoremoto;

    typedef enum{
        START,
        HEADER_1,
        HEADER_2,
        HEADER_3,
        NBYTES,
        TOKEN,
        PAYLOAD
    }_eProtocolo;

    _eProtocolo estadoProtocolo, estadoProtocoloUdp;

    typedef enum{
        UDP=0,
        SERIE=1,
        ACKNOWLEDGE = 0x0D,
        GETLOCALIP = 0xE0,
        ALIVE = 0xF0,
        FIRMWARE = 0xF1,
        ANALOG_IR = 0xF2,
        MPU_6050 = 0xF3,
        UNKNOWNCOMMAND = 0xFF
    }_eCmd;

    typedef struct{
        uint8_t timeOut;
        uint8_t cheksum;
        uint8_t payLoad[256];
        uint8_t nBytes;
        uint8_t index;
    }_sDatos ;

    _sDatos rxData, rxDataUdp;

    typedef union{
        uint8_t     u8[4];
        int8_t      i8[4];
        uint16_t    u16[2];
        int16_t     i16[2];
        uint32_t    u32;
        int32_t     i32;
        float       f;
    }_work;

    typedef union {
        double  d32;
        float f32;
        int i32;
        unsigned int ui32;
        unsigned short ui16[2];
        short i16[2];
        uint8_t ui8[4];
        char chr[4];
        unsigned char uchr[4];
        int8_t  i8[4];
    }_udat;

    /******TCRT5000******/
    uint16_t irSensorsMeasure[8];

    /******MPU6050*******/
    //int16_t myMPUdata[6];
    float myMPUdata[6];

    /*TIMER*/
    QTimer *QTimer1;
    uint8_t timeLecturaSensoresTask10ms = 0;
    uint8_t timeMPUdata = 0;
    uint16_t aliveTimeOut = 0;

    /*RADAR*/
    bool radarDrawing = false;
    uint8_t radarStatus;
    QPaintBox *QPaintBox1;

    /*AUXILIARES PARA ENVIAR PETICIONES*/
    bool isASelectedCmd = false;
    uint8_t auxComand;
    bool recibirConfig = true;

    /*METODO DE CONEXION Y ALIVE*/
    uint8_t connectionType = 0;
    bool alive = false;
    char firmwareCadena[30];

};
#endif // MAINWINDOW_H
