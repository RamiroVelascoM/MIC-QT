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
    QGroupBox *DATAFLOW;
    QTextBrowser *textBrowser;
    QWidget *positionRadar;
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
    QGroupBox *COMMAND;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonSend;
    QPushButton *pushButtonSend_2;
    QComboBox *comboBoxCom;
    QGroupBox *CARSENSORS;
    QGroupBox *ANALOG;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *irLabel_4;
    QLabel *irLabel_3;
    QLabel *irLabel_2;
    QLabel *irLabel_6;
    QLineEdit *ir_0;
    QLineEdit *ir_1;
    QLineEdit *ir_2;
    QLineEdit *ir_3;
    QLabel *irLabel_5;
    QLabel *irLabel_7;
    QLabel *irLabel_9;
    QLabel *irLabel_8;
    QLineEdit *ir_4;
    QLineEdit *ir_5;
    QLineEdit *ir_6;
    QLineEdit *ir_7;
    QGroupBox *STATE;
    QGroupBox *groupBox_17;
    QLabel *AliveLabel;
    QGroupBox *groupBox_16;
    QLabel *FirmwareLabel;
    QGroupBox *groupBox_18;
    QPushButton *clearButton;
    QGroupBox *groupBox_15;
    QLabel *EstadoBotonLabel;
    QGroupBox *MPU6050;
    QGroupBox *ACCELERATION;
    QLabel *AYLabel;
    QLabel *AXLabel;
    QLabel *AZLabel;
    QLineEdit *AY_Data;
    QLineEdit *AZ_Data;
    QLineEdit *AX_Data;
    QGroupBox *VELOCITY;
    QLabel *VYLabel;
    QLabel *VXLabel;
    QLabel *VZLabel;
    QLineEdit *VY_Data;
    QLineEdit *VZ_Data;
    QLineEdit *VX_Data;
    QGroupBox *POSITION;
    QLabel *PYLabel;
    QLabel *PXLabel;
    QLabel *PZLabel;
    QLineEdit *PY_Data;
    QLineEdit *PZ_Data;
    QLineEdit *PX_Data;
    QGroupBox *YPR;
    QLabel *PitchLabel;
    QLabel *RollLabel;
    QLabel *YawLabel;
    QLineEdit *Pitch_Data;
    QLineEdit *Yaw_Data;
    QLineEdit *Roll_Data;
    QGroupBox *groupBox;
    QWidget *widget1;
    QGridLayout *gridLayout_4;
    QLabel *LM_Label;
    QProgressBar *LMPOW_NEG;
    QProgressBar *LMPOW_POS;
    QLabel *RM_Label;
    QProgressBar *RMPOW_NEG;
    QProgressBar *RMPOW_POS;
    QMenuBar *menubar;
    QMenu *menuConfiguraciones;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1300, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1299, 800));
        MainWindow->setMaximumSize(QSize(1300, 800));
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
        DATAFLOW = new QGroupBox(centralwidget);
        DATAFLOW->setObjectName(QString::fromUtf8("DATAFLOW"));
        DATAFLOW->setGeometry(QRect(440, 10, 401, 731));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rubik")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        DATAFLOW->setFont(font1);
        DATAFLOW->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 700 12pt \"Rubik\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        DATAFLOW->setAlignment(Qt::AlignCenter);
        DATAFLOW->setCheckable(false);
        textBrowser = new QTextBrowser(DATAFLOW);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 30, 381, 321));
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
        positionRadar = new QWidget(DATAFLOW);
        positionRadar->setObjectName(QString::fromUtf8("positionRadar"));
        positionRadar->setGeometry(QRect(10, 360, 381, 361));
        positionRadar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 100);"));
        COMMUNICATIONS = new QGroupBox(centralwidget);
        COMMUNICATIONS->setObjectName(QString::fromUtf8("COMMUNICATIONS"));
        COMMUNICATIONS->setGeometry(QRect(20, 10, 371, 361));
        sizePolicy.setHeightForWidth(COMMUNICATIONS->sizePolicy().hasHeightForWidth());
        COMMUNICATIONS->setSizePolicy(sizePolicy);
        COMMUNICATIONS->setFont(font1);
        COMMUNICATIONS->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 700 12pt \"Rubik\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        COMMUNICATIONS->setAlignment(Qt::AlignCenter);
        COMMUNICATIONS->setFlat(false);
        COMMUNICATIONS->setCheckable(false);
        UDPSERVER = new QGroupBox(COMMUNICATIONS);
        UDPSERVER->setObjectName(QString::fromUtf8("UDPSERVER"));
        UDPSERVER->setGeometry(QRect(10, 30, 351, 81));
        UDPSERVER->setFont(font1);
        UDPSERVER->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Rubik\";"));
        UDPSERVER->setAlignment(Qt::AlignCenter);
        UDPSERVER->setFlat(false);
        horizontalLayoutWidget = new QWidget(UDPSERVER);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 331, 41));
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
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));

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
"color: rgb(255, 255, 255);\n"
"font:  12pt \"Rubik\";"));
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
        UDPCLIENT->setGeometry(QRect(10, 120, 351, 111));
        UDPCLIENT->setFont(font1);
        UDPCLIENT->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Rubik\";"));
        UDPCLIENT->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(UDPCLIENT);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 331, 81));
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
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
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
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        lineEditPort->setReadOnly(true);

        gridLayout->addWidget(lineEditPort, 1, 1, 1, 1);

        COMMAND = new QGroupBox(COMMUNICATIONS);
        COMMAND->setObjectName(QString::fromUtf8("COMMAND"));
        COMMAND->setGeometry(QRect(10, 240, 351, 111));
        COMMAND->setFont(font1);
        COMMAND->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        COMMAND->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_2 = new QWidget(COMMAND);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 331, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonSend = new QPushButton(gridLayoutWidget_2);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonSend->sizePolicy().hasHeightForWidth());
        pushButtonSend->setSizePolicy(sizePolicy3);
        pushButtonSend->setFont(font1);
        pushButtonSend->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));

        gridLayout_2->addWidget(pushButtonSend, 1, 0, 1, 1);

        pushButtonSend_2 = new QPushButton(gridLayoutWidget_2);
        pushButtonSend_2->setObjectName(QString::fromUtf8("pushButtonSend_2"));
        sizePolicy3.setHeightForWidth(pushButtonSend_2->sizePolicy().hasHeightForWidth());
        pushButtonSend_2->setSizePolicy(sizePolicy3);
        pushButtonSend_2->setFont(font1);
        pushButtonSend_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));

        gridLayout_2->addWidget(pushButtonSend_2, 1, 1, 1, 1);

        comboBoxCom = new QComboBox(gridLayoutWidget_2);
        comboBoxCom->setObjectName(QString::fromUtf8("comboBoxCom"));
        sizePolicy1.setHeightForWidth(comboBoxCom->sizePolicy().hasHeightForWidth());
        comboBoxCom->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rubik")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        comboBoxCom->setFont(font2);
        comboBoxCom->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));

        gridLayout_2->addWidget(comboBoxCom, 0, 0, 1, 2);

        CARSENSORS = new QGroupBox(centralwidget);
        CARSENSORS->setObjectName(QString::fromUtf8("CARSENSORS"));
        CARSENSORS->setGeometry(QRect(850, 10, 431, 211));
        CARSENSORS->setFont(font1);
        CARSENSORS->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 700 12pt \"Rubik\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        CARSENSORS->setAlignment(Qt::AlignCenter);
        CARSENSORS->setFlat(false);
        ANALOG = new QGroupBox(CARSENSORS);
        ANALOG->setObjectName(QString::fromUtf8("ANALOG"));
        ANALOG->setGeometry(QRect(10, 30, 411, 171));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ANALOG->sizePolicy().hasHeightForWidth());
        ANALOG->setSizePolicy(sizePolicy4);
        ANALOG->setFont(font1);
        ANALOG->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        ANALOG->setAlignment(Qt::AlignCenter);
        widget = new QWidget(ANALOG);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 391, 131));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        irLabel_4 = new QLabel(widget);
        irLabel_4->setObjectName(QString::fromUtf8("irLabel_4"));
        sizePolicy1.setHeightForWidth(irLabel_4->sizePolicy().hasHeightForWidth());
        irLabel_4->setSizePolicy(sizePolicy1);
        irLabel_4->setFont(font1);
        irLabel_4->setLayoutDirection(Qt::LeftToRight);
        irLabel_4->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_4->setFrameShape(QFrame::Box);
        irLabel_4->setFrameShadow(QFrame::Plain);
        irLabel_4->setLineWidth(1);
        irLabel_4->setTextFormat(Qt::AutoText);
        irLabel_4->setAlignment(Qt::AlignCenter);
        irLabel_4->setWordWrap(false);

        gridLayout_3->addWidget(irLabel_4, 0, 0, 1, 1);

        irLabel_3 = new QLabel(widget);
        irLabel_3->setObjectName(QString::fromUtf8("irLabel_3"));
        sizePolicy1.setHeightForWidth(irLabel_3->sizePolicy().hasHeightForWidth());
        irLabel_3->setSizePolicy(sizePolicy1);
        irLabel_3->setFont(font1);
        irLabel_3->setLayoutDirection(Qt::LeftToRight);
        irLabel_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_3->setFrameShape(QFrame::Box);
        irLabel_3->setLineWidth(1);
        irLabel_3->setTextFormat(Qt::AutoText);
        irLabel_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(irLabel_3, 0, 1, 1, 1);

        irLabel_2 = new QLabel(widget);
        irLabel_2->setObjectName(QString::fromUtf8("irLabel_2"));
        sizePolicy1.setHeightForWidth(irLabel_2->sizePolicy().hasHeightForWidth());
        irLabel_2->setSizePolicy(sizePolicy1);
        irLabel_2->setFont(font1);
        irLabel_2->setLayoutDirection(Qt::LeftToRight);
        irLabel_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_2->setFrameShape(QFrame::Box);
        irLabel_2->setLineWidth(1);
        irLabel_2->setTextFormat(Qt::AutoText);
        irLabel_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(irLabel_2, 0, 2, 1, 1);

        irLabel_6 = new QLabel(widget);
        irLabel_6->setObjectName(QString::fromUtf8("irLabel_6"));
        sizePolicy1.setHeightForWidth(irLabel_6->sizePolicy().hasHeightForWidth());
        irLabel_6->setSizePolicy(sizePolicy1);
        irLabel_6->setFont(font1);
        irLabel_6->setLayoutDirection(Qt::LeftToRight);
        irLabel_6->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_6->setFrameShape(QFrame::Box);
        irLabel_6->setFrameShadow(QFrame::Plain);
        irLabel_6->setLineWidth(1);
        irLabel_6->setTextFormat(Qt::AutoText);
        irLabel_6->setAlignment(Qt::AlignCenter);
        irLabel_6->setWordWrap(false);

        gridLayout_3->addWidget(irLabel_6, 0, 3, 1, 1);

        ir_0 = new QLineEdit(widget);
        ir_0->setObjectName(QString::fromUtf8("ir_0"));
        sizePolicy2.setHeightForWidth(ir_0->sizePolicy().hasHeightForWidth());
        ir_0->setSizePolicy(sizePolicy2);
        ir_0->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_0->setAlignment(Qt::AlignCenter);
        ir_0->setReadOnly(true);

        gridLayout_3->addWidget(ir_0, 1, 0, 1, 1);

        ir_1 = new QLineEdit(widget);
        ir_1->setObjectName(QString::fromUtf8("ir_1"));
        sizePolicy2.setHeightForWidth(ir_1->sizePolicy().hasHeightForWidth());
        ir_1->setSizePolicy(sizePolicy2);
        ir_1->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_1->setAlignment(Qt::AlignCenter);
        ir_1->setReadOnly(true);

        gridLayout_3->addWidget(ir_1, 1, 1, 1, 1);

        ir_2 = new QLineEdit(widget);
        ir_2->setObjectName(QString::fromUtf8("ir_2"));
        sizePolicy2.setHeightForWidth(ir_2->sizePolicy().hasHeightForWidth());
        ir_2->setSizePolicy(sizePolicy2);
        ir_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_2->setAlignment(Qt::AlignCenter);
        ir_2->setReadOnly(true);

        gridLayout_3->addWidget(ir_2, 1, 2, 1, 1);

        ir_3 = new QLineEdit(widget);
        ir_3->setObjectName(QString::fromUtf8("ir_3"));
        sizePolicy2.setHeightForWidth(ir_3->sizePolicy().hasHeightForWidth());
        ir_3->setSizePolicy(sizePolicy2);
        ir_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_3->setAlignment(Qt::AlignCenter);
        ir_3->setReadOnly(true);

        gridLayout_3->addWidget(ir_3, 1, 3, 1, 1);

        irLabel_5 = new QLabel(widget);
        irLabel_5->setObjectName(QString::fromUtf8("irLabel_5"));
        sizePolicy1.setHeightForWidth(irLabel_5->sizePolicy().hasHeightForWidth());
        irLabel_5->setSizePolicy(sizePolicy1);
        irLabel_5->setFont(font1);
        irLabel_5->setLayoutDirection(Qt::LeftToRight);
        irLabel_5->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_5->setFrameShape(QFrame::Box);
        irLabel_5->setLineWidth(1);
        irLabel_5->setTextFormat(Qt::AutoText);
        irLabel_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(irLabel_5, 2, 0, 1, 1);

        irLabel_7 = new QLabel(widget);
        irLabel_7->setObjectName(QString::fromUtf8("irLabel_7"));
        sizePolicy1.setHeightForWidth(irLabel_7->sizePolicy().hasHeightForWidth());
        irLabel_7->setSizePolicy(sizePolicy1);
        irLabel_7->setFont(font1);
        irLabel_7->setLayoutDirection(Qt::LeftToRight);
        irLabel_7->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_7->setFrameShape(QFrame::Box);
        irLabel_7->setLineWidth(1);
        irLabel_7->setTextFormat(Qt::AutoText);
        irLabel_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(irLabel_7, 2, 1, 1, 1);

        irLabel_9 = new QLabel(widget);
        irLabel_9->setObjectName(QString::fromUtf8("irLabel_9"));
        sizePolicy1.setHeightForWidth(irLabel_9->sizePolicy().hasHeightForWidth());
        irLabel_9->setSizePolicy(sizePolicy1);
        irLabel_9->setFont(font1);
        irLabel_9->setLayoutDirection(Qt::LeftToRight);
        irLabel_9->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_9->setFrameShape(QFrame::Box);
        irLabel_9->setFrameShadow(QFrame::Plain);
        irLabel_9->setLineWidth(1);
        irLabel_9->setTextFormat(Qt::AutoText);
        irLabel_9->setAlignment(Qt::AlignCenter);
        irLabel_9->setWordWrap(false);

        gridLayout_3->addWidget(irLabel_9, 2, 2, 1, 1);

        irLabel_8 = new QLabel(widget);
        irLabel_8->setObjectName(QString::fromUtf8("irLabel_8"));
        sizePolicy1.setHeightForWidth(irLabel_8->sizePolicy().hasHeightForWidth());
        irLabel_8->setSizePolicy(sizePolicy1);
        irLabel_8->setFont(font1);
        irLabel_8->setLayoutDirection(Qt::LeftToRight);
        irLabel_8->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_8->setFrameShape(QFrame::Box);
        irLabel_8->setLineWidth(1);
        irLabel_8->setTextFormat(Qt::AutoText);
        irLabel_8->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(irLabel_8, 2, 3, 1, 1);

        ir_4 = new QLineEdit(widget);
        ir_4->setObjectName(QString::fromUtf8("ir_4"));
        sizePolicy2.setHeightForWidth(ir_4->sizePolicy().hasHeightForWidth());
        ir_4->setSizePolicy(sizePolicy2);
        ir_4->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_4->setAlignment(Qt::AlignCenter);
        ir_4->setReadOnly(true);

        gridLayout_3->addWidget(ir_4, 3, 0, 1, 1);

        ir_5 = new QLineEdit(widget);
        ir_5->setObjectName(QString::fromUtf8("ir_5"));
        sizePolicy2.setHeightForWidth(ir_5->sizePolicy().hasHeightForWidth());
        ir_5->setSizePolicy(sizePolicy2);
        ir_5->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_5->setAlignment(Qt::AlignCenter);
        ir_5->setReadOnly(true);

        gridLayout_3->addWidget(ir_5, 3, 1, 1, 1);

        ir_6 = new QLineEdit(widget);
        ir_6->setObjectName(QString::fromUtf8("ir_6"));
        sizePolicy2.setHeightForWidth(ir_6->sizePolicy().hasHeightForWidth());
        ir_6->setSizePolicy(sizePolicy2);
        ir_6->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_6->setAlignment(Qt::AlignCenter);
        ir_6->setReadOnly(true);

        gridLayout_3->addWidget(ir_6, 3, 2, 1, 1);

        ir_7 = new QLineEdit(widget);
        ir_7->setObjectName(QString::fromUtf8("ir_7"));
        sizePolicy2.setHeightForWidth(ir_7->sizePolicy().hasHeightForWidth());
        ir_7->setSizePolicy(sizePolicy2);
        ir_7->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_7->setAlignment(Qt::AlignCenter);
        ir_7->setReadOnly(true);

        gridLayout_3->addWidget(ir_7, 3, 3, 1, 1);

        STATE = new QGroupBox(centralwidget);
        STATE->setObjectName(QString::fromUtf8("STATE"));
        STATE->setGeometry(QRect(850, 230, 431, 141));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(STATE->sizePolicy().hasHeightForWidth());
        STATE->setSizePolicy(sizePolicy5);
        STATE->setFont(font1);
        STATE->setLayoutDirection(Qt::LeftToRight);
        STATE->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 700 12pt \"Rubik\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        STATE->setAlignment(Qt::AlignCenter);
        groupBox_17 = new QGroupBox(STATE);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setGeometry(QRect(100, 30, 101, 101));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBox_17->sizePolicy().hasHeightForWidth());
        groupBox_17->setSizePolicy(sizePolicy6);
        groupBox_17->setFont(font1);
        groupBox_17->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        groupBox_17->setAlignment(Qt::AlignCenter);
        groupBox_17->setFlat(false);
        groupBox_17->setCheckable(false);
        AliveLabel = new QLabel(groupBox_17);
        AliveLabel->setObjectName(QString::fromUtf8("AliveLabel"));
        AliveLabel->setGeometry(QRect(10, 30, 81, 61));
        sizePolicy1.setHeightForWidth(AliveLabel->sizePolicy().hasHeightForWidth());
        AliveLabel->setSizePolicy(sizePolicy1);
        AliveLabel->setFont(font2);
        AliveLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: red;\n"
"color: white;\n"
"font: 12pt \"Rubik\";"));
        AliveLabel->setFrameShape(QFrame::Box);
        AliveLabel->setFrameShadow(QFrame::Plain);
        AliveLabel->setLineWidth(1);
        AliveLabel->setAlignment(Qt::AlignCenter);
        groupBox_16 = new QGroupBox(STATE);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setGeometry(QRect(300, 30, 121, 101));
        sizePolicy6.setHeightForWidth(groupBox_16->sizePolicy().hasHeightForWidth());
        groupBox_16->setSizePolicy(sizePolicy6);
        groupBox_16->setFont(font1);
        groupBox_16->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        groupBox_16->setAlignment(Qt::AlignCenter);
        FirmwareLabel = new QLabel(groupBox_16);
        FirmwareLabel->setObjectName(QString::fromUtf8("FirmwareLabel"));
        FirmwareLabel->setGeometry(QRect(10, 30, 101, 61));
        sizePolicy1.setHeightForWidth(FirmwareLabel->sizePolicy().hasHeightForWidth());
        FirmwareLabel->setSizePolicy(sizePolicy1);
        FirmwareLabel->setFont(font2);
        FirmwareLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        FirmwareLabel->setFrameShape(QFrame::Box);
        FirmwareLabel->setFrameShadow(QFrame::Plain);
        FirmwareLabel->setLineWidth(1);
        FirmwareLabel->setAlignment(Qt::AlignCenter);
        groupBox_18 = new QGroupBox(STATE);
        groupBox_18->setObjectName(QString::fromUtf8("groupBox_18"));
        groupBox_18->setGeometry(QRect(10, 30, 91, 101));
        sizePolicy6.setHeightForWidth(groupBox_18->sizePolicy().hasHeightForWidth());
        groupBox_18->setSizePolicy(sizePolicy6);
        groupBox_18->setFont(font1);
        groupBox_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        groupBox_18->setAlignment(Qt::AlignCenter);
        groupBox_18->setFlat(false);
        groupBox_18->setCheckable(false);
        clearButton = new QPushButton(groupBox_18);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(10, 30, 71, 61));
        clearButton->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));
        groupBox_15 = new QGroupBox(STATE);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(200, 30, 101, 101));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(groupBox_15->sizePolicy().hasHeightForWidth());
        groupBox_15->setSizePolicy(sizePolicy7);
        groupBox_15->setFont(font1);
        groupBox_15->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        groupBox_15->setAlignment(Qt::AlignCenter);
        EstadoBotonLabel = new QLabel(groupBox_15);
        EstadoBotonLabel->setObjectName(QString::fromUtf8("EstadoBotonLabel"));
        EstadoBotonLabel->setGeometry(QRect(10, 30, 81, 61));
        sizePolicy1.setHeightForWidth(EstadoBotonLabel->sizePolicy().hasHeightForWidth());
        EstadoBotonLabel->setSizePolicy(sizePolicy1);
        EstadoBotonLabel->setFont(font2);
        EstadoBotonLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        EstadoBotonLabel->setFrameShape(QFrame::Box);
        EstadoBotonLabel->setFrameShadow(QFrame::Plain);
        EstadoBotonLabel->setLineWidth(1);
        EstadoBotonLabel->setAlignment(Qt::AlignCenter);
        MPU6050 = new QGroupBox(centralwidget);
        MPU6050->setObjectName(QString::fromUtf8("MPU6050"));
        MPU6050->setGeometry(QRect(850, 380, 431, 361));
        MPU6050->setFont(font1);
        MPU6050->setStyleSheet(QString::fromUtf8(" border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 700 12pt \"Rubik\";\n"
"	color: rgb(255, 255, 255);"));
        MPU6050->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        MPU6050->setFlat(false);
        ACCELERATION = new QGroupBox(MPU6050);
        ACCELERATION->setObjectName(QString::fromUtf8("ACCELERATION"));
        ACCELERATION->setGeometry(QRect(10, 30, 411, 80));
        ACCELERATION->setFont(font1);
        ACCELERATION->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        ACCELERATION->setAlignment(Qt::AlignCenter);
        AYLabel = new QLabel(ACCELERATION);
        AYLabel->setObjectName(QString::fromUtf8("AYLabel"));
        AYLabel->setGeometry(QRect(150, 10, 111, 20));
        sizePolicy1.setHeightForWidth(AYLabel->sizePolicy().hasHeightForWidth());
        AYLabel->setSizePolicy(sizePolicy1);
        AYLabel->setFont(font1);
        AYLabel->setLayoutDirection(Qt::LeftToRight);
        AYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        AYLabel->setFrameShape(QFrame::Box);
        AYLabel->setLineWidth(1);
        AYLabel->setTextFormat(Qt::AutoText);
        AYLabel->setAlignment(Qt::AlignCenter);
        AXLabel = new QLabel(ACCELERATION);
        AXLabel->setObjectName(QString::fromUtf8("AXLabel"));
        AXLabel->setGeometry(QRect(11, 10, 121, 20));
        sizePolicy1.setHeightForWidth(AXLabel->sizePolicy().hasHeightForWidth());
        AXLabel->setSizePolicy(sizePolicy1);
        AXLabel->setFont(font1);
        AXLabel->setLayoutDirection(Qt::LeftToRight);
        AXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        AXLabel->setFrameShape(QFrame::Box);
        AXLabel->setFrameShadow(QFrame::Plain);
        AXLabel->setLineWidth(1);
        AXLabel->setTextFormat(Qt::AutoText);
        AXLabel->setAlignment(Qt::AlignCenter);
        AXLabel->setWordWrap(false);
        AZLabel = new QLabel(ACCELERATION);
        AZLabel->setObjectName(QString::fromUtf8("AZLabel"));
        AZLabel->setGeometry(QRect(280, 10, 121, 20));
        sizePolicy1.setHeightForWidth(AZLabel->sizePolicy().hasHeightForWidth());
        AZLabel->setSizePolicy(sizePolicy1);
        AZLabel->setFont(font1);
        AZLabel->setLayoutDirection(Qt::LeftToRight);
        AZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        AZLabel->setFrameShape(QFrame::Box);
        AZLabel->setLineWidth(1);
        AZLabel->setTextFormat(Qt::AutoText);
        AZLabel->setAlignment(Qt::AlignCenter);
        AY_Data = new QLineEdit(ACCELERATION);
        AY_Data->setObjectName(QString::fromUtf8("AY_Data"));
        AY_Data->setGeometry(QRect(150, 35, 111, 35));
        sizePolicy2.setHeightForWidth(AY_Data->sizePolicy().hasHeightForWidth());
        AY_Data->setSizePolicy(sizePolicy2);
        AY_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        AY_Data->setAlignment(Qt::AlignCenter);
        AY_Data->setReadOnly(true);
        AZ_Data = new QLineEdit(ACCELERATION);
        AZ_Data->setObjectName(QString::fromUtf8("AZ_Data"));
        AZ_Data->setGeometry(QRect(280, 35, 121, 35));
        sizePolicy2.setHeightForWidth(AZ_Data->sizePolicy().hasHeightForWidth());
        AZ_Data->setSizePolicy(sizePolicy2);
        AZ_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        AZ_Data->setAlignment(Qt::AlignCenter);
        AZ_Data->setReadOnly(true);
        AX_Data = new QLineEdit(ACCELERATION);
        AX_Data->setObjectName(QString::fromUtf8("AX_Data"));
        AX_Data->setGeometry(QRect(10, 35, 121, 35));
        sizePolicy2.setHeightForWidth(AX_Data->sizePolicy().hasHeightForWidth());
        AX_Data->setSizePolicy(sizePolicy2);
        AX_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        AX_Data->setAlignment(Qt::AlignCenter);
        AX_Data->setReadOnly(true);
        VELOCITY = new QGroupBox(MPU6050);
        VELOCITY->setObjectName(QString::fromUtf8("VELOCITY"));
        VELOCITY->setGeometry(QRect(10, 110, 411, 80));
        VELOCITY->setFont(font1);
        VELOCITY->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        VELOCITY->setAlignment(Qt::AlignCenter);
        VYLabel = new QLabel(VELOCITY);
        VYLabel->setObjectName(QString::fromUtf8("VYLabel"));
        VYLabel->setGeometry(QRect(150, 10, 111, 20));
        sizePolicy1.setHeightForWidth(VYLabel->sizePolicy().hasHeightForWidth());
        VYLabel->setSizePolicy(sizePolicy1);
        VYLabel->setFont(font1);
        VYLabel->setLayoutDirection(Qt::LeftToRight);
        VYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        VYLabel->setFrameShape(QFrame::Box);
        VYLabel->setLineWidth(1);
        VYLabel->setTextFormat(Qt::AutoText);
        VYLabel->setAlignment(Qt::AlignCenter);
        VXLabel = new QLabel(VELOCITY);
        VXLabel->setObjectName(QString::fromUtf8("VXLabel"));
        VXLabel->setGeometry(QRect(11, 10, 121, 20));
        sizePolicy1.setHeightForWidth(VXLabel->sizePolicy().hasHeightForWidth());
        VXLabel->setSizePolicy(sizePolicy1);
        VXLabel->setFont(font1);
        VXLabel->setLayoutDirection(Qt::LeftToRight);
        VXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        VXLabel->setFrameShape(QFrame::Box);
        VXLabel->setFrameShadow(QFrame::Plain);
        VXLabel->setLineWidth(1);
        VXLabel->setTextFormat(Qt::AutoText);
        VXLabel->setAlignment(Qt::AlignCenter);
        VXLabel->setWordWrap(false);
        VZLabel = new QLabel(VELOCITY);
        VZLabel->setObjectName(QString::fromUtf8("VZLabel"));
        VZLabel->setGeometry(QRect(280, 10, 121, 20));
        sizePolicy1.setHeightForWidth(VZLabel->sizePolicy().hasHeightForWidth());
        VZLabel->setSizePolicy(sizePolicy1);
        VZLabel->setFont(font1);
        VZLabel->setLayoutDirection(Qt::LeftToRight);
        VZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        VZLabel->setFrameShape(QFrame::Box);
        VZLabel->setLineWidth(1);
        VZLabel->setTextFormat(Qt::AutoText);
        VZLabel->setAlignment(Qt::AlignCenter);
        VY_Data = new QLineEdit(VELOCITY);
        VY_Data->setObjectName(QString::fromUtf8("VY_Data"));
        VY_Data->setGeometry(QRect(150, 35, 111, 35));
        sizePolicy2.setHeightForWidth(VY_Data->sizePolicy().hasHeightForWidth());
        VY_Data->setSizePolicy(sizePolicy2);
        VY_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        VY_Data->setAlignment(Qt::AlignCenter);
        VY_Data->setReadOnly(true);
        VZ_Data = new QLineEdit(VELOCITY);
        VZ_Data->setObjectName(QString::fromUtf8("VZ_Data"));
        VZ_Data->setGeometry(QRect(280, 35, 121, 35));
        sizePolicy2.setHeightForWidth(VZ_Data->sizePolicy().hasHeightForWidth());
        VZ_Data->setSizePolicy(sizePolicy2);
        VZ_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        VZ_Data->setAlignment(Qt::AlignCenter);
        VZ_Data->setReadOnly(true);
        VX_Data = new QLineEdit(VELOCITY);
        VX_Data->setObjectName(QString::fromUtf8("VX_Data"));
        VX_Data->setGeometry(QRect(10, 35, 121, 35));
        sizePolicy2.setHeightForWidth(VX_Data->sizePolicy().hasHeightForWidth());
        VX_Data->setSizePolicy(sizePolicy2);
        VX_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        VX_Data->setAlignment(Qt::AlignCenter);
        VX_Data->setReadOnly(true);
        POSITION = new QGroupBox(MPU6050);
        POSITION->setObjectName(QString::fromUtf8("POSITION"));
        POSITION->setGeometry(QRect(10, 190, 411, 80));
        POSITION->setFont(font1);
        POSITION->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        POSITION->setAlignment(Qt::AlignCenter);
        PYLabel = new QLabel(POSITION);
        PYLabel->setObjectName(QString::fromUtf8("PYLabel"));
        PYLabel->setGeometry(QRect(150, 10, 111, 20));
        sizePolicy1.setHeightForWidth(PYLabel->sizePolicy().hasHeightForWidth());
        PYLabel->setSizePolicy(sizePolicy1);
        PYLabel->setFont(font1);
        PYLabel->setLayoutDirection(Qt::LeftToRight);
        PYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        PYLabel->setFrameShape(QFrame::Box);
        PYLabel->setLineWidth(1);
        PYLabel->setTextFormat(Qt::AutoText);
        PYLabel->setAlignment(Qt::AlignCenter);
        PXLabel = new QLabel(POSITION);
        PXLabel->setObjectName(QString::fromUtf8("PXLabel"));
        PXLabel->setGeometry(QRect(11, 10, 121, 20));
        sizePolicy1.setHeightForWidth(PXLabel->sizePolicy().hasHeightForWidth());
        PXLabel->setSizePolicy(sizePolicy1);
        PXLabel->setFont(font1);
        PXLabel->setLayoutDirection(Qt::LeftToRight);
        PXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        PXLabel->setFrameShape(QFrame::Box);
        PXLabel->setFrameShadow(QFrame::Plain);
        PXLabel->setLineWidth(1);
        PXLabel->setTextFormat(Qt::AutoText);
        PXLabel->setAlignment(Qt::AlignCenter);
        PXLabel->setWordWrap(false);
        PZLabel = new QLabel(POSITION);
        PZLabel->setObjectName(QString::fromUtf8("PZLabel"));
        PZLabel->setGeometry(QRect(280, 10, 121, 20));
        sizePolicy1.setHeightForWidth(PZLabel->sizePolicy().hasHeightForWidth());
        PZLabel->setSizePolicy(sizePolicy1);
        PZLabel->setFont(font1);
        PZLabel->setLayoutDirection(Qt::LeftToRight);
        PZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        PZLabel->setFrameShape(QFrame::Box);
        PZLabel->setLineWidth(1);
        PZLabel->setTextFormat(Qt::AutoText);
        PZLabel->setAlignment(Qt::AlignCenter);
        PY_Data = new QLineEdit(POSITION);
        PY_Data->setObjectName(QString::fromUtf8("PY_Data"));
        PY_Data->setGeometry(QRect(150, 35, 111, 35));
        sizePolicy2.setHeightForWidth(PY_Data->sizePolicy().hasHeightForWidth());
        PY_Data->setSizePolicy(sizePolicy2);
        PY_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        PY_Data->setAlignment(Qt::AlignCenter);
        PY_Data->setReadOnly(true);
        PZ_Data = new QLineEdit(POSITION);
        PZ_Data->setObjectName(QString::fromUtf8("PZ_Data"));
        PZ_Data->setGeometry(QRect(280, 35, 121, 35));
        sizePolicy2.setHeightForWidth(PZ_Data->sizePolicy().hasHeightForWidth());
        PZ_Data->setSizePolicy(sizePolicy2);
        PZ_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        PZ_Data->setAlignment(Qt::AlignCenter);
        PZ_Data->setReadOnly(true);
        PX_Data = new QLineEdit(POSITION);
        PX_Data->setObjectName(QString::fromUtf8("PX_Data"));
        PX_Data->setGeometry(QRect(10, 35, 121, 35));
        sizePolicy2.setHeightForWidth(PX_Data->sizePolicy().hasHeightForWidth());
        PX_Data->setSizePolicy(sizePolicy2);
        PX_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        PX_Data->setAlignment(Qt::AlignCenter);
        PX_Data->setReadOnly(true);
        YPR = new QGroupBox(MPU6050);
        YPR->setObjectName(QString::fromUtf8("YPR"));
        YPR->setGeometry(QRect(10, 270, 411, 80));
        YPR->setFont(font1);
        YPR->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        YPR->setAlignment(Qt::AlignCenter);
        PitchLabel = new QLabel(YPR);
        PitchLabel->setObjectName(QString::fromUtf8("PitchLabel"));
        PitchLabel->setGeometry(QRect(150, 10, 111, 20));
        sizePolicy1.setHeightForWidth(PitchLabel->sizePolicy().hasHeightForWidth());
        PitchLabel->setSizePolicy(sizePolicy1);
        PitchLabel->setFont(font1);
        PitchLabel->setLayoutDirection(Qt::LeftToRight);
        PitchLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        PitchLabel->setFrameShape(QFrame::Box);
        PitchLabel->setLineWidth(1);
        PitchLabel->setTextFormat(Qt::AutoText);
        PitchLabel->setAlignment(Qt::AlignCenter);
        RollLabel = new QLabel(YPR);
        RollLabel->setObjectName(QString::fromUtf8("RollLabel"));
        RollLabel->setGeometry(QRect(11, 10, 121, 20));
        sizePolicy1.setHeightForWidth(RollLabel->sizePolicy().hasHeightForWidth());
        RollLabel->setSizePolicy(sizePolicy1);
        RollLabel->setFont(font1);
        RollLabel->setLayoutDirection(Qt::LeftToRight);
        RollLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        RollLabel->setFrameShape(QFrame::Box);
        RollLabel->setFrameShadow(QFrame::Plain);
        RollLabel->setLineWidth(1);
        RollLabel->setTextFormat(Qt::AutoText);
        RollLabel->setAlignment(Qt::AlignCenter);
        RollLabel->setWordWrap(false);
        YawLabel = new QLabel(YPR);
        YawLabel->setObjectName(QString::fromUtf8("YawLabel"));
        YawLabel->setGeometry(QRect(280, 10, 121, 20));
        sizePolicy1.setHeightForWidth(YawLabel->sizePolicy().hasHeightForWidth());
        YawLabel->setSizePolicy(sizePolicy1);
        YawLabel->setFont(font1);
        YawLabel->setLayoutDirection(Qt::LeftToRight);
        YawLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        YawLabel->setFrameShape(QFrame::Box);
        YawLabel->setLineWidth(1);
        YawLabel->setTextFormat(Qt::AutoText);
        YawLabel->setAlignment(Qt::AlignCenter);
        Pitch_Data = new QLineEdit(YPR);
        Pitch_Data->setObjectName(QString::fromUtf8("Pitch_Data"));
        Pitch_Data->setGeometry(QRect(150, 35, 111, 35));
        sizePolicy2.setHeightForWidth(Pitch_Data->sizePolicy().hasHeightForWidth());
        Pitch_Data->setSizePolicy(sizePolicy2);
        Pitch_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        Pitch_Data->setAlignment(Qt::AlignCenter);
        Pitch_Data->setReadOnly(true);
        Yaw_Data = new QLineEdit(YPR);
        Yaw_Data->setObjectName(QString::fromUtf8("Yaw_Data"));
        Yaw_Data->setGeometry(QRect(280, 35, 121, 35));
        sizePolicy2.setHeightForWidth(Yaw_Data->sizePolicy().hasHeightForWidth());
        Yaw_Data->setSizePolicy(sizePolicy2);
        Yaw_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        Yaw_Data->setAlignment(Qt::AlignCenter);
        Yaw_Data->setReadOnly(true);
        Roll_Data = new QLineEdit(YPR);
        Roll_Data->setObjectName(QString::fromUtf8("Roll_Data"));
        Roll_Data->setGeometry(QRect(10, 35, 121, 35));
        sizePolicy2.setHeightForWidth(Roll_Data->sizePolicy().hasHeightForWidth());
        Roll_Data->setSizePolicy(sizePolicy2);
        Roll_Data->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        Roll_Data->setAlignment(Qt::AlignCenter);
        Roll_Data->setReadOnly(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 379, 391, 181));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 700 12pt \"Rubik\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        groupBox->setAlignment(Qt::AlignCenter);
        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 30, 371, 139));
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        LM_Label = new QLabel(widget1);
        LM_Label->setObjectName(QString::fromUtf8("LM_Label"));
        LM_Label->setEnabled(true);
        sizePolicy1.setHeightForWidth(LM_Label->sizePolicy().hasHeightForWidth());
        LM_Label->setSizePolicy(sizePolicy1);
        LM_Label->setFont(font1);
        LM_Label->setLayoutDirection(Qt::LeftToRight);
        LM_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Rubik\";\n"
"color: rgb(255, 255, 255);"));
        LM_Label->setFrameShape(QFrame::NoFrame);
        LM_Label->setFrameShadow(QFrame::Plain);
        LM_Label->setLineWidth(0);
        LM_Label->setTextFormat(Qt::AutoText);
        LM_Label->setAlignment(Qt::AlignCenter);
        LM_Label->setWordWrap(false);

        gridLayout_4->addWidget(LM_Label, 0, 0, 1, 2);

        LMPOW_NEG = new QProgressBar(widget1);
        LMPOW_NEG->setObjectName(QString::fromUtf8("LMPOW_NEG"));
        LMPOW_NEG->setLayoutDirection(Qt::RightToLeft);
        LMPOW_NEG->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 100);\n"
"font: 50 12pt \"Rubik\";\n"
"color: rgb(255, 255, 255);"));
        LMPOW_NEG->setMinimum(0);
        LMPOW_NEG->setValue(0);
        LMPOW_NEG->setTextVisible(true);
        LMPOW_NEG->setOrientation(Qt::Horizontal);
        LMPOW_NEG->setInvertedAppearance(false);
        LMPOW_NEG->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_4->addWidget(LMPOW_NEG, 1, 0, 1, 1);

        LMPOW_POS = new QProgressBar(widget1);
        LMPOW_POS->setObjectName(QString::fromUtf8("LMPOW_POS"));
        LMPOW_POS->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 100);\n"
"font: 50 12pt \"Rubik\";\n"
"color: rgb(255, 255, 255);"));
        LMPOW_POS->setMinimum(0);
        LMPOW_POS->setValue(0);
        LMPOW_POS->setTextVisible(true);
        LMPOW_POS->setOrientation(Qt::Horizontal);
        LMPOW_POS->setInvertedAppearance(false);
        LMPOW_POS->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_4->addWidget(LMPOW_POS, 1, 1, 1, 1);

        RM_Label = new QLabel(widget1);
        RM_Label->setObjectName(QString::fromUtf8("RM_Label"));
        sizePolicy1.setHeightForWidth(RM_Label->sizePolicy().hasHeightForWidth());
        RM_Label->setSizePolicy(sizePolicy1);
        RM_Label->setFont(font1);
        RM_Label->setLayoutDirection(Qt::LeftToRight);
        RM_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Rubik\";\n"
"color: rgb(255, 255, 255);"));
        RM_Label->setFrameShape(QFrame::NoFrame);
        RM_Label->setFrameShadow(QFrame::Plain);
        RM_Label->setLineWidth(0);
        RM_Label->setTextFormat(Qt::AutoText);
        RM_Label->setAlignment(Qt::AlignCenter);
        RM_Label->setWordWrap(false);

        gridLayout_4->addWidget(RM_Label, 2, 0, 1, 2);

        RMPOW_NEG = new QProgressBar(widget1);
        RMPOW_NEG->setObjectName(QString::fromUtf8("RMPOW_NEG"));
        RMPOW_NEG->setLayoutDirection(Qt::RightToLeft);
        RMPOW_NEG->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 100);\n"
"font: 50 12pt \"Rubik\";\n"
"color: rgb(255, 255, 255);"));
        RMPOW_NEG->setMinimum(0);
        RMPOW_NEG->setValue(0);
        RMPOW_NEG->setTextVisible(true);
        RMPOW_NEG->setOrientation(Qt::Horizontal);
        RMPOW_NEG->setInvertedAppearance(false);
        RMPOW_NEG->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_4->addWidget(RMPOW_NEG, 3, 0, 1, 1);

        RMPOW_POS = new QProgressBar(widget1);
        RMPOW_POS->setObjectName(QString::fromUtf8("RMPOW_POS"));
        RMPOW_POS->setEnabled(true);
        RMPOW_POS->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 100);\n"
"font: 50 12pt \"Rubik\";\n"
"color: rgb(255, 255, 255);"));
        RMPOW_POS->setMinimum(0);
        RMPOW_POS->setValue(0);
        RMPOW_POS->setTextVisible(true);
        RMPOW_POS->setOrientation(Qt::Horizontal);
        RMPOW_POS->setInvertedAppearance(false);
        RMPOW_POS->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_4->addWidget(RMPOW_POS, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 26));
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
        menuConfiguraciones->addAction(actionScanPorts);
        menuConfiguraciones->addAction(actionConnect_Device);
        menuConfiguraciones->addAction(actionDisconnect);
        menuConfiguraciones->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Microcontroladores 2024", nullptr));
        actionScanPorts->setText(QCoreApplication::translate("MainWindow", "Scan Ports", nullptr));
        actionConnect_Device->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        DATAFLOW->setTitle(QCoreApplication::translate("MainWindow", "DATA FLOW", nullptr));
        COMMUNICATIONS->setTitle(QCoreApplication::translate("MainWindow", "COMUNICATIONS SETTINGS", nullptr));
        UDPSERVER->setTitle(QCoreApplication::translate("MainWindow", "UDP SERVER", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "LOCAL PORT", nullptr));
        pushButtonUdpOpen->setText(QCoreApplication::translate("MainWindow", "OPEN", nullptr));
        UDPCLIENT->setTitle(QCoreApplication::translate("MainWindow", "UDP CLIENT", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "IP ADRESS", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "REMOTE PORT", nullptr));
#if QT_CONFIG(accessibility)
        COMMAND->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        COMMAND->setTitle(QCoreApplication::translate("MainWindow", "COMMAND WINDOW", nullptr));
        pushButtonSend->setText(QCoreApplication::translate("MainWindow", "SEND VIA UART", nullptr));
        pushButtonSend_2->setText(QCoreApplication::translate("MainWindow", "SEND VIA UDP", nullptr));
        CARSENSORS->setTitle(QCoreApplication::translate("MainWindow", "DISTANCE REFERENCES", nullptr));
        ANALOG->setTitle(QCoreApplication::translate("MainWindow", "VIA TCRT5000", nullptr));
        irLabel_4->setText(QCoreApplication::translate("MainWindow", "IR0", nullptr));
        irLabel_3->setText(QCoreApplication::translate("MainWindow", "IR1", nullptr));
        irLabel_2->setText(QCoreApplication::translate("MainWindow", "IR2", nullptr));
        irLabel_6->setText(QCoreApplication::translate("MainWindow", "IR3", nullptr));
        irLabel_5->setText(QCoreApplication::translate("MainWindow", "IR4", nullptr));
        irLabel_7->setText(QCoreApplication::translate("MainWindow", "IR5", nullptr));
        irLabel_9->setText(QCoreApplication::translate("MainWindow", "IR6", nullptr));
        irLabel_8->setText(QCoreApplication::translate("MainWindow", "IR7", nullptr));
        STATE->setTitle(QCoreApplication::translate("MainWindow", "STATE INFO", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("MainWindow", "ALIVE", nullptr));
        AliveLabel->setText(QCoreApplication::translate("MainWindow", "NO", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("MainWindow", "FIRMWARE", nullptr));
        FirmwareLabel->setText(QCoreApplication::translate("MainWindow", "UNKNOWN", nullptr));
        groupBox_18->setTitle(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("MainWindow", "BUTTON", nullptr));
        EstadoBotonLabel->setText(QCoreApplication::translate("MainWindow", "UP", nullptr));
        MPU6050->setTitle(QCoreApplication::translate("MainWindow", "MPU6050 DATA", nullptr));
        ACCELERATION->setTitle(QString());
        AYLabel->setText(QCoreApplication::translate("MainWindow", "ACC (Y)", nullptr));
        AXLabel->setText(QCoreApplication::translate("MainWindow", "ACC (X)", nullptr));
        AZLabel->setText(QCoreApplication::translate("MainWindow", "ACC (Z)", nullptr));
        AZ_Data->setText(QString());
        VELOCITY->setTitle(QString());
        VYLabel->setText(QCoreApplication::translate("MainWindow", "VEL (Y)", nullptr));
        VXLabel->setText(QCoreApplication::translate("MainWindow", "VEL (X)", nullptr));
        VZLabel->setText(QCoreApplication::translate("MainWindow", "VEL (Z)", nullptr));
        VZ_Data->setText(QString());
        POSITION->setTitle(QString());
        PYLabel->setText(QCoreApplication::translate("MainWindow", "POS (Y)", nullptr));
        PXLabel->setText(QCoreApplication::translate("MainWindow", "POS (X)", nullptr));
        PZLabel->setText(QCoreApplication::translate("MainWindow", "POS (Z)", nullptr));
        PZ_Data->setText(QString());
        YPR->setTitle(QString());
        PitchLabel->setText(QCoreApplication::translate("MainWindow", "PITCH", nullptr));
        RollLabel->setText(QCoreApplication::translate("MainWindow", "ROLL", nullptr));
        YawLabel->setText(QCoreApplication::translate("MainWindow", "YAW", nullptr));
        Yaw_Data->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "MOTORES", nullptr));
        LM_Label->setText(QCoreApplication::translate("MainWindow", "LEFT MOTOR POWER", nullptr));
        LMPOW_NEG->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        LMPOW_POS->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        RM_Label->setText(QCoreApplication::translate("MainWindow", "RIGHT MOTOR POWER", nullptr));
        RMPOW_NEG->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        RMPOW_POS->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        menuConfiguraciones->setTitle(QCoreApplication::translate("MainWindow", "UART", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
