#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serial = new QSerialPort(this);
    settingPorts = new SettingsDialog(this);
    estadoSerial = new QLabel(this);
    estadoSerial->setText("Desconectado ......");
    ui->statusbar->addWidget(estadoSerial);
    ui->actionDisconnect->setEnabled(false);
    UdpSocket1 = new QUdpSocket(this);
    ui->pushButtonSend_2->setEnabled(false);
    estadoProtocoloUdp = START;
    estadoProtocolo = START;
    QTimer1 = new QTimer(this);
    QPaintBox1 = new QPaintBox(0, 0, ui->widgetRadar);

    connect(ui->pushButtonSend,&QPushButton::clicked,this,&MainWindow::sendDataSerial);
    connect(ui->pushButtonSend_2,&QPushButton::clicked,this,&MainWindow::sendDataUDP);
    connect(serial,&QSerialPort::readyRead,this,&MainWindow::dataRecived);
    connect(ui->actionScanPorts,&QAction::triggered,settingPorts,&QWidget::showNormal);
    connect(ui->actionConnect_Device, &QAction::triggered,this,&MainWindow::openSerialPorts);
    connect(ui->actionDisconnect,&QAction::triggered,this,&MainWindow::closeSerialPorts);
    connect(ui->actionExit,&QAction::triggered,this,&MainWindow::close);
    connect(UdpSocket1,&QUdpSocket::readyRead,this,&MainWindow::OnUdpRxData);
    connect(QTimer1, &QTimer::timeout, this, &MainWindow::OnQTimer1);

    ui->comboBoxCom->addItem("ALIVE", 0xF0);
    ui->comboBoxCom->addItem("FIRMWARE", 0xF1);
    ui->comboBoxCom->addItem("ANALOG IRs", 0xF2);
    ui->comboBoxCom->addItem("MPU 6050 DATA", 0xF3);
}

MainWindow::~MainWindow()
{
    delete ui;
    //delete QPaintBox1;
}

void MainWindow::openSerialPorts()
{
    if(UdpSocket1->isOpen()){
        UdpSocket1->close();
        ui->pushButtonUdpOpen->setText("OPEN");
        QTimer1->stop();
        alive = false;
        reiniciarUI();
        return;
    }

    const SettingsDialog::Settings p = settingPorts->settings();
    serial->setPortName(p.name);
    serial->setBaudRate(p.baudRate);
    serial->setDataBits(p.dataBits);
    serial->setParity(p.parity);
    serial->setStopBits(p.stopBits);
    serial->setFlowControl(p.flowControl);
    serial->open(QSerialPort::ReadWrite);
    if (serial->isOpen()){
        ui->actionDisconnect->setEnabled(true);
        estadoSerial->setText(tr("Connected to %1 : %2, %3, %4, %5, %6, %7")
                                  .arg(p.name)
                                  .arg(p.stringBaudRate)
                                  .arg(p.stringDataBits)
                                  .arg(p.stringParity)
                                  .arg(p.stringStopBits)
                                  .arg(p.stringFlowControl)
                                  .arg(p.fabricante)
                              );
        QTimer1->start(10);
        inicializaciones();
        connectionType = SERIALCONNECTION;
    } else {
        QMessageBox::critical(this, tr("Error"), serial->errorString());
    }
}

void MainWindow::closeSerialPorts()
{
    ui->actionDisconnect->setEnabled(false);
    estadoSerial->setText("Desconectado ......");
    if (serial->isOpen()) {
        serial->close();
        QTimer1->stop();
        alive = false;
        reiniciarUI();
    }
}

void MainWindow::on_pushButtonUdpOpen_clicked()
{
    int Port;
    bool ok;

    ui->actionDisconnect->setEnabled(false);
    estadoSerial->setText("Desconectado ......");
    if (serial->isOpen()) {
        serial->close();
        QTimer1->stop();
        alive = false;
        reiniciarUI();
        return;
    }

    if(UdpSocket1->isOpen()){
        UdpSocket1->close();
        ui->pushButtonUdpOpen->setText("OPEN");
        QTimer1->stop();
        alive = false;
        reiniciarUI();
        return;
    }

    Port = ui->lineEditLocalPort->text().toInt(&ok,10);
    if(!ok || Port<=0 || Port>65535){
        QMessageBox::information(this, tr("SERVER PORT"),tr("ERROR. Number PORT."));
        return;
    }

    try{
        UdpSocket1->abort();
        UdpSocket1->bind(Port);
        UdpSocket1->open(QUdpSocket::ReadWrite);
    }catch(...){
        QMessageBox::information(this, tr("SERVER PORT"),tr("Can't OPEN Port."));
        return;
    }
    ui->pushButtonUdpOpen->setText("CLOSE");
    ui->pushButtonSend_2->setEnabled(true);
    if (UdpSocket1->isOpen()){
        if(clientAddress.isNull())
            clientAddress.setAddress(ui->lineEditIP->text());
        if(puertoremoto==0)
            puertoremoto=ui->lineEditPort->text().toInt();
        UdpSocket1->writeDatagram("r", 1, clientAddress, puertoremoto);
        QTimer1->start(10);
        inicializaciones();
        connectionType = UDPCONNECTION;
    }
}

void MainWindow::dataRecived() //!< RECIBIR DATOS POR SERIAL
{
    unsigned char *incomingBuffer;
    int count;

    count = serial->bytesAvailable();
    if(count<=0)
        return;
    incomingBuffer = new unsigned char[count];
    serial->read((char *)incomingBuffer,count);
    QString str="";
    for(int i=0; i<=count; i++){
        if(isalnum(incomingBuffer[i]))
            str = str + QString("%1").arg((char)incomingBuffer[i]);
        else
            str = str +"{" + QString("%1").arg(incomingBuffer[i],2,16,QChar('0')) + "}";
    }
    str = str.toUpper();
    ui->textBrowser->append("BLUEPILL (SERIE) -> (" + str + ")");

    for(int i=0;i<count; i++){
        switch (estadoProtocolo) {
        case START:
            if (incomingBuffer[i]=='U'){
                estadoProtocolo=HEADER_1;
                rxData.cheksum=0;
            }
            break;
        case HEADER_1:
            if (incomingBuffer[i]=='N')
                estadoProtocolo=HEADER_2;
            else{
                i--;
                estadoProtocolo=START;
            }
            break;
        case HEADER_2:
            if (incomingBuffer[i]=='E')
                estadoProtocolo=HEADER_3;
            else{
                i--;
                estadoProtocolo=START;
            }
            break;
        case HEADER_3:
            if (incomingBuffer[i]=='R')
                estadoProtocolo=NBYTES;
            else{
                i--;
                estadoProtocolo=START;
            }
            break;
        case NBYTES:
            rxData.nBytes=incomingBuffer[i];
            estadoProtocolo=TOKEN;
            break;
        case TOKEN:
            if (incomingBuffer[i]==':'){
                estadoProtocolo=PAYLOAD;
                rxData.cheksum='U'^'N'^'E'^'R'^ rxData.nBytes^':';
                rxData.payLoad[0]=rxData.nBytes;
                rxData.index=1;
            }
            else{
                i--;
                estadoProtocolo=START;
            }
            break;
        case PAYLOAD:
            if (rxData.nBytes>1){
                rxData.payLoad[rxData.index++]=incomingBuffer[i];
                rxData.cheksum^=incomingBuffer[i];
            }
            rxData.nBytes--;
            if(rxData.nBytes==0){
                estadoProtocolo=START;
                if(rxData.cheksum==incomingBuffer[i]){
                    decodeData(&rxData.payLoad[0],SERIE);
                }
            }
            break;
        default:
            estadoProtocolo=START;
            break;
        }
    }
    delete [] incomingBuffer;

}

void MainWindow::OnUdpRxData(){ //!< RECIBIR DATOS POR UDP
    qint64          count=0;
    unsigned char   *incomingBuffer;

    while(UdpSocket1->hasPendingDatagrams()){
        count = UdpSocket1->pendingDatagramSize();
        incomingBuffer = new unsigned char[count];
        UdpSocket1->readDatagram( reinterpret_cast<char *>(incomingBuffer), count, &RemoteAddress, &RemotePort);
    }

    QString str="";
    for(int i=0; i<=count; i++){
        if(isalnum(incomingBuffer[i]))
            str = str + QString("%1").arg(char(incomingBuffer[i]));
        else
            str = str +"{" + QString("%1").arg(incomingBuffer[i],2,16,QChar('0')) + "}";
    }
    str = str.toUpper();
    ui->textBrowser->append("BLUEPILL (UDP) -> (" + str + ")");
    ui->lineEditIP->setText(RemoteAddress.toString().right((RemoteAddress.toString().length())-7));
    ui->lineEditPort->setText(QString().number(RemotePort,10));

    for(int i=0;i<count; i++){
        switch (estadoProtocoloUdp) {
        case START:
            if (incomingBuffer[i]=='U'){
                estadoProtocoloUdp=HEADER_1;
                rxDataUdp.cheksum=0;
            }
            break;
        case HEADER_1:
            if (incomingBuffer[i]=='N')
                estadoProtocoloUdp=HEADER_2;
            else{
                i--;
                estadoProtocoloUdp=START;
            }
            break;
        case HEADER_2:
            if (incomingBuffer[i]=='E')
                estadoProtocoloUdp=HEADER_3;
            else{
                i--;
                estadoProtocoloUdp=START;
            }
            break;
        case HEADER_3:
            if (incomingBuffer[i]=='R')
                estadoProtocoloUdp=NBYTES;
            else{
                i--;
                estadoProtocoloUdp=START;
            }
            break;
        case NBYTES:
            rxDataUdp.nBytes=incomingBuffer[i];
            estadoProtocoloUdp=TOKEN;
            break;
        case TOKEN:
            if (incomingBuffer[i]==':'){
                estadoProtocoloUdp=PAYLOAD;
                rxDataUdp.cheksum='U'^'N'^'E'^'R'^ rxDataUdp.nBytes^':';
                rxDataUdp.payLoad[0]=rxDataUdp.nBytes;
                rxDataUdp.index=1;
            }
            else{
                i--;
                estadoProtocoloUdp=START;
            }
            break;
        case PAYLOAD:
            if (rxDataUdp.nBytes>1){
                rxDataUdp.payLoad[rxDataUdp.index++]=incomingBuffer[i];
                rxDataUdp.cheksum^=incomingBuffer[i];
            }
            rxDataUdp.nBytes--;
            if(rxDataUdp.nBytes==0){
                estadoProtocoloUdp=START;
                if(rxDataUdp.cheksum==incomingBuffer[i]){
                    decodeData(&rxDataUdp.payLoad[0],UDP);
                }else{
                    ui->textBrowser->append("CHECKSUM ERROR");
                }
            }
            break;
        default:
            estadoProtocoloUdp=START;
            break;
        }
    }
}

void MainWindow::decodeData(uint8_t *datosRx, uint8_t source)
{
    int32_t length = sizeof(*datosRx)/sizeof(datosRx[0]);
    uint8_t i=0;
    QString str;
    _work w;

    for(int i = 1; i<length; i++){
        if(isalnum(datosRx[i]))
            str = str + QString("%1").arg(char(datosRx[i]));
        else
            str = str +QString("%1").arg(datosRx[i],2,16,QChar('0'));
    }

    switch (datosRx[1]) {
    case GETLOCALIP:
        if(datosRx[4]==ACKNOWLEDGE){
            if(source == SERIE)
                str = (QString("BLUEPILL (PC): GOT IP at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
            else if (source == UDP)
                str = (QString("BLUEPILL (UDP): GOT IP at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
        }else{
            str = (QString("BLUEPILL GOT IP (NO ACKNOWLEDGE) at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
        }
        ui->txtBrowserCMD->append(str);
        break;
    case ALIVE:
        if(datosRx[2]==ACKNOWLEDGE){
            if(source == SERIE)
                str = (QString("BLUEPILL (PC): I'M ALIVE at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
            else if (source == UDP){
                str = (QString("BLUEPILL (UDP): I'M ALIVE at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
            }
        }else{
            str = (QString("BLUEPILL ALIVE (NO ACKNOWLEDGE) at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
        }
        ui->AliveLabel->setStyleSheet("border: 1px solid gray;border-color: black;border-radius: 2px;background-color: green;color: white;");
        ui->AliveLabel->setText("YES");
        alive = true;
        aliveTimeOut = 0;
        ui->txtBrowserCMD->append(str);
        break;
    case FIRMWARE:
        while (datosRx[i+4]) {
            firmwareCadena[i] = datosRx[i+4];
            i++;
        }
        ui->FirmwareLabel->setText(firmwareCadena);
        break;
    case ANALOG_IR:
        for (uint8_t i=0; i<16; i+=2) {
            w.u8[0] = datosRx[i+2];
            w.u8[1] = datosRx[i+3];
            irSensorsMeasure[i/2] = w.u16[0];
        }
        ui->txtBrowserCMD->append(QString("BLUEPILL (PC): NEW ANALOG IR's DATA at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
        ui->ir_0->setText(QString("%1").arg(irSensorsMeasure[0], 2, 10, QChar('0')));
        ui->ir_1->setText(QString("%1").arg(irSensorsMeasure[1], 2, 10, QChar('0')));
        ui->ir_2->setText(QString("%1").arg(irSensorsMeasure[2], 2, 10, QChar('0')));
        ui->ir_3->setText(QString("%1").arg(irSensorsMeasure[3], 2, 10, QChar('0')));
        ui->ir_4->setText(QString("%1").arg(irSensorsMeasure[4], 2, 10, QChar('0')));
        ui->ir_5->setText(QString("%1").arg(irSensorsMeasure[5], 2, 10, QChar('0')));
        ui->ir_6->setText(QString("%1").arg(irSensorsMeasure[6], 2, 10, QChar('0')));
        ui->ir_7->setText(QString("%1").arg(irSensorsMeasure[7], 2, 10, QChar('0')));
        break;
    case MPU_6050:
        for (uint8_t i=0; i<12; i+=2) {
            w.i32 = 0;
            w.u8[0] = datosRx[i+2];
            w.u8[1] = datosRx[i+3];
            myMPUdata[i/2] = ((int16_t)w.i32);
        }
        ui->txtBrowserCMD->append(QString("BLUEPILL (PC): NEW MPU6050 DATA at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
        ui->ACCx->setText(QString("%1").arg(myMPUdata[0]/16384.0, 1, 'f', 3));
        ui->ACCy->setText(QString("%1").arg(myMPUdata[1]/16384.0, 1, 'f', 3));
        ui->ACCz->setText(QString("%1").arg(myMPUdata[2]/16384.0, 1, 'f', 3));
        ui->GYRx->setText(QString("%1").arg(myMPUdata[3]/131.0, 1, 'f', 3));
        ui->GYRy->setText(QString("%1").arg(myMPUdata[4]/131.0, 1, 'f', 3));
        ui->GYRz->setText(QString("%1").arg(myMPUdata[5]/131.0, 1, 'f', 3));

        break;
    default:
        str = (QString("BLUEPILL: UNKNOWN COMMAND at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
        ui->txtBrowserCMD->append(str);
    }
}

void MainWindow::sendDataSerial()
{
    uint8_t cmdId;
    //_work w;
    unsigned char dato[256];
    unsigned char indice=0, chk=0;

    dato[indice++]='U';
    dato[indice++]='N';
    dato[indice++]='E';
    dato[indice++]='R';
    dato[indice++]=0x00;
    dato[indice++]=':';

    if (isASelectedCmd) {
        cmdId = auxComand;
    } else
        cmdId = ui->comboBoxCom->currentData().toInt();

    switch (cmdId) {
    case ALIVE:
    case FIRMWARE:
    case ANALOG_IR:
    case MPU_6050:
        dato[indice++] = cmdId;
        dato[NBYTES] = 0x02;
        break;
    default:
        return;
    }

    isASelectedCmd = false;

    for(int a=0 ;a<indice;a++)
        chk^=dato[a];
    dato[indice]=chk;

    if(serial->isWritable()){
        serial->write(reinterpret_cast<char *>(dato),dato[NBYTES]+PAYLOAD);
    }
}

void MainWindow::sendDataUDP()
{
    uint8_t cmdId;
    //_work w;
    unsigned char dato[256];
    unsigned char indice=0, chk=0;
    QString str;
    int puerto=0;

    dato[indice++]='U';
    dato[indice++]='N';
    dato[indice++]='E';
    dato[indice++]='R';
    dato[indice++]=0x00;
    dato[indice++]=':';

    if (isASelectedCmd) {
        cmdId = auxComand;
    } else
        cmdId = ui->comboBoxCom->currentData().toInt();

    switch (cmdId) {
    case ALIVE:
    case FIRMWARE:
    case ANALOG_IR:
    case MPU_6050:
        dato[indice++] = cmdId;
        dato[NBYTES] = 0x02;
        break;
    default:
        return;
    }

    isASelectedCmd = false;

    puerto=ui->lineEditPort->text().toInt();
    puertoremoto=puerto;
    for(int a=0 ;a<indice;a++)
        chk^=dato[a];
    dato[indice]=chk;
    if(clientAddress.isNull())
        clientAddress.setAddress(ui->lineEditIP->text());
    if(puertoremoto==0)
        puertoremoto=puerto;
    if(UdpSocket1->isOpen()){
        UdpSocket1->writeDatagram(reinterpret_cast<const char *>(dato), (dato[4]+7), clientAddress, puertoremoto);
    }
    for(int i=0; i<=indice; i++){
        if(isalnum(dato[i]))
            str = str + QString("%1").arg(char(dato[i]));
        else
            str = str +"{" + QString("%1").arg(dato[i],2,16,QChar('0')) + "}";
    }
    str = str.toUpper();
    ui->textBrowser->append("QT -> ( " + str + " )");
}

void MainWindow::OnQTimer1()
{
    if (timeLecturaSensoresTask10ms >= 50) {
        lecturaSensores();
        timeLecturaSensoresTask10ms = 0;
    } else
        timeLecturaSensoresTask10ms++;

    if (timeMPUdata >= 25) {
        auxComand = MPU_6050;
        isASelectedCmd = true;
        sendDataSerial();
        isASelectedCmd = true;
        sendDataUDP();
        timeMPUdata = 0;
    } else
        timeMPUdata++;

    if (aliveTimeOut >= 500) {
        if (connectionType == 1) {
            closeSerialPorts();
        } else {
            if (connectionType == 2) {
                on_pushButtonUdpOpen_clicked();
            }
        }
        alive = false;
        aliveTimeOut = 0;
        reiniciarUI();
    } else
        aliveTimeOut++;

    /*
    if (radarDrawing)
            RadarRun();
    */
}

void MainWindow::inicializaciones()
{
    alive = false;
    aliveTimeOut = 0;
    recibirConfig = true;
    //DibujarFondoRadar();
}

void MainWindow::lecturaSensores()
{
    auxComand = ANALOG_IR;
    isASelectedCmd = true;
    sendDataSerial();
    isASelectedCmd = true;
    sendDataUDP();

    if (alive && recibirConfig) {
        recibirConfig = false;
        ui->FirmwareLabel->setText("2024-v1");
    }

    if (connectionType == SERIE) {
        auxComand = ALIVE;
        isASelectedCmd = true;
        sendDataSerial();
    }
}

void MainWindow::reiniciarUI()
{
    aliveTimeOut = 0;
    ui->AliveLabel->setStyleSheet("border: 1px solid gray;border-color: black;border-radius: 2px;background-color: red;color: white;");
    ui->AliveLabel->setText("NO");
    ui->FirmwareLabel->clear();
    on_clearButton_clicked();
    cleanDataInfo();
}

void MainWindow::on_radarButton_clicked()
{

}

void MainWindow::DibujarFondoRadar() {

}

void MainWindow::RadarRun()
{

}

void MainWindow::DibujarDeteccion() {

}

void MainWindow::on_clearButton_clicked()
{
    ui->textBrowser->clear();
    ui->txtBrowserCMD->clear();
    ui->widgetRadar->isHidden();
}

void MainWindow::cleanDataInfo()
{
    ui->ACCx->clear();
    ui->ACCy->clear();
    ui->ACCz->clear();
    ui->GYRx->clear();
    ui->GYRy->clear();
    ui->GYRz->clear();
    ui->ir_0->clear();
    ui->ir_1->clear();
    ui->ir_2->clear();
    ui->ir_3->clear();
    ui->ir_4->clear();
    ui->ir_5->clear();
    ui->ir_6->clear();
    ui->ir_7->clear();
}
