/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *TytulGlowny;
    QSpacerItem *verticalSpacer_12;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Start;
    QSpacerItem *verticalSpacer;
    QPushButton *Stop;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Reset;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout;
    QWidget *wykresWarZad;
    QLabel *TytulWykres1;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *UstawieniaLabel;
    QPushButton *UstawieniaGeneratora;
    QSpacerItem *verticalSpacer_3;
    QPushButton *UstawieniaObiektuARX;
    QSpacerItem *verticalSpacer_4;
    QPushButton *UstawieniaRegulatora;
    QSpacerItem *verticalSpacer_13;
    QVBoxLayout *verticalLayout_6;
    QLabel *InterwalCzasowyLabel;
    QLineEdit *Interwal;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *WykUchyb;
    QLabel *TytulWykres2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QWidget *WykPID;
    QLabel *TytulWykres3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *WykSter;
    QLabel *TytulWykres4;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_9;
    QPushButton *Zapisz;
    QPushButton *Wczytaj;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1845, 942);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        TytulGlowny = new QLabel(centralwidget);
        TytulGlowny->setObjectName("TytulGlowny");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TytulGlowny->sizePolicy().hasHeightForWidth());
        TytulGlowny->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        TytulGlowny->setFont(font);
        TytulGlowny->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(TytulGlowny);

        verticalSpacer_12 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_12);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        Start = new QPushButton(centralwidget);
        Start->setObjectName("Start");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Start->sizePolicy().hasHeightForWidth());
        Start->setSizePolicy(sizePolicy2);
        Start->setMinimumSize(QSize(150, 101));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        Start->setFont(font1);

        verticalLayout_5->addWidget(Start);

        verticalSpacer = new QSpacerItem(50, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        Stop = new QPushButton(centralwidget);
        Stop->setObjectName("Stop");
        sizePolicy2.setHeightForWidth(Stop->sizePolicy().hasHeightForWidth());
        Stop->setSizePolicy(sizePolicy2);
        Stop->setMinimumSize(QSize(150, 101));
        Stop->setFont(font1);

        verticalLayout_5->addWidget(Stop);

        verticalSpacer_2 = new QSpacerItem(50, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        Reset = new QPushButton(centralwidget);
        Reset->setObjectName("Reset");
        sizePolicy2.setHeightForWidth(Reset->sizePolicy().hasHeightForWidth());
        Reset->setSizePolicy(sizePolicy2);
        Reset->setMinimumSize(QSize(150, 101));
        Reset->setFont(font1);

        verticalLayout_5->addWidget(Reset);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        wykresWarZad = new QWidget(centralwidget);
        wykresWarZad->setObjectName("wykresWarZad");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(wykresWarZad->sizePolicy().hasHeightForWidth());
        wykresWarZad->setSizePolicy(sizePolicy3);
        wykresWarZad->setMinimumSize(QSize(700, 351));

        verticalLayout->addWidget(wykresWarZad);

        TytulWykres1 = new QLabel(centralwidget);
        TytulWykres1->setObjectName("TytulWykres1");
        sizePolicy3.setHeightForWidth(TytulWykres1->sizePolicy().hasHeightForWidth());
        TytulWykres1->setSizePolicy(sizePolicy3);
        TytulWykres1->setMinimumSize(QSize(700, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        TytulWykres1->setFont(font2);
        TytulWykres1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(TytulWykres1);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        UstawieniaLabel = new QLabel(centralwidget);
        UstawieniaLabel->setObjectName("UstawieniaLabel");
        sizePolicy2.setHeightForWidth(UstawieniaLabel->sizePolicy().hasHeightForWidth());
        UstawieniaLabel->setSizePolicy(sizePolicy2);
        UstawieniaLabel->setMinimumSize(QSize(140, 40));
        QFont font3;
        font3.setPointSize(21);
        font3.setBold(true);
        UstawieniaLabel->setFont(font3);
        UstawieniaLabel->setStyleSheet(QString::fromUtf8("color: white"));
        UstawieniaLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(UstawieniaLabel);

        UstawieniaGeneratora = new QPushButton(centralwidget);
        UstawieniaGeneratora->setObjectName("UstawieniaGeneratora");
        sizePolicy2.setHeightForWidth(UstawieniaGeneratora->sizePolicy().hasHeightForWidth());
        UstawieniaGeneratora->setSizePolicy(sizePolicy2);
        UstawieniaGeneratora->setMinimumSize(QSize(140, 80));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        UstawieniaGeneratora->setFont(font4);

        verticalLayout_7->addWidget(UstawieniaGeneratora);

        verticalSpacer_3 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_3);

        UstawieniaObiektuARX = new QPushButton(centralwidget);
        UstawieniaObiektuARX->setObjectName("UstawieniaObiektuARX");
        sizePolicy2.setHeightForWidth(UstawieniaObiektuARX->sizePolicy().hasHeightForWidth());
        UstawieniaObiektuARX->setSizePolicy(sizePolicy2);
        UstawieniaObiektuARX->setMinimumSize(QSize(140, 80));
        UstawieniaObiektuARX->setFont(font4);

        verticalLayout_7->addWidget(UstawieniaObiektuARX);

        verticalSpacer_4 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_4);

        UstawieniaRegulatora = new QPushButton(centralwidget);
        UstawieniaRegulatora->setObjectName("UstawieniaRegulatora");
        sizePolicy2.setHeightForWidth(UstawieniaRegulatora->sizePolicy().hasHeightForWidth());
        UstawieniaRegulatora->setSizePolicy(sizePolicy2);
        UstawieniaRegulatora->setMinimumSize(QSize(140, 80));
        UstawieniaRegulatora->setFont(font4);

        verticalLayout_7->addWidget(UstawieniaRegulatora);

        verticalSpacer_13 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_13);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        InterwalCzasowyLabel = new QLabel(centralwidget);
        InterwalCzasowyLabel->setObjectName("InterwalCzasowyLabel");
        sizePolicy2.setHeightForWidth(InterwalCzasowyLabel->sizePolicy().hasHeightForWidth());
        InterwalCzasowyLabel->setSizePolicy(sizePolicy2);
        InterwalCzasowyLabel->setMinimumSize(QSize(171, 31));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        InterwalCzasowyLabel->setFont(font5);
        InterwalCzasowyLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(InterwalCzasowyLabel);

        Interwal = new QLineEdit(centralwidget);
        Interwal->setObjectName("Interwal");
        sizePolicy2.setHeightForWidth(Interwal->sizePolicy().hasHeightForWidth());
        Interwal->setSizePolicy(sizePolicy2);
        Interwal->setMinimumSize(QSize(140, 31));
        Interwal->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(Interwal);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_10);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_2);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_9->addItem(verticalSpacer_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_3 = new QSpacerItem(180, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        WykUchyb = new QWidget(centralwidget);
        WykUchyb->setObjectName("WykUchyb");
        sizePolicy1.setHeightForWidth(WykUchyb->sizePolicy().hasHeightForWidth());
        WykUchyb->setSizePolicy(sizePolicy1);
        WykUchyb->setMinimumSize(QSize(311, 251));
        WykUchyb->setBaseSize(QSize(311, 251));

        verticalLayout_2->addWidget(WykUchyb);

        TytulWykres2 = new QLabel(centralwidget);
        TytulWykres2->setObjectName("TytulWykres2");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(TytulWykres2->sizePolicy().hasHeightForWidth());
        TytulWykres2->setSizePolicy(sizePolicy4);
        TytulWykres2->setMinimumSize(QSize(311, 51));
        QFont font6;
        font6.setPointSize(18);
        font6.setBold(true);
        TytulWykres2->setFont(font6);
        TytulWykres2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(TytulWykres2);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        WykPID = new QWidget(centralwidget);
        WykPID->setObjectName("WykPID");
        sizePolicy1.setHeightForWidth(WykPID->sizePolicy().hasHeightForWidth());
        WykPID->setSizePolicy(sizePolicy1);
        WykPID->setMinimumSize(QSize(311, 251));
        WykPID->setBaseSize(QSize(311, 251));

        verticalLayout_3->addWidget(WykPID);

        TytulWykres3 = new QLabel(centralwidget);
        TytulWykres3->setObjectName("TytulWykres3");
        sizePolicy4.setHeightForWidth(TytulWykres3->sizePolicy().hasHeightForWidth());
        TytulWykres3->setSizePolicy(sizePolicy4);
        TytulWykres3->setMinimumSize(QSize(311, 51));
        TytulWykres3->setFont(font6);
        TytulWykres3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(TytulWykres3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        WykSter = new QWidget(centralwidget);
        WykSter->setObjectName("WykSter");
        sizePolicy1.setHeightForWidth(WykSter->sizePolicy().hasHeightForWidth());
        WykSter->setSizePolicy(sizePolicy1);
        WykSter->setMinimumSize(QSize(311, 251));
        WykSter->setBaseSize(QSize(311, 251));

        verticalLayout_4->addWidget(WykSter);

        TytulWykres4 = new QLabel(centralwidget);
        TytulWykres4->setObjectName("TytulWykres4");
        sizePolicy4.setHeightForWidth(TytulWykres4->sizePolicy().hasHeightForWidth());
        TytulWykres4->setSizePolicy(sizePolicy4);
        TytulWykres4->setMinimumSize(QSize(311, 51));
        TytulWykres4->setFont(font6);
        TytulWykres4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(TytulWykres4);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);


        horizontalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalSpacer_9 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_9);

        Zapisz = new QPushButton(centralwidget);
        Zapisz->setObjectName("Zapisz");
        sizePolicy2.setHeightForWidth(Zapisz->sizePolicy().hasHeightForWidth());
        Zapisz->setSizePolicy(sizePolicy2);
        Zapisz->setMinimumSize(QSize(171, 80));
        Zapisz->setFont(font4);

        verticalLayout_8->addWidget(Zapisz);

        Wczytaj = new QPushButton(centralwidget);
        Wczytaj->setObjectName("Wczytaj");
        sizePolicy2.setHeightForWidth(Wczytaj->sizePolicy().hasHeightForWidth());
        Wczytaj->setSizePolicy(sizePolicy2);
        Wczytaj->setMinimumSize(QSize(171, 80));
        Wczytaj->setFont(font4);

        verticalLayout_8->addWidget(Wczytaj);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);


        horizontalLayout_4->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_4);


        verticalLayout_10->addLayout(verticalLayout_9);


        horizontalLayout_5->addLayout(verticalLayout_10);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1845, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        TytulGlowny->setText(QCoreApplication::translate("MainWindow", "Symulator Uk\305\202adu Automatycznej Regulacji", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        TytulWykres1->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207 Zadana i Regulowana", nullptr));
        UstawieniaLabel->setText(QCoreApplication::translate("MainWindow", "Ustawienia", nullptr));
        UstawieniaGeneratora->setText(QCoreApplication::translate("MainWindow", "Generator", nullptr));
        UstawieniaObiektuARX->setText(QCoreApplication::translate("MainWindow", "Obiekt ARX", nullptr));
        UstawieniaRegulatora->setText(QCoreApplication::translate("MainWindow", "Regulator", nullptr));
        InterwalCzasowyLabel->setText(QCoreApplication::translate("MainWindow", "Interwa\305\202 Czasowy", nullptr));
        Interwal->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        TytulWykres2->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207 Uchybu Regulacji", nullptr));
        TytulWykres3->setText(QCoreApplication::translate("MainWindow", "Warto\305\233ci Regulatora PID", nullptr));
        TytulWykres4->setText(QCoreApplication::translate("MainWindow", "Warto\305\233\304\207 Steruj\304\205ca", nullptr));
        Zapisz->setText(QCoreApplication::translate("MainWindow", "Zapisz", nullptr));
        Wczytaj->setText(QCoreApplication::translate("MainWindow", "Wczytaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
