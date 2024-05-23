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
    QGroupBox *DATACOMMANDS;
    QTextBrowser *txtBrowserCMD;
    QGroupBox *CARSENSORS;
    QGroupBox *ANALOG;
    QLabel *irLabel_5;
    QLabel *irLabel_6;
    QLabel *irLabel_7;
    QLabel *irLabel_8;
    QLabel *irLabel_9;
    QLabel *irLabel_3;
    QLabel *irLabel_4;
    QLabel *irLabel_2;
    QLineEdit *ir_0;
    QLineEdit *ir_1;
    QLineEdit *ir_2;
    QLineEdit *ir_3;
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
    QWidget *widgetRadar;
    QGroupBox *MPU6050;
    QGroupBox *DATA;
    QLabel *GXLabel;
    QLabel *GYLabel;
    QLabel *GZLabel;
    QLabel *AYLabel;
    QLabel *AXLabel;
    QLabel *AZLabel;
    QLineEdit *ACCy;
    QLineEdit *ACCz;
    QLineEdit *GYRx;
    QLineEdit *GYRy;
    QLineEdit *GYRz;
    QLineEdit *ACCx;
    QMenuBar *menubar;
    QMenu *menuConfiguraciones;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1296, 774);
        MainWindow->setMinimumSize(QSize(1296, 774));
        MainWindow->setMaximumSize(QSize(1296, 774));
        QFont font;
        font.setBold(false);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("car.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:0.99, y2:1, stop:0 rgba(237, 240, 255, 255), stop:1 rgba(111, 106, 255, 255));"));
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
        DATAFLOW->setGeometry(QRect(440, 380, 401, 331));
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
        textBrowser->setGeometry(QRect(10, 30, 381, 291));
        textBrowser->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"Rubik\";"));
        COMMUNICATIONS = new QGroupBox(centralwidget);
        COMMUNICATIONS->setObjectName(QString::fromUtf8("COMMUNICATIONS"));
        COMMUNICATIONS->setGeometry(QRect(20, 10, 411, 361));
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
        UDPSERVER->setGeometry(QRect(10, 30, 391, 81));
        UDPSERVER->setFont(font1);
        UDPSERVER->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Rubik\";"));
        UDPSERVER->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(UDPSERVER);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 371, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(horizontalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_14);

        lineEditLocalPort = new QLineEdit(horizontalLayoutWidget);
        lineEditLocalPort->setObjectName(QString::fromUtf8("lineEditLocalPort"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditLocalPort->sizePolicy().hasHeightForWidth());
        lineEditLocalPort->setSizePolicy(sizePolicy1);
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
        sizePolicy1.setHeightForWidth(pushButtonUdpOpen->sizePolicy().hasHeightForWidth());
        pushButtonUdpOpen->setSizePolicy(sizePolicy1);
        pushButtonUdpOpen->setFont(font1);
        pushButtonUdpOpen->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButtonUdpOpen);

        UDPCLIENT = new QGroupBox(COMMUNICATIONS);
        UDPCLIENT->setObjectName(QString::fromUtf8("UDPCLIENT"));
        UDPCLIENT->setGeometry(QRect(10, 120, 391, 111));
        UDPCLIENT->setFont(font1);
        UDPCLIENT->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 700 12pt \"Rubik\";"));
        UDPCLIENT->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(UDPCLIENT);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 371, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        lineEditIP = new QLineEdit(gridLayoutWidget);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));
        sizePolicy1.setHeightForWidth(lineEditIP->sizePolicy().hasHeightForWidth());
        lineEditIP->setSizePolicy(sizePolicy1);
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
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_16, 1, 0, 1, 1);

        lineEditPort = new QLineEdit(gridLayoutWidget);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        sizePolicy1.setHeightForWidth(lineEditPort->sizePolicy().hasHeightForWidth());
        lineEditPort->setSizePolicy(sizePolicy1);
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
        COMMAND->setGeometry(QRect(10, 240, 391, 111));
        COMMAND->setFont(font1);
        COMMAND->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        COMMAND->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_2 = new QWidget(COMMAND);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 20, 371, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonSend = new QPushButton(gridLayoutWidget_2);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonSend->sizePolicy().hasHeightForWidth());
        pushButtonSend->setSizePolicy(sizePolicy2);
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
        sizePolicy2.setHeightForWidth(pushButtonSend_2->sizePolicy().hasHeightForWidth());
        pushButtonSend_2->setSizePolicy(sizePolicy2);
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
        sizePolicy.setHeightForWidth(comboBoxCom->sizePolicy().hasHeightForWidth());
        comboBoxCom->setSizePolicy(sizePolicy);
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

        DATACOMMANDS = new QGroupBox(centralwidget);
        DATACOMMANDS->setObjectName(QString::fromUtf8("DATACOMMANDS"));
        DATACOMMANDS->setGeometry(QRect(440, 10, 401, 361));
        DATACOMMANDS->setFont(font1);
        DATACOMMANDS->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 700 12pt \"Rubik\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        DATACOMMANDS->setAlignment(Qt::AlignCenter);
        DATACOMMANDS->setCheckable(false);
        txtBrowserCMD = new QTextBrowser(DATACOMMANDS);
        txtBrowserCMD->setObjectName(QString::fromUtf8("txtBrowserCMD"));
        txtBrowserCMD->setGeometry(QRect(10, 30, 381, 321));
        txtBrowserCMD->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"Rubik\";"));
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
        ANALOG->setFont(font1);
        ANALOG->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        ANALOG->setAlignment(Qt::AlignCenter);
        irLabel_5 = new QLabel(ANALOG);
        irLabel_5->setObjectName(QString::fromUtf8("irLabel_5"));
        irLabel_5->setGeometry(QRect(10, 100, 91, 21));
        sizePolicy.setHeightForWidth(irLabel_5->sizePolicy().hasHeightForWidth());
        irLabel_5->setSizePolicy(sizePolicy);
        irLabel_5->setFont(font1);
        irLabel_5->setLayoutDirection(Qt::LeftToRight);
        irLabel_5->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_5->setFrameShape(QFrame::Box);
        irLabel_5->setLineWidth(1);
        irLabel_5->setTextFormat(Qt::AutoText);
        irLabel_5->setAlignment(Qt::AlignCenter);
        irLabel_6 = new QLabel(ANALOG);
        irLabel_6->setObjectName(QString::fromUtf8("irLabel_6"));
        irLabel_6->setGeometry(QRect(310, 30, 91, 21));
        sizePolicy.setHeightForWidth(irLabel_6->sizePolicy().hasHeightForWidth());
        irLabel_6->setSizePolicy(sizePolicy);
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
        irLabel_7 = new QLabel(ANALOG);
        irLabel_7->setObjectName(QString::fromUtf8("irLabel_7"));
        irLabel_7->setGeometry(QRect(115, 100, 91, 21));
        sizePolicy.setHeightForWidth(irLabel_7->sizePolicy().hasHeightForWidth());
        irLabel_7->setSizePolicy(sizePolicy);
        irLabel_7->setFont(font1);
        irLabel_7->setLayoutDirection(Qt::LeftToRight);
        irLabel_7->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_7->setFrameShape(QFrame::Box);
        irLabel_7->setLineWidth(1);
        irLabel_7->setTextFormat(Qt::AutoText);
        irLabel_7->setAlignment(Qt::AlignCenter);
        irLabel_8 = new QLabel(ANALOG);
        irLabel_8->setObjectName(QString::fromUtf8("irLabel_8"));
        irLabel_8->setGeometry(QRect(310, 100, 95, 21));
        sizePolicy.setHeightForWidth(irLabel_8->sizePolicy().hasHeightForWidth());
        irLabel_8->setSizePolicy(sizePolicy);
        irLabel_8->setFont(font1);
        irLabel_8->setLayoutDirection(Qt::LeftToRight);
        irLabel_8->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_8->setFrameShape(QFrame::Box);
        irLabel_8->setLineWidth(1);
        irLabel_8->setTextFormat(Qt::AutoText);
        irLabel_8->setAlignment(Qt::AlignCenter);
        irLabel_9 = new QLabel(ANALOG);
        irLabel_9->setObjectName(QString::fromUtf8("irLabel_9"));
        irLabel_9->setGeometry(QRect(210, 100, 91, 21));
        sizePolicy.setHeightForWidth(irLabel_9->sizePolicy().hasHeightForWidth());
        irLabel_9->setSizePolicy(sizePolicy);
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
        irLabel_3 = new QLabel(ANALOG);
        irLabel_3->setObjectName(QString::fromUtf8("irLabel_3"));
        irLabel_3->setGeometry(QRect(113, 31, 91, 21));
        sizePolicy.setHeightForWidth(irLabel_3->sizePolicy().hasHeightForWidth());
        irLabel_3->setSizePolicy(sizePolicy);
        irLabel_3->setFont(font1);
        irLabel_3->setLayoutDirection(Qt::LeftToRight);
        irLabel_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_3->setFrameShape(QFrame::Box);
        irLabel_3->setLineWidth(1);
        irLabel_3->setTextFormat(Qt::AutoText);
        irLabel_3->setAlignment(Qt::AlignCenter);
        irLabel_4 = new QLabel(ANALOG);
        irLabel_4->setObjectName(QString::fromUtf8("irLabel_4"));
        irLabel_4->setGeometry(QRect(11, 31, 91, 21));
        sizePolicy.setHeightForWidth(irLabel_4->sizePolicy().hasHeightForWidth());
        irLabel_4->setSizePolicy(sizePolicy);
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
        irLabel_2 = new QLabel(ANALOG);
        irLabel_2->setObjectName(QString::fromUtf8("irLabel_2"));
        irLabel_2->setGeometry(QRect(214, 31, 91, 21));
        sizePolicy.setHeightForWidth(irLabel_2->sizePolicy().hasHeightForWidth());
        irLabel_2->setSizePolicy(sizePolicy);
        irLabel_2->setFont(font1);
        irLabel_2->setLayoutDirection(Qt::LeftToRight);
        irLabel_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        irLabel_2->setFrameShape(QFrame::Box);
        irLabel_2->setLineWidth(1);
        irLabel_2->setTextFormat(Qt::AutoText);
        irLabel_2->setAlignment(Qt::AlignCenter);
        ir_0 = new QLineEdit(ANALOG);
        ir_0->setObjectName(QString::fromUtf8("ir_0"));
        ir_0->setGeometry(QRect(10, 50, 91, 41));
        sizePolicy1.setHeightForWidth(ir_0->sizePolicy().hasHeightForWidth());
        ir_0->setSizePolicy(sizePolicy1);
        ir_0->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_0->setAlignment(Qt::AlignCenter);
        ir_0->setReadOnly(true);
        ir_1 = new QLineEdit(ANALOG);
        ir_1->setObjectName(QString::fromUtf8("ir_1"));
        ir_1->setGeometry(QRect(110, 50, 91, 41));
        sizePolicy1.setHeightForWidth(ir_1->sizePolicy().hasHeightForWidth());
        ir_1->setSizePolicy(sizePolicy1);
        ir_1->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_1->setAlignment(Qt::AlignCenter);
        ir_1->setReadOnly(true);
        ir_2 = new QLineEdit(ANALOG);
        ir_2->setObjectName(QString::fromUtf8("ir_2"));
        ir_2->setGeometry(QRect(210, 50, 91, 41));
        sizePolicy1.setHeightForWidth(ir_2->sizePolicy().hasHeightForWidth());
        ir_2->setSizePolicy(sizePolicy1);
        ir_2->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_2->setAlignment(Qt::AlignCenter);
        ir_2->setReadOnly(true);
        ir_3 = new QLineEdit(ANALOG);
        ir_3->setObjectName(QString::fromUtf8("ir_3"));
        ir_3->setGeometry(QRect(310, 50, 91, 41));
        sizePolicy1.setHeightForWidth(ir_3->sizePolicy().hasHeightForWidth());
        ir_3->setSizePolicy(sizePolicy1);
        ir_3->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_3->setAlignment(Qt::AlignCenter);
        ir_3->setReadOnly(true);
        ir_4 = new QLineEdit(ANALOG);
        ir_4->setObjectName(QString::fromUtf8("ir_4"));
        ir_4->setGeometry(QRect(10, 120, 91, 41));
        sizePolicy1.setHeightForWidth(ir_4->sizePolicy().hasHeightForWidth());
        ir_4->setSizePolicy(sizePolicy1);
        ir_4->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_4->setAlignment(Qt::AlignCenter);
        ir_4->setReadOnly(true);
        ir_5 = new QLineEdit(ANALOG);
        ir_5->setObjectName(QString::fromUtf8("ir_5"));
        ir_5->setGeometry(QRect(110, 120, 91, 41));
        sizePolicy1.setHeightForWidth(ir_5->sizePolicy().hasHeightForWidth());
        ir_5->setSizePolicy(sizePolicy1);
        ir_5->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_5->setAlignment(Qt::AlignCenter);
        ir_5->setReadOnly(true);
        ir_6 = new QLineEdit(ANALOG);
        ir_6->setObjectName(QString::fromUtf8("ir_6"));
        ir_6->setGeometry(QRect(210, 120, 91, 41));
        sizePolicy1.setHeightForWidth(ir_6->sizePolicy().hasHeightForWidth());
        ir_6->setSizePolicy(sizePolicy1);
        ir_6->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_6->setAlignment(Qt::AlignCenter);
        ir_6->setReadOnly(true);
        ir_7 = new QLineEdit(ANALOG);
        ir_7->setObjectName(QString::fromUtf8("ir_7"));
        ir_7->setGeometry(QRect(310, 120, 91, 41));
        sizePolicy1.setHeightForWidth(ir_7->sizePolicy().hasHeightForWidth());
        ir_7->setSizePolicy(sizePolicy1);
        ir_7->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ir_7->setAlignment(Qt::AlignCenter);
        ir_7->setReadOnly(true);
        STATE = new QGroupBox(centralwidget);
        STATE->setObjectName(QString::fromUtf8("STATE"));
        STATE->setGeometry(QRect(850, 230, 431, 141));
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
        sizePolicy.setHeightForWidth(groupBox_17->sizePolicy().hasHeightForWidth());
        groupBox_17->setSizePolicy(sizePolicy);
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
        sizePolicy.setHeightForWidth(AliveLabel->sizePolicy().hasHeightForWidth());
        AliveLabel->setSizePolicy(sizePolicy);
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
        sizePolicy.setHeightForWidth(groupBox_16->sizePolicy().hasHeightForWidth());
        groupBox_16->setSizePolicy(sizePolicy);
        groupBox_16->setFont(font1);
        groupBox_16->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        groupBox_16->setAlignment(Qt::AlignCenter);
        FirmwareLabel = new QLabel(groupBox_16);
        FirmwareLabel->setObjectName(QString::fromUtf8("FirmwareLabel"));
        FirmwareLabel->setGeometry(QRect(10, 30, 101, 61));
        sizePolicy.setHeightForWidth(FirmwareLabel->sizePolicy().hasHeightForWidth());
        FirmwareLabel->setSizePolicy(sizePolicy);
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
        sizePolicy.setHeightForWidth(groupBox_18->sizePolicy().hasHeightForWidth());
        groupBox_18->setSizePolicy(sizePolicy);
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
        sizePolicy.setHeightForWidth(groupBox_15->sizePolicy().hasHeightForWidth());
        groupBox_15->setSizePolicy(sizePolicy);
        groupBox_15->setFont(font1);
        groupBox_15->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        groupBox_15->setAlignment(Qt::AlignCenter);
        EstadoBotonLabel = new QLabel(groupBox_15);
        EstadoBotonLabel->setObjectName(QString::fromUtf8("EstadoBotonLabel"));
        EstadoBotonLabel->setGeometry(QRect(10, 30, 81, 61));
        sizePolicy.setHeightForWidth(EstadoBotonLabel->sizePolicy().hasHeightForWidth());
        EstadoBotonLabel->setSizePolicy(sizePolicy);
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
        widgetRadar = new QWidget(centralwidget);
        widgetRadar->setObjectName(QString::fromUtf8("widgetRadar"));
        widgetRadar->setGeometry(QRect(20, 380, 411, 331));
        widgetRadar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        MPU6050 = new QGroupBox(centralwidget);
        MPU6050->setObjectName(QString::fromUtf8("MPU6050"));
        MPU6050->setGeometry(QRect(850, 380, 431, 211));
        MPU6050->setFont(font1);
        MPU6050->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-color: blue;\n"
"    border-radius: 5px;\n"
"	background-color: rgb(0, 0, 255);\n"
"	font: 700 12pt \"Rubik\";\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        MPU6050->setAlignment(Qt::AlignCenter);
        MPU6050->setFlat(false);
        DATA = new QGroupBox(MPU6050);
        DATA->setObjectName(QString::fromUtf8("DATA"));
        DATA->setGeometry(QRect(10, 30, 411, 171));
        DATA->setFont(font1);
        DATA->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 12pt \"Rubik\";"));
        DATA->setAlignment(Qt::AlignCenter);
        GXLabel = new QLabel(DATA);
        GXLabel->setObjectName(QString::fromUtf8("GXLabel"));
        GXLabel->setGeometry(QRect(10, 100, 121, 21));
        sizePolicy.setHeightForWidth(GXLabel->sizePolicy().hasHeightForWidth());
        GXLabel->setSizePolicy(sizePolicy);
        GXLabel->setFont(font1);
        GXLabel->setLayoutDirection(Qt::LeftToRight);
        GXLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        GXLabel->setFrameShape(QFrame::Box);
        GXLabel->setLineWidth(1);
        GXLabel->setTextFormat(Qt::AutoText);
        GXLabel->setAlignment(Qt::AlignCenter);
        GYLabel = new QLabel(DATA);
        GYLabel->setObjectName(QString::fromUtf8("GYLabel"));
        GYLabel->setGeometry(QRect(150, 100, 111, 21));
        sizePolicy.setHeightForWidth(GYLabel->sizePolicy().hasHeightForWidth());
        GYLabel->setSizePolicy(sizePolicy);
        GYLabel->setFont(font1);
        GYLabel->setLayoutDirection(Qt::LeftToRight);
        GYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        GYLabel->setFrameShape(QFrame::Box);
        GYLabel->setLineWidth(1);
        GYLabel->setTextFormat(Qt::AutoText);
        GYLabel->setAlignment(Qt::AlignCenter);
        GZLabel = new QLabel(DATA);
        GZLabel->setObjectName(QString::fromUtf8("GZLabel"));
        GZLabel->setGeometry(QRect(280, 100, 121, 21));
        sizePolicy.setHeightForWidth(GZLabel->sizePolicy().hasHeightForWidth());
        GZLabel->setSizePolicy(sizePolicy);
        GZLabel->setFont(font1);
        GZLabel->setLayoutDirection(Qt::LeftToRight);
        GZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        GZLabel->setFrameShape(QFrame::Box);
        GZLabel->setFrameShadow(QFrame::Plain);
        GZLabel->setLineWidth(1);
        GZLabel->setTextFormat(Qt::AutoText);
        GZLabel->setAlignment(Qt::AlignCenter);
        GZLabel->setWordWrap(false);
        AYLabel = new QLabel(DATA);
        AYLabel->setObjectName(QString::fromUtf8("AYLabel"));
        AYLabel->setGeometry(QRect(150, 30, 111, 21));
        sizePolicy.setHeightForWidth(AYLabel->sizePolicy().hasHeightForWidth());
        AYLabel->setSizePolicy(sizePolicy);
        AYLabel->setFont(font1);
        AYLabel->setLayoutDirection(Qt::LeftToRight);
        AYLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        AYLabel->setFrameShape(QFrame::Box);
        AYLabel->setLineWidth(1);
        AYLabel->setTextFormat(Qt::AutoText);
        AYLabel->setAlignment(Qt::AlignCenter);
        AXLabel = new QLabel(DATA);
        AXLabel->setObjectName(QString::fromUtf8("AXLabel"));
        AXLabel->setGeometry(QRect(11, 31, 121, 21));
        sizePolicy.setHeightForWidth(AXLabel->sizePolicy().hasHeightForWidth());
        AXLabel->setSizePolicy(sizePolicy);
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
        AZLabel = new QLabel(DATA);
        AZLabel->setObjectName(QString::fromUtf8("AZLabel"));
        AZLabel->setGeometry(QRect(280, 30, 121, 21));
        sizePolicy.setHeightForWidth(AZLabel->sizePolicy().hasHeightForWidth());
        AZLabel->setSizePolicy(sizePolicy);
        AZLabel->setFont(font1);
        AZLabel->setLayoutDirection(Qt::LeftToRight);
        AZLabel->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;"));
        AZLabel->setFrameShape(QFrame::Box);
        AZLabel->setLineWidth(1);
        AZLabel->setTextFormat(Qt::AutoText);
        AZLabel->setAlignment(Qt::AlignCenter);
        ACCy = new QLineEdit(DATA);
        ACCy->setObjectName(QString::fromUtf8("ACCy"));
        ACCy->setGeometry(QRect(150, 50, 111, 41));
        sizePolicy1.setHeightForWidth(ACCy->sizePolicy().hasHeightForWidth());
        ACCy->setSizePolicy(sizePolicy1);
        ACCy->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ACCy->setAlignment(Qt::AlignCenter);
        ACCy->setReadOnly(true);
        ACCz = new QLineEdit(DATA);
        ACCz->setObjectName(QString::fromUtf8("ACCz"));
        ACCz->setGeometry(QRect(280, 50, 121, 41));
        sizePolicy1.setHeightForWidth(ACCz->sizePolicy().hasHeightForWidth());
        ACCz->setSizePolicy(sizePolicy1);
        ACCz->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ACCz->setAlignment(Qt::AlignCenter);
        ACCz->setReadOnly(true);
        GYRx = new QLineEdit(DATA);
        GYRx->setObjectName(QString::fromUtf8("GYRx"));
        GYRx->setGeometry(QRect(10, 120, 121, 41));
        sizePolicy1.setHeightForWidth(GYRx->sizePolicy().hasHeightForWidth());
        GYRx->setSizePolicy(sizePolicy1);
        GYRx->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        GYRx->setAlignment(Qt::AlignCenter);
        GYRx->setReadOnly(true);
        GYRy = new QLineEdit(DATA);
        GYRy->setObjectName(QString::fromUtf8("GYRy"));
        GYRy->setGeometry(QRect(150, 120, 111, 41));
        sizePolicy1.setHeightForWidth(GYRy->sizePolicy().hasHeightForWidth());
        GYRy->setSizePolicy(sizePolicy1);
        GYRy->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        GYRy->setAlignment(Qt::AlignCenter);
        GYRy->setReadOnly(true);
        GYRz = new QLineEdit(DATA);
        GYRz->setObjectName(QString::fromUtf8("GYRz"));
        GYRz->setGeometry(QRect(280, 120, 121, 41));
        sizePolicy1.setHeightForWidth(GYRz->sizePolicy().hasHeightForWidth());
        GYRz->setSizePolicy(sizePolicy1);
        GYRz->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        GYRz->setAlignment(Qt::AlignCenter);
        GYRz->setReadOnly(true);
        ACCx = new QLineEdit(DATA);
        ACCx->setObjectName(QString::fromUtf8("ACCx"));
        ACCx->setGeometry(QRect(10, 50, 121, 41));
        sizePolicy1.setHeightForWidth(ACCx->sizePolicy().hasHeightForWidth());
        ACCx->setSizePolicy(sizePolicy1);
        ACCx->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"border-color: black;\n"
"border-radius: 2px;\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Rubik\";"));
        ACCx->setAlignment(Qt::AlignCenter);
        ACCx->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1296, 25));
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
        //palette.setBrush(QPalette::Active, QPalette::Accent, brush2);
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
        //palette.setBrush(QPalette::Inactive, QPalette::Accent, brush2);
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
        //palette.setBrush(QPalette::Disabled, QPalette::Accent, brush2);
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Car Management", nullptr));
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
        DATACOMMANDS->setTitle(QCoreApplication::translate("MainWindow", "DATA COMMANDS", nullptr));
        CARSENSORS->setTitle(QCoreApplication::translate("MainWindow", "CAR SENSORS INFO", nullptr));
        ANALOG->setTitle(QCoreApplication::translate("MainWindow", "ANALOG SENSORS", nullptr));
        irLabel_5->setText(QCoreApplication::translate("MainWindow", "IR4", nullptr));
        irLabel_6->setText(QCoreApplication::translate("MainWindow", "IR3", nullptr));
        irLabel_7->setText(QCoreApplication::translate("MainWindow", "IR5", nullptr));
        irLabel_8->setText(QCoreApplication::translate("MainWindow", "IR7", nullptr));
        irLabel_9->setText(QCoreApplication::translate("MainWindow", "IR6", nullptr));
        irLabel_3->setText(QCoreApplication::translate("MainWindow", "IR1", nullptr));
        irLabel_4->setText(QCoreApplication::translate("MainWindow", "IR0", nullptr));
        irLabel_2->setText(QCoreApplication::translate("MainWindow", "IR2", nullptr));
        STATE->setTitle(QCoreApplication::translate("MainWindow", "STATE INFO", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("MainWindow", "ALIVE", nullptr));
        AliveLabel->setText(QCoreApplication::translate("MainWindow", "NO", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("MainWindow", "FIRMWARE", nullptr));
        FirmwareLabel->setText(QCoreApplication::translate("MainWindow", "UNKNOWN", nullptr));
        groupBox_18->setTitle(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        groupBox_15->setTitle(QCoreApplication::translate("MainWindow", "BUTTON", nullptr));
        EstadoBotonLabel->setText(QCoreApplication::translate("MainWindow", "UP", nullptr));
        MPU6050->setTitle(QCoreApplication::translate("MainWindow", "ACCELEROMETER AND GYROSCOPE", nullptr));
        DATA->setTitle(QCoreApplication::translate("MainWindow", "DATA VIA MPU6050", nullptr));
        GXLabel->setText(QCoreApplication::translate("MainWindow", "GYR (X)", nullptr));
        GYLabel->setText(QCoreApplication::translate("MainWindow", "GYR (Y)", nullptr));
        GZLabel->setText(QCoreApplication::translate("MainWindow", "GYR (Z)", nullptr));
        AYLabel->setText(QCoreApplication::translate("MainWindow", "ACC (Y)", nullptr));
        AXLabel->setText(QCoreApplication::translate("MainWindow", "ACC (X)", nullptr));
        AZLabel->setText(QCoreApplication::translate("MainWindow", "ACC (Z)", nullptr));
        ACCz->setText(QString());
        menuConfiguraciones->setTitle(QCoreApplication::translate("MainWindow", "UART", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
