/********************************************************************************
** Form generated from reading UI file 'oknoobiektarx.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOOBIEKTARX_H
#define UI_OKNOOBIEKTARX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OknoObiektARX
{
public:
    QDoubleSpinBox *Opoznienie;
    QLabel *OpoznienieLabel;
    QDialogButtonBox *ZatwierdzenieUstawien;
    QLabel *Blebel;
    QLabel *label_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *A1;
    QDoubleSpinBox *A2_2;
    QDoubleSpinBox *A3_2;
    QLabel *ALebel;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *B1_2;
    QDoubleSpinBox *B2_2;
    QDoubleSpinBox *B3_2;

    void setupUi(QDialog *OknoObiektARX)
    {
        if (OknoObiektARX->objectName().isEmpty())
            OknoObiektARX->setObjectName("OknoObiektARX");
        OknoObiektARX->resize(358, 318);
        Opoznienie = new QDoubleSpinBox(OknoObiektARX);
        Opoznienie->setObjectName("Opoznienie");
        Opoznienie->setGeometry(QRect(160, 200, 61, 21));
        OpoznienieLabel = new QLabel(OknoObiektARX);
        OpoznienieLabel->setObjectName("OpoznienieLabel");
        OpoznienieLabel->setGeometry(QRect(70, 200, 91, 25));
        QFont font;
        font.setBold(true);
        OpoznienieLabel->setFont(font);
        OpoznienieLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        ZatwierdzenieUstawien = new QDialogButtonBox(OknoObiektARX);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setGeometry(QRect(250, 120, 81, 71));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Vertical);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        Blebel = new QLabel(OknoObiektARX);
        Blebel->setObjectName("Blebel");
        Blebel->setGeometry(QRect(20, 160, 31, 21));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        Blebel->setFont(font1);
        Blebel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(OknoObiektARX);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 80, 191, 31));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget = new QWidget(OknoObiektARX);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 110, 191, 41));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        A1 = new QDoubleSpinBox(layoutWidget);
        A1->setObjectName("A1");
        QFont font2;
        font2.setBold(false);
        A1->setFont(font2);

        horizontalLayout_6->addWidget(A1);

        A2_2 = new QDoubleSpinBox(layoutWidget);
        A2_2->setObjectName("A2_2");

        horizontalLayout_6->addWidget(A2_2);

        A3_2 = new QDoubleSpinBox(layoutWidget);
        A3_2->setObjectName("A3_2");

        horizontalLayout_6->addWidget(A3_2);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        ALebel = new QLabel(OknoObiektARX);
        ALebel->setObjectName("ALebel");
        ALebel->setGeometry(QRect(20, 120, 31, 21));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        ALebel->setFont(font3);
        ALebel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget_2 = new QWidget(OknoObiektARX);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(50, 150, 191, 41));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        B1_2 = new QDoubleSpinBox(layoutWidget_2);
        B1_2->setObjectName("B1_2");

        horizontalLayout_7->addWidget(B1_2);

        B2_2 = new QDoubleSpinBox(layoutWidget_2);
        B2_2->setObjectName("B2_2");

        horizontalLayout_7->addWidget(B2_2);

        B3_2 = new QDoubleSpinBox(layoutWidget_2);
        B3_2->setObjectName("B3_2");

        horizontalLayout_7->addWidget(B3_2);


        retranslateUi(OknoObiektARX);

        QMetaObject::connectSlotsByName(OknoObiektARX);
    } // setupUi

    void retranslateUi(QDialog *OknoObiektARX)
    {
        OknoObiektARX->setWindowTitle(QCoreApplication::translate("OknoObiektARX", "Dialog", nullptr));
        OpoznienieLabel->setText(QCoreApplication::translate("OknoObiektARX", "Op\303\263\305\272nienie", nullptr));
        Blebel->setText(QCoreApplication::translate("OknoObiektARX", "B", nullptr));
        label_7->setText(QCoreApplication::translate("OknoObiektARX", "Wsp\303\263\305\202czynniki wielomian\303\263w A i B", nullptr));
        ALebel->setText(QCoreApplication::translate("OknoObiektARX", "A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoObiektARX: public Ui_OknoObiektARX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOOBIEKTARX_H
