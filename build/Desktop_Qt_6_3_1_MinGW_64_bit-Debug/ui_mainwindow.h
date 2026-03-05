/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionScanPorts;
    QAction *actionConnect_Device;
    QAction *actionDisconnect;
    QAction *actionExit;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Home;
    QWidget *Comm;
    QGroupBox *COMMUNICATIONS;
    QGroupBox *UDPSERVER;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QLineEdit *lineEditLocalPort;
    QPushButton *pushButtonUdpOpen;
    QGroupBox *UDPCLIENT;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_15;
    QLineEdit *lineEditIP;
    QLabel *label_16;
    QLineEdit *lineEditPort;
    QGroupBox *DATAFLOW;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_18;
    QPushButton *clearButton;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QPushButton *Open_SERIAL;
    QGroupBox *groupBox_4;
    QGroupBox *COMMAND;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonSend;
    QPushButton *pushButtonSend_2;
    QComboBox *comboBoxCom;
    QWidget *Drawings;
    QGroupBox *CARSENSORS;
    QLabel *label;
    QLineEdit *ir_0;
    QLineEdit *ir_1;
    QLineEdit *ir_2;
    QLineEdit *ir_3;
    QLineEdit *ir_5;
    QLineEdit *ir_4;
    QLineEdit *ir_6;
    QLineEdit *ir_7;
    QWidget *positionRadar;
    QWidget *Data;
    QGroupBox *groupBox;
    QGroupBox *LEFTMOTOR;
    QGridLayout *gridLayout_10;
    QLabel *LM_Label;
    QProgressBar *LMPOW_NEG;
    QProgressBar *LMPOW_POS;
    QGroupBox *RIGHTMOTOR;
    QGridLayout *gridLayout_11;
    QLabel *RM_Label;
    QProgressBar *RMPOW_NEG;
    QProgressBar *RMPOW_POS;
    QGroupBox *MPU6050;
    QGroupBox *ACCELERATION;
    QGridLayout *gridLayout_5;
    QLabel *AXLabel;
    QLabel *AYLabel;
    QLabel *AZLabel;
    QLineEdit *AX_Data;
    QLineEdit *AY_Data;
    QLineEdit *AZ_Data;
    QGroupBox *GYRO;
    QGridLayout *gridLayout_6;
    QLabel *GXLabel;
    QLabel *GYLabel;
    QLabel *GZLabel;
    QLineEdit *GX_Data;
    QLineEdit *GY_Data;
    QLineEdit *GZ_Data;
    QGroupBox *RPY;
    QGridLayout *gridLayout_7;
    QLabel *ROLLLabel;
    QLabel *PITCHLabel;
    QLabel *YAWData;
    QLineEdit *Roll_Data;
    QLineEdit *Pitch_Data;
    QLineEdit *Yaw_Data;
    QGroupBox *VELOCITY;
    QGridLayout *gridLayout_8;
    QLabel *VYLabel;
    QLabel *VZLabel;
    QLabel *VXLabel;
    QLineEdit *VX_Data;
    QLineEdit *VY_Data;
    QLineEdit *VZ_Data;
    QGroupBox *POSITION;
    QGridLayout *gridLayout_9;
    QLabel *PYLabel;
    QLabel *PZLabel;
    QLabel *PXLabel;
    QLineEdit *PX_Data;
    QLineEdit *PY_Data;
    QLineEdit *PZ_Data;
    QGroupBox *STATE;
    QGroupBox *groupBox_17;
    QLabel *AliveLabel;
    QGroupBox *groupBox_16;
    QLabel *FirmwareLabel;
    QGroupBox *groupBox_15;
    QLabel *EstadoBotonLabel;
    QPushButton *Home_Button;
    QPushButton *Comm_Button;
    QPushButton *Data_Button;
    QPushButton *GPS_Button;
    QMenuBar *menubar;
    QMenu *menuConfiguraciones;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 790);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1280, 790));
        MainWindow->setMaximumSize(QSize(1280, 790));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rubik")});
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("car.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:0.99, y2:1, stop:0 rgba(237, 240, 255, 255), stop:1 rgba(111, 106, 255, 255));\n"
"font: 10pt \"Rubik\";"));
        actionScanPorts = new QAction(MainWindow);
        actionScanPorts->setObjectName(QString::fromUtf8("actionScanPorts"));
        actionConnect_Device = new QAction(MainWindow);
        actionConnect_Device->setObjectName(QString::fromUtf8("actionConnect_Device"));
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 100, 1241, 621));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:0.99, y2:1, stop:0 rgba(76, 76, 119, 255), stop:1 rgba(5, 0, 50, 255));"));
        Home = new QWidget();
        Home->setObjectName(QString::fromUtf8("Home"));
        stackedWidget->addWidget(Home);
        Comm = new QWidget();
        Comm->setObjectName(QString::fromUtf8("Comm"));
        COMMUNICATIONS = new QGroupBox(Comm);
        COMMUNICATIONS->setObjectName(QString::fromUtf8("COMMUNICATIONS"));
        COMMUNICATIONS->setGeometry(QRect(20, 350, 421, 251));
        sizePolicy.setHeightForWidth(COMMUNICATIONS->sizePolicy().hasHeightForWidth());
        COMMUNICATIONS->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cascadia Mono")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        COMMUNICATIONS->setFont(font1);
        COMMUNICATIONS->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 12pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        COMMUNICATIONS->setAlignment(Qt::AlignCenter);
        COMMUNICATIONS->setFlat(false);
        COMMUNICATIONS->setCheckable(false);
        UDPSERVER = new QGroupBox(COMMUNICATIONS);
        UDPSERVER->setObjectName(QString::fromUtf8("UDPSERVER"));
        UDPSERVER->setGeometry(QRect(10, 30, 401, 81));
        UDPSERVER->setFont(font1);
        UDPSERVER->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 12pt \"Cascadia Mono\";"));
        UDPSERVER->setAlignment(Qt::AlignCenter);
        UDPSERVER->setFlat(false);
        horizontalLayoutWidget = new QWidget(UDPSERVER);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 381, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(horizontalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_14);

        lineEditLocalPort = new QLineEdit(horizontalLayoutWidget);
        lineEditLocalPort->setObjectName(QString::fromUtf8("lineEditLocalPort"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditLocalPort->sizePolicy().hasHeightForWidth());
        lineEditLocalPort->setSizePolicy(sizePolicy2);
        lineEditLocalPort->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        lineEditLocalPort->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEditLocalPort);

        pushButtonUdpOpen = new QPushButton(horizontalLayoutWidget);
        pushButtonUdpOpen->setObjectName(QString::fromUtf8("pushButtonUdpOpen"));
        sizePolicy2.setHeightForWidth(pushButtonUdpOpen->sizePolicy().hasHeightForWidth());
        pushButtonUdpOpen->setSizePolicy(sizePolicy2);
        pushButtonUdpOpen->setFont(font1);
        pushButtonUdpOpen->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButtonUdpOpen);

        UDPCLIENT = new QGroupBox(COMMUNICATIONS);
        UDPCLIENT->setObjectName(QString::fromUtf8("UDPCLIENT"));
        UDPCLIENT->setGeometry(QRect(10, 120, 401, 121));
        UDPCLIENT->setFont(font1);
        UDPCLIENT->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 12pt \"Cascadia Mono\";"));
        UDPCLIENT->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(UDPCLIENT);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 381, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        lineEditIP = new QLineEdit(gridLayoutWidget);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));
        sizePolicy2.setHeightForWidth(lineEditIP->sizePolicy().hasHeightForWidth());
        lineEditIP->setSizePolicy(sizePolicy2);
        lineEditIP->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        lineEditIP->setReadOnly(true);

        gridLayout->addWidget(lineEditIP, 0, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        lineEditPort = new QLineEdit(gridLayoutWidget);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        sizePolicy2.setHeightForWidth(lineEditPort->sizePolicy().hasHeightForWidth());
        lineEditPort->setSizePolicy(sizePolicy2);
        lineEditPort->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        lineEditPort->setReadOnly(true);

        gridLayout->addWidget(lineEditPort, 1, 1, 1, 1);

        DATAFLOW = new QGroupBox(Comm);
        DATAFLOW->setObjectName(QString::fromUtf8("DATAFLOW"));
        DATAFLOW->setEnabled(true);
        DATAFLOW->setGeometry(QRect(460, 20, 401, 581));
        DATAFLOW->setFont(font1);
        DATAFLOW->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 12pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        DATAFLOW->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        DATAFLOW->setCheckable(false);
        textBrowser = new QTextBrowser(DATAFLOW);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 30, 381, 471));
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"Rubik\";"));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        groupBox_18 = new QGroupBox(DATAFLOW);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        groupBox_18->setGeometry(QRect(10, 510, 381, 61));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_18->sizePolicy().hasHeightForWidth());
        groupBox_18->setSizePolicy(sizePolicy3);
        groupBox_18->setFont(font1);
        groupBox_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        groupBox_18->setAlignment(Qt::AlignCenter);
        groupBox_18->setFlat(false);
        groupBox_18->setCheckable(false);
        clearButton = new QPushButton(groupBox_18);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(10, 10, 361, 41));
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        clearButton->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        groupBox_2 = new QGroupBox(Comm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 421, 121));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 12pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 30, 401, 81));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 12pt \"Cascadia Mono\";"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_2 = new QWidget(groupBox_3);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 30, 381, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(horizontalLayoutWidget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(comboBox);

        Open_SERIAL = new QPushButton(horizontalLayoutWidget_2);
        Open_SERIAL->setObjectName(QString::fromUtf8("Open_SERIAL"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Open_SERIAL->sizePolicy().hasHeightForWidth());
        Open_SERIAL->setSizePolicy(sizePolicy4);
        Open_SERIAL->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(Open_SERIAL);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);
        groupBox_4 = new QGroupBox(Comm);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 160, 421, 171));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 12pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        COMMAND = new QGroupBox(groupBox_4);
        COMMAND->setObjectName(QString::fromUtf8("COMMAND"));
        COMMAND->setGeometry(QRect(10, 40, 401, 121));
        COMMAND->setFont(font1);
        COMMAND->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 12pt \"Cascadia Mono\";"));
        COMMAND->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_2 = new QWidget(COMMAND);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 30, 381, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonSend = new QPushButton(gridLayoutWidget_2);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));
        sizePolicy4.setHeightForWidth(pushButtonSend->sizePolicy().hasHeightForWidth());
        pushButtonSend->setSizePolicy(sizePolicy4);
        pushButtonSend->setFont(font1);
        pushButtonSend->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButtonSend, 1, 0, 1, 1);

        pushButtonSend_2 = new QPushButton(gridLayoutWidget_2);
        pushButtonSend_2->setObjectName(QString::fromUtf8("pushButtonSend_2"));
        sizePolicy4.setHeightForWidth(pushButtonSend_2->sizePolicy().hasHeightForWidth());
        pushButtonSend_2->setSizePolicy(sizePolicy4);
        pushButtonSend_2->setFont(font1);
        pushButtonSend_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(pushButtonSend_2, 1, 1, 1, 1);

        comboBoxCom = new QComboBox(gridLayoutWidget_2);
        comboBoxCom->setObjectName(QString::fromUtf8("comboBoxCom"));
        sizePolicy1.setHeightForWidth(comboBoxCom->sizePolicy().hasHeightForWidth());
        comboBoxCom->setSizePolicy(sizePolicy1);
        comboBoxCom->setFont(font1);
        comboBoxCom->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(comboBoxCom, 0, 0, 1, 2);

        stackedWidget->addWidget(Comm);
        Drawings = new QWidget();
        Drawings->setObjectName(QString::fromUtf8("Drawings"));
        CARSENSORS = new QGroupBox(Drawings);
        CARSENSORS->setObjectName(QString::fromUtf8("CARSENSORS"));
        CARSENSORS->setGeometry(QRect(10, 10, 431, 361));
        CARSENSORS->setFont(font1);
        CARSENSORS->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 12pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        CARSENSORS->setAlignment(Qt::AlignCenter);
        CARSENSORS->setFlat(false);
        label = new QLabel(CARSENSORS);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 411, 321));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label->setTextFormat(Qt::MarkdownText);
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/icons/trazado_pcb.png")));
        label->setScaledContents(true);
        label->setMargin(10);
        ir_0 = new QLineEdit(CARSENSORS);
        ir_0->setObjectName(QString::fromUtf8("ir_0"));
        ir_0->setGeometry(QRect(350, 100, 61, 31));
        sizePolicy2.setHeightForWidth(ir_0->sizePolicy().hasHeightForWidth());
        ir_0->setSizePolicy(sizePolicy2);
        ir_0->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        ir_0->setAlignment(Qt::AlignCenter);
        ir_0->setReadOnly(true);
        ir_1 = new QLineEdit(CARSENSORS);
        ir_1->setObjectName(QString::fromUtf8("ir_1"));
        ir_1->setGeometry(QRect(350, 60, 61, 31));
        sizePolicy2.setHeightForWidth(ir_1->sizePolicy().hasHeightForWidth());
        ir_1->setSizePolicy(sizePolicy2);
        ir_1->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        ir_1->setAlignment(Qt::AlignCenter);
        ir_1->setReadOnly(true);
        ir_2 = new QLineEdit(CARSENSORS);
        ir_2->setObjectName(QString::fromUtf8("ir_2"));
        ir_2->setGeometry(QRect(270, 50, 61, 31));
        sizePolicy2.setHeightForWidth(ir_2->sizePolicy().hasHeightForWidth());
        ir_2->setSizePolicy(sizePolicy2);
        ir_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        ir_2->setAlignment(Qt::AlignCenter);
        ir_2->setReadOnly(true);
        ir_3 = new QLineEdit(CARSENSORS);
        ir_3->setObjectName(QString::fromUtf8("ir_3"));
        ir_3->setGeometry(QRect(185, 50, 61, 31));
        sizePolicy2.setHeightForWidth(ir_3->sizePolicy().hasHeightForWidth());
        ir_3->setSizePolicy(sizePolicy2);
        ir_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        ir_3->setAlignment(Qt::AlignCenter);
        ir_3->setReadOnly(true);
        ir_5 = new QLineEdit(CARSENSORS);
        ir_5->setObjectName(QString::fromUtf8("ir_5"));
        ir_5->setGeometry(QRect(20, 60, 61, 31));
        sizePolicy2.setHeightForWidth(ir_5->sizePolicy().hasHeightForWidth());
        ir_5->setSizePolicy(sizePolicy2);
        ir_5->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        ir_5->setAlignment(Qt::AlignCenter);
        ir_5->setReadOnly(true);
        ir_4 = new QLineEdit(CARSENSORS);
        ir_4->setObjectName(QString::fromUtf8("ir_4"));
        ir_4->setGeometry(QRect(100, 50, 61, 31));
        sizePolicy2.setHeightForWidth(ir_4->sizePolicy().hasHeightForWidth());
        ir_4->setSizePolicy(sizePolicy2);
        ir_4->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        ir_4->setAlignment(Qt::AlignCenter);
        ir_4->setReadOnly(true);
        ir_6 = new QLineEdit(CARSENSORS);
        ir_6->setObjectName(QString::fromUtf8("ir_6"));
        ir_6->setGeometry(QRect(20, 100, 61, 31));
        sizePolicy2.setHeightForWidth(ir_6->sizePolicy().hasHeightForWidth());
        ir_6->setSizePolicy(sizePolicy2);
        ir_6->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        ir_6->setAlignment(Qt::AlignCenter);
        ir_6->setReadOnly(true);
        ir_7 = new QLineEdit(CARSENSORS);
        ir_7->setObjectName(QString::fromUtf8("ir_7"));
        ir_7->setGeometry(QRect(185, 300, 61, 31));
        sizePolicy2.setHeightForWidth(ir_7->sizePolicy().hasHeightForWidth());
        ir_7->setSizePolicy(sizePolicy2);
        ir_7->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        ir_7->setAlignment(Qt::AlignCenter);
        ir_7->setReadOnly(true);
        positionRadar = new QWidget(Drawings);
        positionRadar->setObjectName(QString::fromUtf8("positionRadar"));
        positionRadar->setGeometry(QRect(460, 20, 381, 351));
        positionRadar->setAutoFillBackground(false);
        positionRadar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 100);"));
        stackedWidget->addWidget(Drawings);
        Data = new QWidget();
        Data->setObjectName(QString::fromUtf8("Data"));
        groupBox = new QGroupBox(Data);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 240, 411, 171));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 12pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        groupBox->setAlignment(Qt::AlignCenter);
        LEFTMOTOR = new QGroupBox(groupBox);
        LEFTMOTOR->setObjectName(QString::fromUtf8("LEFTMOTOR"));
        LEFTMOTOR->setGeometry(QRect(10, 30, 391, 61));
        LEFTMOTOR->setFont(font1);
        LEFTMOTOR->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        LEFTMOTOR->setAlignment(Qt::AlignCenter);
        gridLayout_10 = new QGridLayout(LEFTMOTOR);
        gridLayout_10->setSpacing(0);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(3, 3, 3, 3);
        LM_Label = new QLabel(LEFTMOTOR);
        LM_Label->setObjectName(QString::fromUtf8("LM_Label"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(LM_Label->sizePolicy().hasHeightForWidth());
        LM_Label->setSizePolicy(sizePolicy5);
        LM_Label->setFont(font1);
        LM_Label->setLayoutDirection(Qt::LeftToRight);
        LM_Label->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        LM_Label->setFrameShape(QFrame::Box);
        LM_Label->setFrameShadow(QFrame::Plain);
        LM_Label->setLineWidth(1);
        LM_Label->setTextFormat(Qt::AutoText);
        LM_Label->setAlignment(Qt::AlignCenter);
        LM_Label->setWordWrap(false);

        gridLayout_10->addWidget(LM_Label, 0, 0, 1, 2);

        LMPOW_NEG = new QProgressBar(LEFTMOTOR);
        LMPOW_NEG->setObjectName(QString::fromUtf8("LMPOW_NEG"));
        sizePolicy2.setHeightForWidth(LMPOW_NEG->sizePolicy().hasHeightForWidth());
        LMPOW_NEG->setSizePolicy(sizePolicy2);
        LMPOW_NEG->setLayoutDirection(Qt::RightToLeft);
        LMPOW_NEG->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        LMPOW_NEG->setMinimum(0);
        LMPOW_NEG->setValue(0);
        LMPOW_NEG->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LMPOW_NEG->setTextVisible(false);
        LMPOW_NEG->setOrientation(Qt::Horizontal);
        LMPOW_NEG->setInvertedAppearance(false);
        LMPOW_NEG->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_10->addWidget(LMPOW_NEG, 1, 0, 1, 1);

        LMPOW_POS = new QProgressBar(LEFTMOTOR);
        LMPOW_POS->setObjectName(QString::fromUtf8("LMPOW_POS"));
        sizePolicy2.setHeightForWidth(LMPOW_POS->sizePolicy().hasHeightForWidth());
        LMPOW_POS->setSizePolicy(sizePolicy2);
        LMPOW_POS->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        LMPOW_POS->setMinimum(0);
        LMPOW_POS->setValue(0);
        LMPOW_POS->setTextVisible(false);
        LMPOW_POS->setOrientation(Qt::Horizontal);
        LMPOW_POS->setInvertedAppearance(false);
        LMPOW_POS->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_10->addWidget(LMPOW_POS, 1, 1, 1, 1);

        RIGHTMOTOR = new QGroupBox(groupBox);
        RIGHTMOTOR->setObjectName(QString::fromUtf8("RIGHTMOTOR"));
        RIGHTMOTOR->setGeometry(QRect(10, 100, 391, 61));
        RIGHTMOTOR->setFont(font1);
        RIGHTMOTOR->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        RIGHTMOTOR->setAlignment(Qt::AlignCenter);
        gridLayout_11 = new QGridLayout(RIGHTMOTOR);
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(3, 3, 3, 3);
        RM_Label = new QLabel(RIGHTMOTOR);
        RM_Label->setObjectName(QString::fromUtf8("RM_Label"));
        sizePolicy5.setHeightForWidth(RM_Label->sizePolicy().hasHeightForWidth());
        RM_Label->setSizePolicy(sizePolicy5);
        RM_Label->setFont(font1);
        RM_Label->setLayoutDirection(Qt::LeftToRight);
        RM_Label->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        RM_Label->setFrameShape(QFrame::Box);
        RM_Label->setFrameShadow(QFrame::Plain);
        RM_Label->setLineWidth(1);
        RM_Label->setTextFormat(Qt::AutoText);
        RM_Label->setAlignment(Qt::AlignCenter);
        RM_Label->setWordWrap(false);

        gridLayout_11->addWidget(RM_Label, 0, 0, 1, 2);

        RMPOW_NEG = new QProgressBar(RIGHTMOTOR);
        RMPOW_NEG->setObjectName(QString::fromUtf8("RMPOW_NEG"));
        sizePolicy2.setHeightForWidth(RMPOW_NEG->sizePolicy().hasHeightForWidth());
        RMPOW_NEG->setSizePolicy(sizePolicy2);
        RMPOW_NEG->setLayoutDirection(Qt::RightToLeft);
        RMPOW_NEG->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        RMPOW_NEG->setMinimum(0);
        RMPOW_NEG->setValue(0);
        RMPOW_NEG->setTextVisible(false);
        RMPOW_NEG->setOrientation(Qt::Horizontal);
        RMPOW_NEG->setInvertedAppearance(false);
        RMPOW_NEG->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_11->addWidget(RMPOW_NEG, 1, 0, 1, 1);

        RMPOW_POS = new QProgressBar(RIGHTMOTOR);
        RMPOW_POS->setObjectName(QString::fromUtf8("RMPOW_POS"));
        RMPOW_POS->setEnabled(true);
        sizePolicy2.setHeightForWidth(RMPOW_POS->sizePolicy().hasHeightForWidth());
        RMPOW_POS->setSizePolicy(sizePolicy2);
        RMPOW_POS->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        RMPOW_POS->setMinimum(0);
        RMPOW_POS->setValue(0);
        RMPOW_POS->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        RMPOW_POS->setTextVisible(false);
        RMPOW_POS->setOrientation(Qt::Horizontal);
        RMPOW_POS->setInvertedAppearance(false);
        RMPOW_POS->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_11->addWidget(RMPOW_POS, 1, 1, 1, 1);

        MPU6050 = new QGroupBox(Data);
        MPU6050->setObjectName(QString::fromUtf8("MPU6050"));
        MPU6050->setGeometry(QRect(450, 20, 431, 391));
        sizePolicy.setHeightForWidth(MPU6050->sizePolicy().hasHeightForWidth());
        MPU6050->setSizePolicy(sizePolicy);
        MPU6050->setFont(font1);
        MPU6050->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 12pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        MPU6050->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        MPU6050->setFlat(false);
        ACCELERATION = new QGroupBox(MPU6050);
        ACCELERATION->setObjectName(QString::fromUtf8("ACCELERATION"));
        ACCELERATION->setGeometry(QRect(10, 40, 411, 65));
        ACCELERATION->setFont(font1);
        ACCELERATION->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        ACCELERATION->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(ACCELERATION);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(2);
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(3, 3, 3, 3);
        AXLabel = new QLabel(ACCELERATION);
        AXLabel->setObjectName(QString::fromUtf8("AXLabel"));
        sizePolicy5.setHeightForWidth(AXLabel->sizePolicy().hasHeightForWidth());
        AXLabel->setSizePolicy(sizePolicy5);
        AXLabel->setFont(font1);
        AXLabel->setLayoutDirection(Qt::LeftToRight);
        AXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        AXLabel->setFrameShape(QFrame::Box);
        AXLabel->setFrameShadow(QFrame::Plain);
        AXLabel->setLineWidth(1);
        AXLabel->setTextFormat(Qt::AutoText);
        AXLabel->setAlignment(Qt::AlignCenter);
        AXLabel->setWordWrap(false);

        gridLayout_5->addWidget(AXLabel, 0, 0, 1, 1);

        AYLabel = new QLabel(ACCELERATION);
        AYLabel->setObjectName(QString::fromUtf8("AYLabel"));
        sizePolicy5.setHeightForWidth(AYLabel->sizePolicy().hasHeightForWidth());
        AYLabel->setSizePolicy(sizePolicy5);
        AYLabel->setFont(font1);
        AYLabel->setLayoutDirection(Qt::LeftToRight);
        AYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        AYLabel->setFrameShape(QFrame::Box);
        AYLabel->setLineWidth(1);
        AYLabel->setTextFormat(Qt::AutoText);
        AYLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(AYLabel, 0, 1, 1, 1);

        AZLabel = new QLabel(ACCELERATION);
        AZLabel->setObjectName(QString::fromUtf8("AZLabel"));
        sizePolicy5.setHeightForWidth(AZLabel->sizePolicy().hasHeightForWidth());
        AZLabel->setSizePolicy(sizePolicy5);
        AZLabel->setFont(font1);
        AZLabel->setLayoutDirection(Qt::LeftToRight);
        AZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        AZLabel->setFrameShape(QFrame::Box);
        AZLabel->setLineWidth(1);
        AZLabel->setTextFormat(Qt::AutoText);
        AZLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(AZLabel, 0, 2, 1, 1);

        AX_Data = new QLineEdit(ACCELERATION);
        AX_Data->setObjectName(QString::fromUtf8("AX_Data"));
        sizePolicy2.setHeightForWidth(AX_Data->sizePolicy().hasHeightForWidth());
        AX_Data->setSizePolicy(sizePolicy2);
        AX_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        AX_Data->setAlignment(Qt::AlignCenter);
        AX_Data->setReadOnly(true);

        gridLayout_5->addWidget(AX_Data, 1, 0, 1, 1);

        AY_Data = new QLineEdit(ACCELERATION);
        AY_Data->setObjectName(QString::fromUtf8("AY_Data"));
        sizePolicy2.setHeightForWidth(AY_Data->sizePolicy().hasHeightForWidth());
        AY_Data->setSizePolicy(sizePolicy2);
        AY_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        AY_Data->setAlignment(Qt::AlignCenter);
        AY_Data->setReadOnly(true);

        gridLayout_5->addWidget(AY_Data, 1, 1, 1, 1);

        AZ_Data = new QLineEdit(ACCELERATION);
        AZ_Data->setObjectName(QString::fromUtf8("AZ_Data"));
        sizePolicy2.setHeightForWidth(AZ_Data->sizePolicy().hasHeightForWidth());
        AZ_Data->setSizePolicy(sizePolicy2);
        AZ_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        AZ_Data->setAlignment(Qt::AlignCenter);
        AZ_Data->setReadOnly(true);

        gridLayout_5->addWidget(AZ_Data, 1, 2, 1, 1);

        GYRO = new QGroupBox(MPU6050);
        GYRO->setObjectName(QString::fromUtf8("GYRO"));
        GYRO->setGeometry(QRect(10, 110, 411, 65));
        GYRO->setFont(font1);
        GYRO->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        GYRO->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(GYRO);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(2);
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(3, 3, 3, 3);
        GXLabel = new QLabel(GYRO);
        GXLabel->setObjectName(QString::fromUtf8("GXLabel"));
        sizePolicy5.setHeightForWidth(GXLabel->sizePolicy().hasHeightForWidth());
        GXLabel->setSizePolicy(sizePolicy5);
        GXLabel->setFont(font1);
        GXLabel->setLayoutDirection(Qt::LeftToRight);
        GXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        GXLabel->setFrameShape(QFrame::Box);
        GXLabel->setFrameShadow(QFrame::Plain);
        GXLabel->setLineWidth(1);
        GXLabel->setTextFormat(Qt::AutoText);
        GXLabel->setAlignment(Qt::AlignCenter);
        GXLabel->setWordWrap(false);

        gridLayout_6->addWidget(GXLabel, 0, 0, 1, 1);

        GYLabel = new QLabel(GYRO);
        GYLabel->setObjectName(QString::fromUtf8("GYLabel"));
        sizePolicy5.setHeightForWidth(GYLabel->sizePolicy().hasHeightForWidth());
        GYLabel->setSizePolicy(sizePolicy5);
        GYLabel->setFont(font1);
        GYLabel->setLayoutDirection(Qt::LeftToRight);
        GYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        GYLabel->setFrameShape(QFrame::Box);
        GYLabel->setLineWidth(1);
        GYLabel->setTextFormat(Qt::AutoText);
        GYLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(GYLabel, 0, 1, 1, 1);

        GZLabel = new QLabel(GYRO);
        GZLabel->setObjectName(QString::fromUtf8("GZLabel"));
        sizePolicy5.setHeightForWidth(GZLabel->sizePolicy().hasHeightForWidth());
        GZLabel->setSizePolicy(sizePolicy5);
        GZLabel->setFont(font1);
        GZLabel->setLayoutDirection(Qt::LeftToRight);
        GZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        GZLabel->setFrameShape(QFrame::Box);
        GZLabel->setLineWidth(1);
        GZLabel->setTextFormat(Qt::AutoText);
        GZLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(GZLabel, 0, 2, 1, 1);

        GX_Data = new QLineEdit(GYRO);
        GX_Data->setObjectName(QString::fromUtf8("GX_Data"));
        sizePolicy2.setHeightForWidth(GX_Data->sizePolicy().hasHeightForWidth());
        GX_Data->setSizePolicy(sizePolicy2);
        GX_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        GX_Data->setAlignment(Qt::AlignCenter);
        GX_Data->setReadOnly(true);

        gridLayout_6->addWidget(GX_Data, 1, 0, 1, 1);

        GY_Data = new QLineEdit(GYRO);
        GY_Data->setObjectName(QString::fromUtf8("GY_Data"));
        sizePolicy2.setHeightForWidth(GY_Data->sizePolicy().hasHeightForWidth());
        GY_Data->setSizePolicy(sizePolicy2);
        GY_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        GY_Data->setAlignment(Qt::AlignCenter);
        GY_Data->setReadOnly(true);

        gridLayout_6->addWidget(GY_Data, 1, 1, 1, 1);

        GZ_Data = new QLineEdit(GYRO);
        GZ_Data->setObjectName(QString::fromUtf8("GZ_Data"));
        sizePolicy2.setHeightForWidth(GZ_Data->sizePolicy().hasHeightForWidth());
        GZ_Data->setSizePolicy(sizePolicy2);
        GZ_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        GZ_Data->setAlignment(Qt::AlignCenter);
        GZ_Data->setReadOnly(true);

        gridLayout_6->addWidget(GZ_Data, 1, 2, 1, 1);

        RPY = new QGroupBox(MPU6050);
        RPY->setObjectName(QString::fromUtf8("RPY"));
        RPY->setGeometry(QRect(10, 180, 411, 65));
        RPY->setFont(font1);
        RPY->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        RPY->setAlignment(Qt::AlignCenter);
        gridLayout_7 = new QGridLayout(RPY);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(2);
        gridLayout_7->setVerticalSpacing(0);
        gridLayout_7->setContentsMargins(3, 3, 3, 3);
        ROLLLabel = new QLabel(RPY);
        ROLLLabel->setObjectName(QString::fromUtf8("ROLLLabel"));
        sizePolicy5.setHeightForWidth(ROLLLabel->sizePolicy().hasHeightForWidth());
        ROLLLabel->setSizePolicy(sizePolicy5);
        ROLLLabel->setFont(font1);
        ROLLLabel->setLayoutDirection(Qt::LeftToRight);
        ROLLLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        ROLLLabel->setFrameShape(QFrame::Box);
        ROLLLabel->setFrameShadow(QFrame::Plain);
        ROLLLabel->setLineWidth(1);
        ROLLLabel->setTextFormat(Qt::AutoText);
        ROLLLabel->setAlignment(Qt::AlignCenter);
        ROLLLabel->setWordWrap(false);

        gridLayout_7->addWidget(ROLLLabel, 0, 0, 1, 1);

        PITCHLabel = new QLabel(RPY);
        PITCHLabel->setObjectName(QString::fromUtf8("PITCHLabel"));
        sizePolicy5.setHeightForWidth(PITCHLabel->sizePolicy().hasHeightForWidth());
        PITCHLabel->setSizePolicy(sizePolicy5);
        PITCHLabel->setFont(font1);
        PITCHLabel->setLayoutDirection(Qt::LeftToRight);
        PITCHLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        PITCHLabel->setFrameShape(QFrame::Box);
        PITCHLabel->setLineWidth(1);
        PITCHLabel->setTextFormat(Qt::AutoText);
        PITCHLabel->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(PITCHLabel, 0, 1, 1, 1);

        YAWData = new QLabel(RPY);
        YAWData->setObjectName(QString::fromUtf8("YAWData"));
        sizePolicy5.setHeightForWidth(YAWData->sizePolicy().hasHeightForWidth());
        YAWData->setSizePolicy(sizePolicy5);
        YAWData->setFont(font1);
        YAWData->setLayoutDirection(Qt::LeftToRight);
        YAWData->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        YAWData->setFrameShape(QFrame::Box);
        YAWData->setLineWidth(1);
        YAWData->setTextFormat(Qt::AutoText);
        YAWData->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(YAWData, 0, 2, 1, 1);

        Roll_Data = new QLineEdit(RPY);
        Roll_Data->setObjectName(QString::fromUtf8("Roll_Data"));
        sizePolicy2.setHeightForWidth(Roll_Data->sizePolicy().hasHeightForWidth());
        Roll_Data->setSizePolicy(sizePolicy2);
        Roll_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        Roll_Data->setAlignment(Qt::AlignCenter);
        Roll_Data->setReadOnly(true);

        gridLayout_7->addWidget(Roll_Data, 1, 0, 1, 1);

        Pitch_Data = new QLineEdit(RPY);
        Pitch_Data->setObjectName(QString::fromUtf8("Pitch_Data"));
        sizePolicy2.setHeightForWidth(Pitch_Data->sizePolicy().hasHeightForWidth());
        Pitch_Data->setSizePolicy(sizePolicy2);
        Pitch_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        Pitch_Data->setAlignment(Qt::AlignCenter);
        Pitch_Data->setReadOnly(true);

        gridLayout_7->addWidget(Pitch_Data, 1, 1, 1, 1);

        Yaw_Data = new QLineEdit(RPY);
        Yaw_Data->setObjectName(QString::fromUtf8("Yaw_Data"));
        sizePolicy2.setHeightForWidth(Yaw_Data->sizePolicy().hasHeightForWidth());
        Yaw_Data->setSizePolicy(sizePolicy2);
        Yaw_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        Yaw_Data->setAlignment(Qt::AlignCenter);
        Yaw_Data->setReadOnly(true);

        gridLayout_7->addWidget(Yaw_Data, 1, 2, 1, 1);

        VELOCITY = new QGroupBox(MPU6050);
        VELOCITY->setObjectName(QString::fromUtf8("VELOCITY"));
        VELOCITY->setGeometry(QRect(10, 250, 411, 65));
        VELOCITY->setFont(font1);
        VELOCITY->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        VELOCITY->setAlignment(Qt::AlignCenter);
        gridLayout_8 = new QGridLayout(VELOCITY);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(2);
        gridLayout_8->setVerticalSpacing(0);
        gridLayout_8->setContentsMargins(3, 3, 3, 3);
        VYLabel = new QLabel(VELOCITY);
        VYLabel->setObjectName(QString::fromUtf8("VYLabel"));
        sizePolicy5.setHeightForWidth(VYLabel->sizePolicy().hasHeightForWidth());
        VYLabel->setSizePolicy(sizePolicy5);
        VYLabel->setFont(font1);
        VYLabel->setLayoutDirection(Qt::LeftToRight);
        VYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        VYLabel->setFrameShape(QFrame::Box);
        VYLabel->setLineWidth(1);
        VYLabel->setTextFormat(Qt::AutoText);
        VYLabel->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(VYLabel, 0, 1, 1, 1);

        VZLabel = new QLabel(VELOCITY);
        VZLabel->setObjectName(QString::fromUtf8("VZLabel"));
        sizePolicy5.setHeightForWidth(VZLabel->sizePolicy().hasHeightForWidth());
        VZLabel->setSizePolicy(sizePolicy5);
        VZLabel->setFont(font1);
        VZLabel->setLayoutDirection(Qt::LeftToRight);
        VZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        VZLabel->setFrameShape(QFrame::Box);
        VZLabel->setLineWidth(1);
        VZLabel->setTextFormat(Qt::AutoText);
        VZLabel->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(VZLabel, 0, 2, 1, 1);

        VXLabel = new QLabel(VELOCITY);
        VXLabel->setObjectName(QString::fromUtf8("VXLabel"));
        sizePolicy5.setHeightForWidth(VXLabel->sizePolicy().hasHeightForWidth());
        VXLabel->setSizePolicy(sizePolicy5);
        VXLabel->setFont(font1);
        VXLabel->setLayoutDirection(Qt::LeftToRight);
        VXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        VXLabel->setFrameShape(QFrame::Box);
        VXLabel->setFrameShadow(QFrame::Plain);
        VXLabel->setLineWidth(1);
        VXLabel->setTextFormat(Qt::AutoText);
        VXLabel->setAlignment(Qt::AlignCenter);
        VXLabel->setWordWrap(false);

        gridLayout_8->addWidget(VXLabel, 0, 0, 1, 1);

        VX_Data = new QLineEdit(VELOCITY);
        VX_Data->setObjectName(QString::fromUtf8("VX_Data"));
        sizePolicy2.setHeightForWidth(VX_Data->sizePolicy().hasHeightForWidth());
        VX_Data->setSizePolicy(sizePolicy2);
        VX_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        VX_Data->setAlignment(Qt::AlignCenter);
        VX_Data->setReadOnly(true);

        gridLayout_8->addWidget(VX_Data, 1, 0, 1, 1);

        VY_Data = new QLineEdit(VELOCITY);
        VY_Data->setObjectName(QString::fromUtf8("VY_Data"));
        sizePolicy2.setHeightForWidth(VY_Data->sizePolicy().hasHeightForWidth());
        VY_Data->setSizePolicy(sizePolicy2);
        VY_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        VY_Data->setAlignment(Qt::AlignCenter);
        VY_Data->setReadOnly(true);

        gridLayout_8->addWidget(VY_Data, 1, 1, 1, 1);

        VZ_Data = new QLineEdit(VELOCITY);
        VZ_Data->setObjectName(QString::fromUtf8("VZ_Data"));
        sizePolicy2.setHeightForWidth(VZ_Data->sizePolicy().hasHeightForWidth());
        VZ_Data->setSizePolicy(sizePolicy2);
        VZ_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        VZ_Data->setAlignment(Qt::AlignCenter);
        VZ_Data->setReadOnly(true);

        gridLayout_8->addWidget(VZ_Data, 1, 2, 1, 1);

        POSITION = new QGroupBox(MPU6050);
        POSITION->setObjectName(QString::fromUtf8("POSITION"));
        POSITION->setGeometry(QRect(10, 320, 411, 65));
        POSITION->setFont(font1);
        POSITION->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        POSITION->setAlignment(Qt::AlignCenter);
        gridLayout_9 = new QGridLayout(POSITION);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(2);
        gridLayout_9->setVerticalSpacing(0);
        gridLayout_9->setContentsMargins(3, 3, 3, 3);
        PYLabel = new QLabel(POSITION);
        PYLabel->setObjectName(QString::fromUtf8("PYLabel"));
        sizePolicy5.setHeightForWidth(PYLabel->sizePolicy().hasHeightForWidth());
        PYLabel->setSizePolicy(sizePolicy5);
        PYLabel->setFont(font1);
        PYLabel->setLayoutDirection(Qt::LeftToRight);
        PYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        PYLabel->setFrameShape(QFrame::Box);
        PYLabel->setLineWidth(1);
        PYLabel->setTextFormat(Qt::AutoText);
        PYLabel->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(PYLabel, 0, 1, 1, 1);

        PZLabel = new QLabel(POSITION);
        PZLabel->setObjectName(QString::fromUtf8("PZLabel"));
        sizePolicy5.setHeightForWidth(PZLabel->sizePolicy().hasHeightForWidth());
        PZLabel->setSizePolicy(sizePolicy5);
        PZLabel->setFont(font1);
        PZLabel->setLayoutDirection(Qt::LeftToRight);
        PZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        PZLabel->setFrameShape(QFrame::Box);
        PZLabel->setLineWidth(1);
        PZLabel->setTextFormat(Qt::AutoText);
        PZLabel->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(PZLabel, 0, 2, 1, 1);

        PXLabel = new QLabel(POSITION);
        PXLabel->setObjectName(QString::fromUtf8("PXLabel"));
        sizePolicy5.setHeightForWidth(PXLabel->sizePolicy().hasHeightForWidth());
        PXLabel->setSizePolicy(sizePolicy5);
        PXLabel->setFont(font1);
        PXLabel->setLayoutDirection(Qt::LeftToRight);
        PXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
""));
        PXLabel->setFrameShape(QFrame::Box);
        PXLabel->setFrameShadow(QFrame::Plain);
        PXLabel->setLineWidth(1);
        PXLabel->setTextFormat(Qt::AutoText);
        PXLabel->setAlignment(Qt::AlignCenter);
        PXLabel->setWordWrap(false);

        gridLayout_9->addWidget(PXLabel, 0, 0, 1, 1);

        PX_Data = new QLineEdit(POSITION);
        PX_Data->setObjectName(QString::fromUtf8("PX_Data"));
        sizePolicy2.setHeightForWidth(PX_Data->sizePolicy().hasHeightForWidth());
        PX_Data->setSizePolicy(sizePolicy2);
        PX_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        PX_Data->setAlignment(Qt::AlignCenter);
        PX_Data->setReadOnly(true);

        gridLayout_9->addWidget(PX_Data, 1, 0, 1, 1);

        PY_Data = new QLineEdit(POSITION);
        PY_Data->setObjectName(QString::fromUtf8("PY_Data"));
        sizePolicy2.setHeightForWidth(PY_Data->sizePolicy().hasHeightForWidth());
        PY_Data->setSizePolicy(sizePolicy2);
        PY_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        PY_Data->setAlignment(Qt::AlignCenter);
        PY_Data->setReadOnly(true);

        gridLayout_9->addWidget(PY_Data, 1, 1, 1, 1);

        PZ_Data = new QLineEdit(POSITION);
        PZ_Data->setObjectName(QString::fromUtf8("PZ_Data"));
        sizePolicy2.setHeightForWidth(PZ_Data->sizePolicy().hasHeightForWidth());
        PZ_Data->setSizePolicy(sizePolicy2);
        PZ_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        PZ_Data->setAlignment(Qt::AlignCenter);
        PZ_Data->setReadOnly(true);

        gridLayout_9->addWidget(PZ_Data, 1, 2, 1, 1);

        STATE = new QGroupBox(Data);
        STATE->setObjectName(QString::fromUtf8("STATE"));
        STATE->setGeometry(QRect(20, 20, 411, 201));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(STATE->sizePolicy().hasHeightForWidth());
        STATE->setSizePolicy(sizePolicy6);
        STATE->setFont(font1);
        STATE->setLayoutDirection(Qt::LeftToRight);
        STATE->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 12pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        STATE->setAlignment(Qt::AlignCenter);
        groupBox_17 = new QGroupBox(STATE);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(10, 40, 191, 71));
        sizePolicy3.setHeightForWidth(groupBox_17->sizePolicy().hasHeightForWidth());
        groupBox_17->setSizePolicy(sizePolicy3);
        groupBox_17->setFont(font1);
        groupBox_17->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        groupBox_17->setAlignment(Qt::AlignCenter);
        groupBox_17->setFlat(false);
        groupBox_17->setCheckable(false);
        AliveLabel = new QLabel(groupBox_17);
        AliveLabel->setObjectName(QString::fromUtf8("AliveLabel"));
        AliveLabel->setGeometry(QRect(10, 30, 161, 31));
        sizePolicy2.setHeightForWidth(AliveLabel->sizePolicy().hasHeightForWidth());
        AliveLabel->setSizePolicy(sizePolicy2);
        AliveLabel->setFont(font1);
        AliveLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: red;\n"
"color: white;"));
        AliveLabel->setFrameShape(QFrame::Box);
        AliveLabel->setFrameShadow(QFrame::Plain);
        AliveLabel->setLineWidth(1);
        AliveLabel->setAlignment(Qt::AlignCenter);
        groupBox_16 = new QGroupBox(STATE);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(10, 120, 391, 71));
        sizePolicy3.setHeightForWidth(groupBox_16->sizePolicy().hasHeightForWidth());
        groupBox_16->setSizePolicy(sizePolicy3);
        groupBox_16->setFont(font1);
        groupBox_16->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        groupBox_16->setAlignment(Qt::AlignCenter);
        FirmwareLabel = new QLabel(groupBox_16);
        FirmwareLabel->setObjectName(QString::fromUtf8("FirmwareLabel"));
        FirmwareLabel->setGeometry(QRect(10, 30, 371, 31));
        sizePolicy2.setHeightForWidth(FirmwareLabel->sizePolicy().hasHeightForWidth());
        FirmwareLabel->setSizePolicy(sizePolicy2);
        FirmwareLabel->setFont(font1);
        FirmwareLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        FirmwareLabel->setFrameShape(QFrame::Box);
        FirmwareLabel->setFrameShadow(QFrame::Plain);
        FirmwareLabel->setLineWidth(1);
        FirmwareLabel->setAlignment(Qt::AlignCenter);
        groupBox_15 = new QGroupBox(STATE);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(210, 40, 191, 71));
        sizePolicy3.setHeightForWidth(groupBox_15->sizePolicy().hasHeightForWidth());
        groupBox_15->setSizePolicy(sizePolicy3);
        groupBox_15->setFont(font1);
        groupBox_15->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Cascadia Mono\";"));
        groupBox_15->setAlignment(Qt::AlignCenter);
        EstadoBotonLabel = new QLabel(groupBox_15);
        EstadoBotonLabel->setObjectName(QString::fromUtf8("EstadoBotonLabel"));
        EstadoBotonLabel->setGeometry(QRect(10, 30, 171, 31));
        sizePolicy2.setHeightForWidth(EstadoBotonLabel->sizePolicy().hasHeightForWidth());
        EstadoBotonLabel->setSizePolicy(sizePolicy2);
        EstadoBotonLabel->setFont(font1);
        EstadoBotonLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        EstadoBotonLabel->setFrameShape(QFrame::Box);
        EstadoBotonLabel->setFrameShadow(QFrame::Plain);
        EstadoBotonLabel->setLineWidth(1);
        EstadoBotonLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(Data);
        Home_Button = new QPushButton(centralwidget);
        Home_Button->setObjectName(QString::fromUtf8("Home_Button"));
        Home_Button->setGeometry(QRect(20, 20, 151, 61));
        Home_Button->setStyleSheet(QString::fromUtf8("QPushButton:checked {\n"
"	background-color: rgb(0, 0, 150);\n"
"	font: 14pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"QPushButton{\n"
"    background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:0.99, y2:1, stop:0 	rgba(76, 76, 119, 255), stop:1 rgba(5, 0, 50, 255));\n"
"	font: 14pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-color: rgb(0, 0, 255);\n"
"}"));
        Home_Button->setCheckable(true);
        Home_Button->setChecked(true);
        Comm_Button = new QPushButton(centralwidget);
        Comm_Button->setObjectName(QString::fromUtf8("Comm_Button"));
        Comm_Button->setGeometry(QRect(190, 20, 151, 61));
        Comm_Button->setStyleSheet(QString::fromUtf8("QPushButton:checked {\n"
"	background-color: rgb(0, 0, 150);\n"
"	font: 14pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"QPushButton{\n"
"    background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:0.99, y2:1, stop:0 	rgba(76, 76, 119, 255), stop:1 rgba(5, 0, 50, 255));\n"
"	font: 14pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-color: rgb(0, 0, 255);\n"
"}"));
        Comm_Button->setCheckable(true);
        Comm_Button->setChecked(false);
        Data_Button = new QPushButton(centralwidget);
        Data_Button->setObjectName(QString::fromUtf8("Data_Button"));
        Data_Button->setGeometry(QRect(360, 20, 151, 61));
        Data_Button->setStyleSheet(QString::fromUtf8("QPushButton:checked {\n"
"	background-color: rgb(0, 0, 150);\n"
"	font: 14pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"QPushButton{\n"
"    background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:0.99, y2:1, stop:0 	rgba(76, 76, 119, 255), stop:1 rgba(5, 0, 50, 255));\n"
"	font: 14pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-color: rgb(0, 0, 255);\n"
"}"));
        Data_Button->setCheckable(true);
        Data_Button->setChecked(false);
        GPS_Button = new QPushButton(centralwidget);
        GPS_Button->setObjectName(QString::fromUtf8("GPS_Button"));
        GPS_Button->setGeometry(QRect(530, 20, 151, 61));
        GPS_Button->setStyleSheet(QString::fromUtf8("QPushButton:checked {\n"
"	background-color: rgb(0, 0, 150);\n"
"	font: 14pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-color: rgb(0, 0, 255);\n"
"}\n"
"\n"
"QPushButton{\n"
"    background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:0.99, y2:1, stop:0 	rgba(76, 76, 119, 255), stop:1 rgba(5, 0, 50, 255));\n"
"	font: 14pt \"Cascadia Mono\";\n"
"	color: rgb(255, 255, 255);\n"
"	border-color: rgb(0, 0, 255);\n"
"}"));
        GPS_Button->setCheckable(true);
        GPS_Button->setChecked(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 26));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0, 0, 0.99, 1);
        gradient.setSpread(QGradient::RepeatSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(237, 240, 255, 255));
        gradient.setColorAt(1, QColor(111, 106, 255, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(127, 127, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(170, 170, 170, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0, 0, 0.99, 1);
        gradient1.setSpread(QGradient::RepeatSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(237, 240, 255, 255));
        gradient1.setColorAt(1, QColor(111, 106, 255, 255));
        QBrush brush5(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush5);
        QLinearGradient gradient2(0, 0, 0.99, 1);
        gradient2.setSpread(QGradient::RepeatSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(237, 240, 255, 255));
        gradient2.setColorAt(1, QColor(111, 106, 255, 255));
        QBrush brush6(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0, 0, 0.99, 1);
        gradient3.setSpread(QGradient::RepeatSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(237, 240, 255, 255));
        gradient3.setColorAt(1, QColor(111, 106, 255, 255));
        QBrush brush9(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0, 0, 0.99, 1);
        gradient4.setSpread(QGradient::RepeatSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(237, 240, 255, 255));
        gradient4.setColorAt(1, QColor(111, 106, 255, 255));
        QBrush brush10(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        QLinearGradient gradient5(0, 0, 0.99, 1);
        gradient5.setSpread(QGradient::RepeatSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(237, 240, 255, 255));
        gradient5.setColorAt(1, QColor(111, 106, 255, 255));
        QBrush brush11(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        QLinearGradient gradient6(0, 0, 0.99, 1);
        gradient6.setSpread(QGradient::RepeatSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(237, 240, 255, 255));
        gradient6.setColorAt(1, QColor(111, 106, 255, 255));
        QBrush brush12(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        QLinearGradient gradient7(0, 0, 0.99, 1);
        gradient7.setSpread(QGradient::RepeatSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(237, 240, 255, 255));
        gradient7.setColorAt(1, QColor(111, 106, 255, 255));
        QBrush brush13(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        QLinearGradient gradient8(0, 0, 0.99, 1);
        gradient8.setSpread(QGradient::RepeatSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(237, 240, 255, 255));
        gradient8.setColorAt(1, QColor(111, 106, 255, 255));
        QBrush brush14(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush15(QColor(127, 127, 127, 127));
        brush15.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        menubar->setPalette(palette);
        menubar->setDefaultUp(false);
        menuConfiguraciones = new QMenu(menubar);
        menuConfiguraciones->setObjectName(QString::fromUtf8("menuConfiguraciones"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuConfiguraciones->menuAction());
        menuConfiguraciones->addAction(actionConnect_Device);
        menuConfiguraciones->addAction(actionDisconnect);
        menuConfiguraciones->addAction(actionExit);

        retranslateUi(MainWindow);

        Home_Button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Microcontroladores 2024", nullptr));
        actionScanPorts->setText(QCoreApplication::translate("MainWindow", "Scan Ports", nullptr));
        actionConnect_Device->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        COMMUNICATIONS->setTitle(QCoreApplication::translate("MainWindow", "WIFI: COMMUNICATION SETTINGS", nullptr));
        UDPSERVER->setTitle(QCoreApplication::translate("MainWindow", "UDP SERVER", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "LOCAL PORT", nullptr));
        pushButtonUdpOpen->setText(QCoreApplication::translate("MainWindow", "OPEN", nullptr));
        UDPCLIENT->setTitle(QCoreApplication::translate("MainWindow", "UDP CLIENT", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "IP ADRESS", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "REMOTE PORT", nullptr));
        DATAFLOW->setTitle(QCoreApplication::translate("MainWindow", "DATA FLOW", nullptr));
        groupBox_18->setTitle(QString());
        clearButton->setText(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "SERIAL: COMMUNICATION SETTINGS", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "SERIAL PORT", nullptr));
        Open_SERIAL->setText(QCoreApplication::translate("MainWindow", "OPEN", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "CAR COMMUNICATION", nullptr));
#if QT_CONFIG(accessibility)
        COMMAND->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        COMMAND->setTitle(QCoreApplication::translate("MainWindow", "COMMAND WINDOW", nullptr));
        pushButtonSend->setText(QCoreApplication::translate("MainWindow", "SEND VIA UART", nullptr));
        pushButtonSend_2->setText(QCoreApplication::translate("MainWindow", "SEND VIA UDP", nullptr));
        CARSENSORS->setTitle(QCoreApplication::translate("MainWindow", "DISTANCE REFERENCES", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "MOTORES", nullptr));
        LEFTMOTOR->setTitle(QString());
        LM_Label->setText(QCoreApplication::translate("MainWindow", "LEFT MOTOR POWER", nullptr));
        LMPOW_NEG->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        LMPOW_POS->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        RIGHTMOTOR->setTitle(QString());
        RM_Label->setText(QCoreApplication::translate("MainWindow", "RIGHT MOTOR POWER", nullptr));
        RMPOW_NEG->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        RMPOW_POS->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        MPU6050->setTitle(QCoreApplication::translate("MainWindow", "MPU6050 DATA", nullptr));
        ACCELERATION->setTitle(QString());
        AXLabel->setText(QCoreApplication::translate("MainWindow", "ACC (X)", nullptr));
        AYLabel->setText(QCoreApplication::translate("MainWindow", "ACC (Y)", nullptr));
        AZLabel->setText(QCoreApplication::translate("MainWindow", "ACC (Z)", nullptr));
        AZ_Data->setText(QString());
        GYRO->setTitle(QString());
        GXLabel->setText(QCoreApplication::translate("MainWindow", "GYR (X)", nullptr));
        GYLabel->setText(QCoreApplication::translate("MainWindow", "GYR (Y)", nullptr));
        GZLabel->setText(QCoreApplication::translate("MainWindow", "GYR (Z)", nullptr));
        GZ_Data->setText(QString());
        RPY->setTitle(QString());
        ROLLLabel->setText(QCoreApplication::translate("MainWindow", "ROLL", nullptr));
        PITCHLabel->setText(QCoreApplication::translate("MainWindow", "PITCH", nullptr));
        YAWData->setText(QCoreApplication::translate("MainWindow", "YAW", nullptr));
        Yaw_Data->setText(QString());
        VELOCITY->setTitle(QString());
        VYLabel->setText(QCoreApplication::translate("MainWindow", "VEL (Y)", nullptr));
        VZLabel->setText(QCoreApplication::translate("MainWindow", "VEL (Z)", nullptr));
        VXLabel->setText(QCoreApplication::translate("MainWindow", "VEL (X)", nullptr));
        VZ_Data->setText(QString());
        POSITION->setTitle(QString());
        PYLabel->setText(QCoreApplication::translate("MainWindow", "POS (Y)", nullptr));
        PZLabel->setText(QCoreApplication::translate("MainWindow", "POS (Z)", nullptr));
        PXLabel->setText(QCoreApplication::translate("MainWindow", "POS (X)", nullptr));
        PZ_Data->setText(QString());
        STATE->setTitle(QCoreApplication::translate("MainWindow", "STATE INFO", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("MainWindow", "ALIVE", nullptr));
        AliveLabel->setText(QCoreApplication::translate("MainWindow", "NO", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("MainWindow", "FIRMWARE", nullptr));
        FirmwareLabel->setText(QCoreApplication::translate("MainWindow", "UNKNOWN", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("MainWindow", "BUTTON", nullptr));
        EstadoBotonLabel->setText(QCoreApplication::translate("MainWindow", "UP", nullptr));
        Home_Button->setText(QCoreApplication::translate("MainWindow", "HOME", nullptr));
        Comm_Button->setText(QCoreApplication::translate("MainWindow", "COMM", nullptr));
        Data_Button->setText(QCoreApplication::translate("MainWindow", "DATA", nullptr));
        GPS_Button->setText(QCoreApplication::translate("MainWindow", "GPS", nullptr));
        menuConfiguraciones->setTitle(QCoreApplication::translate("MainWindow", "SERIAL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
