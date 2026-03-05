#include "mainwindow.h"
#include "qserialportinfo.h"
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
    QPaintBox1 = new QPaintBox(0, 0, ui->positionRadar);

    connect(ui->pushButtonSend,&QPushButton::clicked,this,&MainWindow::sendDataSerial);
    connect(ui->pushButtonSend_2,&QPushButton::clicked,this,&MainWindow::sendDataUDP);
    //connect(serial,&QSerialPort::readyRead,this,&MainWindow::dataRecived);
    //connect(ui->Open_SERIAL,&QPushButton::clicked,settingPorts,&QWidget::showNormal);
    //connect(ui->actionConnect_Device, &QAction::triggered,this,&MainWindow::openSerialPorts);
    //connect(ui->actionDisconnect,&QAction::triggered,this,&MainWindow::closeSerialPorts);
    //connect(ui->actionExit,&QAction::triggered,this,&MainWindow::close);
    connect(UdpSocket1,&QUdpSocket::readyRead,this,&MainWindow::OnUdpRxData);
    connect(QTimer1, &QTimer::timeout, this, &MainWindow::OnQTimer1);

    ui->comboBoxCom->addItem("ALIVE", 0xF0);
    ui->comboBoxCom->addItem("FIRMWARE", 0xF1);
    ui->comboBoxCom->addItem("ANALOG IRs", 0xF2);
    ui->comboBoxCom->addItem("MPU 6050 DATA", 0xF3);
    ui->comboBoxCom->addItem("DISPLAY DATA", 0xF4);
    ui->comboBoxCom->addItem("RECEIVE MOTORS", 0xF5);
    ui->comboBoxCom->addItem("SEND MOTORS", 0xF6);

    initMPU(&myMPU);
    localTimeRef = dt.currentDateTime().time().minute();

    // COMUNICACION USB
    serial = new QSerialPort(this);
    connect(serial,&QSerialPort::readyRead, this,&MainWindow::dataRecived);
    ui->comboBox->installEventFilter(this);
    //header=0;

    // BOTONES E IMAGENES DEL HMI
    botones = new QButtonGroup(this);
    botones->setExclusive(true);
    botones->addButton(ui->Home_Button, 0);
    botones->addButton(ui->Comm_Button, 1);
    botones->addButton(ui->Data_Button, 2);
    botones->addButton(ui->GPS_Button, 3);
    connect(botones,&QButtonGroup::buttonClicked,this,&MainWindow::buttons);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete QPaintBox1;
}

void MainWindow::buttons(QAbstractButton *button)
{
    int indexPag = botones->id(button);
    ui->stackedWidget->setCurrentIndex(indexPag);
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->comboBox)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            ui->comboBox->clear();
            QSerialPortInfo SerialPortInfo1;

            for(int i=0;i<SerialPortInfo1.availablePorts().count();i++)
                ui->comboBox->addItem(SerialPortInfo1.availablePorts().at(i).portName());

            return QMainWindow::eventFilter(watched, event);
        }
        else {
            return false;
        }
    }
    else{
        return QMainWindow::eventFilter(watched, event);
    }
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
        QTimer1->start(10); // 10 MS CLOCK RATE
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
    //int32_t length = sizeof(*datosRx)/sizeof(datosRx[0]);
    uint8_t i=0;
    _work w;
    QString str="";

    /*
    for(int i = 1; i<length; i++){
        if(isalnum(datosRx[i]))
            str = str + QString("%1").arg(char(datosRx[i]));
        else
            str = str +QString("%1").arg(datosRx[i],2,16,QChar('0'));
    }
    */

    switch (datosRx[1]) {
    case GETLOCALIP:
        /*
        if(datosRx[4]==ACKNOWLEDGE){
            if(source == SERIE)
                str = (QString("BLUEPILL (PC): GOT IP at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
            else if (source == UDP)
                str = (QString("BLUEPILL (UDP): GOT IP at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
        }else{
            str = (QString("BLUEPILL GOT IP (NO ACKNOWLEDGE) at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
        }
        ui->txtBrowserCMD->append(str);
        */
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

        ui->textBrowser->append(str);

        ui->AliveLabel->setStyleSheet("border: 1px solid gray;border-color: black;border-radius: 2px;background-color: green;color: white;");
        ui->AliveLabel->setText("YES");
        alive = true;
        aliveTimeOut = 0;
        break;
    case FIRMWARE:
        while (datosRx[i+4]) {
            firmwareCadena[i] = datosRx[i+4];
            i++;
        }
        ui->FirmwareLabel->setText(firmwareCadena);
        break;
    case ANALOG_IR:
        for (uint8_t i=0; i<8; i++){
            dataIR[i]=(100-datosRx[i+2]);
        }
        //ui->txtBrowserCMD->append(QString("BLUEPILL (PC): NEW ANALOG IR's DATA at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
        ui->ir_0->setText(QString("%1").arg(dataIR[0], 2, 10, QChar('0')));
        ui->ir_1->setText(QString("%1").arg(dataIR[1], 2, 10, QChar('0')));
        ui->ir_2->setText(QString("%1").arg(dataIR[2], 2, 10, QChar('0')));
        ui->ir_3->setText(QString("%1").arg(dataIR[3], 2, 10, QChar('0')));
        ui->ir_4->setText(QString("%1").arg(dataIR[4], 2, 10, QChar('0')));
        ui->ir_5->setText(QString("%1").arg(dataIR[5], 2, 10, QChar('0')));
        ui->ir_6->setText(QString("%1").arg(dataIR[6], 2, 10, QChar('0')));
        ui->ir_7->setText(QString("%1").arg(dataIR[7], 2, 10, QChar('0')));
        break;
    case MPU_6050:
        /*
        for (uint8_t i=0; i<12; i+=2) {
            w.u32 = 0;
            w.u8[0] = datosRx[i+2];
            w.u8[1] = datosRx[i+3];
            myMPUdata[i/2] = ((int16_t)w.u32);
        }
        myMPU.Ax = (myMPUdata[0]/16384.0)*9.8;
        myMPU.Ay = (myMPUdata[1]/16384.0)*9.8;
        myMPU.Az = (myMPUdata[2]/16384.0)*9.8;
        myMPU.Gx = (myMPUdata[3]/131.0);
        myMPU.Gy = (myMPUdata[4]/131.0);
        myMPU.Gz = (myMPUdata[5]/131.0);
        */
        decodeMPUdata(datosRx, 2, &myMPU);

        myMPU.Ax = filter_FMM(&myAx, myMPU.Ax);
        myMPU.Ay = filter_FMM(&myAy, myMPU.Ay);
        myMPU.Az = filter_FMM(&myAz, myMPU.Az);
        myMPU.Gx = filter_FMM(&myGx, myMPU.Gx);
        myMPU.Gy = filter_FMM(&myGy, myMPU.Gy);
        myMPU.Gz = filter_FMM(&myGz, myMPU.Gz);

        getYPR(&myMPU, 0.01);
        getVelocityMPU(&myMPU, 0.01);
        getPositionMPU(&myMPU, 0.01);

        ui->AX_Data->setText(QString("%1").arg(myMPU.Ax, 1, 'f', 3));
        ui->AY_Data->setText(QString("%1").arg(myMPU.Ay, 1, 'f', 3));
        ui->AZ_Data->setText(QString("%1").arg(myMPU.Az, 1, 'f', 3));

        ui->GX_Data->setText(QString("%1").arg(myMPU.Gx, 1, 'f', 3));
        ui->GY_Data->setText(QString("%1").arg(myMPU.Gy, 1, 'f', 3));
        ui->GZ_Data->setText(QString("%1").arg(myMPU.Gz, 1, 'f', 3));

        ui->Roll_Data->setText(QString("%1").arg(myMPU.Roll, 1, 'f', 3));
        ui->Pitch_Data->setText(QString("%1").arg(myMPU.Pitch, 1, 'f', 3));
        ui->Yaw_Data->setText(QString("%1").arg(myMPU.Yaw, 1, 'f', 3));

        ui->VX_Data->setText(QString("%1").arg(myMPU.Vx, 1, 'f', 3));
        ui->VY_Data->setText(QString("%1").arg(myMPU.Vy, 1, 'f', 3));
        ui->VZ_Data->setText(QString("%1").arg(myMPU.Vz, 1, 'f', 3));

        ui->PX_Data->setText(QString("%1").arg(myMPU.Px, 1, 'f', 3));
        ui->PY_Data->setText(QString("%1").arg(myMPU.Py, 1, 'f', 3));
        ui->PZ_Data->setText(QString("%1").arg(myMPU.Pz, 1, 'f', 3));
        break;
    case RECEIVE_N20:
        powerMotorLEFT = (int8_t)datosRx[i+2];
        powerMotorRIGHT = (int8_t)datosRx[i+3];

        if (powerMotorLEFT < 0){
        ui->LMPOW_NEG->setValue(-powerMotorLEFT);
            ui->LMPOW_POS->setValue(0);
        }else{
            ui->LMPOW_POS->setValue(powerMotorLEFT);
            ui->LMPOW_NEG->setValue(0);
        }
        if (powerMotorRIGHT < 0){
            ui->RMPOW_NEG->setValue(-powerMotorRIGHT);
            ui->RMPOW_POS->setValue(0);
        }else{
            ui->RMPOW_POS->setValue(powerMotorRIGHT);
            ui->RMPOW_NEG->setValue(0);
        }
        break;
    case BUTTONS:
        if (datosRx[i+2])
            ui->EstadoBotonLabel->setText("UP");
        else
            ui->EstadoBotonLabel->setText("DOWN");
        break;
    default:
        //str = (QString("BLUEPILL: UNKNOWN COMMAND at %0:%1:%2").arg(dt.currentDateTime().time().hour(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().minute(), 2, 10, QChar('0').toUpper()).arg(dt.currentDateTime().time().second(), 2, 10, QChar('0').toUpper()));
        //ui->txtBrowserCMD->append(str);
        break;
    }
}

void MainWindow::sendDataSerial()
{
    uint8_t cmdId;
    _work w;
    unsigned char dato[256];
    unsigned char indice=0, chk=0;
    bool ok;

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
    case RECEIVE_N20:
    case BUTTONS:
        dato[indice++] = cmdId;
        dato[NBYTES] = 0x02;
        break;
    case DISPLAY_SSD1306:
        dato[indice++] = cmdId;
        w.u8[0] = (uint8_t)dt.currentDateTime().time().hour();
        dato[indice++] = w.u8[0];
        w.u8[0] = (uint8_t)dt.currentDateTime().time().minute();
        dato[indice++] = w.u8[0];
        dato[NBYTES] = 0x04;
        break;
    case SEND_N20:
        dato[indice++] = SEND_N20;
        w.i8[0] = QInputDialog::getInt(this, "MOTOR L: SETTINGS", "Potencia: Motor Izquierdo ", 0, -100, 100, 1, &ok);
        if (!ok)
            break;
        dato[indice++] = w.i8[0];
        w.i8[1] = QInputDialog::getInt(this, "MOTOR R: SETTINGS", "Potencia: Motor Derecho ", 0, -100, 100, 1, &ok);
        if (!ok)
            break;
        dato[indice++] = w.i8[1];
        dato[NBYTES] = 0x04;
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
    _work w;
    unsigned char dato[256];
    unsigned char indice=0, chk=0;
    QString str;
    int puerto=0;
    bool ok;

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
    case RECEIVE_N20:
    case BUTTONS:
        dato[indice++] = cmdId;
        dato[NBYTES] = 0x02;
        break;
    case DISPLAY_SSD1306:
        dato[indice++] = cmdId;
        w.u8[0] = (uint8_t)dt.currentDateTime().time().hour();
        dato[indice++] = w.u8[0];
        w.u8[0] = (uint8_t)dt.currentDateTime().time().minute();
        dato[indice++] = w.u8[0];
        dato[NBYTES] = 0x04;
        break;
    case SEND_N20:
        dato[indice++] = SEND_N20;
        w.i8[0] = QInputDialog::getInt(this, "MOTOR L: SETTINGS", "Potencia: Motor Izquierdo ", 0, -100, 100, 1, &ok);
        if (!ok)
            break;
        dato[indice++] = w.i8[0];
        w.i8[1] = QInputDialog::getInt(this, "MOTOR R: SETTINGS", "Potencia: Motor Derecho ", 0, -100, 100, 1, &ok);
        if (!ok)
            break;
        dato[indice++] = w.i8[1];
        dato[NBYTES] = 0x04;
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
    if (timeADCdata >= 50) { // 500 MS
        sendCMD(ANALOG_IR);
        //sendCMD(MOTORES_N20);
        sendCMD(ALIVE);
        lecturaSensores();
        timeADCdata = 0;
    } else
        timeADCdata++;

    sendCMD(MPU_6050);

    if (timeDISPLAYdata >= 500) { // 5 SEGUNDOS
        if (localTimeRef != dt.time().minute()){
            localTimeRef = dt.time().minute();
            sendCMD(DISPLAY_SSD1306);
        }
        timeDISPLAYdata = 0;
    } else
        timeDISPLAYdata++;

    if (aliveTimeOut >= 500) { // 5 SEGUNDOS
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

    if (widgetSize.width != ui->positionRadar->width() || widgetSize.height != ui->positionRadar->height()){
        widgetSize.width = ui->positionRadar->width();
        widgetSize.height = ui->positionRadar->height();
        QPaintBox1->resize(widgetSize.width, widgetSize.height);
        DrawMotionMPU();
    }

    if (timeADCdata >= 10) { // 100 ms
        DrawMovement();
    }
}

void MainWindow::inicializaciones()
{
    alive = false;
    aliveTimeOut = 0;
    recibirConfig = true;
    sendCMD(DISPLAY_SSD1306);
}

void MainWindow::lecturaSensores()
{
    /*
    auxComand = ANALOG_IR;
    isASelectedCmd = true;
    sendDataSerial();
    isASelectedCmd = true;
    sendDataUDP();
    */

    if (alive && recibirConfig) {
        recibirConfig = false;
        ui->FirmwareLabel->setText("2024-v1");
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

void MainWindow::DrawMotionMPU(){
    QPen pen;
    QBrush brush;
    QPainter painter(QPaintBox1->getCanvas());

    pen.setWidth(2);
    pen.setColor(QColor(0, 0, 0, 255));
    brush.setColor(QColor(0, 0, 100, 255)); //(QColor(0, 0, 0, 255));
    brush.setStyle(Qt::BrushStyle::SolidPattern);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(0, 0, widgetSize.width, widgetSize.height);

    pen.setWidth(2);
    pen.setColor(QColor(0, 0, 255, 255));
    brush.setColor(QColor(0, 0, 255, 255));
    brush.setStyle(Qt::BrushStyle::NoBrush);
    painter.setBrush(brush);
    painter.setPen(pen);

    painter.translate(ui->positionRadar->width()/2, ui->positionRadar->height()/2);
    painter.drawEllipse(-widgetSize.width/2, -widgetSize.height/2, widgetSize.width, widgetSize.height);
    painter.drawEllipse(-widgetSize.width/4, -widgetSize.height/4, widgetSize.width/2, widgetSize.height/2);
    painter.drawEllipse(-widgetSize.width/8, -widgetSize.height/8, widgetSize.width/4, widgetSize.height/4);
    painter.drawEllipse(-3*widgetSize.width/8, -3*widgetSize.height/8, 3*widgetSize.width/4, 3*widgetSize.height/4);

    painter.drawLine(-widgetSize.width/2, 0, widgetSize.width/2, 0);
    painter.drawLine(0, -widgetSize.height/2, 0, widgetSize.height/2);
    /*
    for(int i=0; i<8; i++){
        //painter.drawLine(x1 y1 x2 y2)
        painter.drawLine(-widgetSize.width/2, 0, widgetSize.width/2, 0);
        painter.drawLine(-widgetSize.width/2, -widgetSize.height/2, widgetSize.width/2, widgetSize.height/2);
        //painter.drawLine(-widgetSize.width, -widgetSize.height, widgetSize.width, widgetSize.height);
        //painter.drawLine(0, -ui->widget->width(), 0, ui->widget->height());
        painter.rotate(45);
    }
    */
    QPaintBox1->update();

}

void MainWindow::DrawMovement(){
    DrawMotionMPU();
    QPen pen;
    QBrush brush;
    QPainter painter(QPaintBox1->getCanvas());

    pen.setWidth(3);
    //pen.setColor(QColor(0, 232, 0, 255));
    //brush.setColor(QColor(0, 232, 0, 255));
    //pen.setColor(QColor(0, 232, 232, 255));
    //brush.setColor(QColor(0, 232, 232, 255));
    pen.setColor(QColor(255, 255, 255, 255));
    brush.setColor(QColor(255, 255, 255, 255));
    brush.setStyle(Qt::BrushStyle::NoBrush);
    painter.setBrush(brush);
    painter.setPen(pen);

    //painter.translate(0, ui->widget->height()/2);

    //painter.drawPoint(samples, -(int)acceleration[samples]*25);

    painter.translate(ui->positionRadar->width()/2, ui->positionRadar->height()/2);

    painter.drawLine(0, 0, 150*cos(myMPU.Yaw * M_PI/180 + M_PI/2), 150*-sin(myMPU.Yaw * M_PI/180 + M_PI/2));

    pen.setWidth(20);
    pen.setColor(QColor(0, 255, 255, 255));
    painter.setPen(pen);

    //painter.translate(ui->positionRadar->width()/2, ui->positionRadar->height()/2);

    painter.drawPoint(myMPU.Px*2.0, myMPU.Py*2.0);

    QPaintBox1->update();

}

void MainWindow::on_clearButton_clicked()
{
    ui->textBrowser->clear();
    //ui->txtBrowserCMD->clear();
    ui->positionRadar->isHidden();
}

void MainWindow::cleanDataInfo()
{
    ui->AX_Data->clear();
    ui->AY_Data->clear();
    ui->AZ_Data->clear();
    ui->VX_Data->clear();
    ui->VY_Data->clear();
    ui->VZ_Data->clear();
    ui->PX_Data->clear();
    ui->PY_Data->clear();
    ui->PZ_Data->clear();
    ui->ir_0->clear();
    ui->ir_1->clear();
    ui->ir_2->clear();
    ui->ir_3->clear();
    ui->ir_4->clear();
    ui->ir_5->clear();
    ui->ir_6->clear();
    ui->ir_7->clear();
    ui->LMPOW_NEG->setValue(0);
    ui->LMPOW_POS->setValue(0);
    ui->RMPOW_NEG->setValue(0);
    ui->RMPOW_POS->setValue(0);
}

void MainWindow::sendCMD(uint8_t CMD){
    auxComand = CMD;
    isASelectedCmd = true;
    sendDataSerial();
    sendDataUDP();
}

int16_t MainWindow::integrate(uint16_t newValue, int16_t lastValue, uint8_t condition, uint8_t timeInterval){
    return (((newValue - lastValue)/timeInterval)+condition);
}

void MainWindow::on_Open_SERIAL_clicked()
{
    if(serial->isOpen())
    {
        serial->close();
        //QTimer1->stop();
        //timeCounter = 0;
        ui->Open_SERIAL->setText("CONNECT");
    }
    else
    {
        if(ui->comboBox->currentText() == "")
            return;

        serial->setPortName(ui->comboBox->currentText());
        serial->setBaudRate(115200);
        serial->setParity(QSerialPort::NoParity);
        serial->setDataBits(QSerialPort::Data8);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        //QTimer1->start(20);

        if(serial->open(QSerialPort::ReadWrite))
        {
            ui->Open_SERIAL->setText("DISCONNECT");
        }
    }
}

