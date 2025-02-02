/********************************************************************************
** Form generated from reading UI file 'oknoregulator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOREGULATOR_H
#define UI_OKNOREGULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_OknoRegulator
{
public:
    QLabel *NastawaDopis;
    QLabel *label_12;
    QLabel *NastawaIopis;
    QDoubleSpinBox *Wzmocnienie;
    QLabel *label_14;
    QDoubleSpinBox *StalaD;
    QLabel *label_13;
    QLabel *NastawaPopis;
    QDialogButtonBox *ZatwierdzenieUstawien;
    QDoubleSpinBox *StalaI;

    void setupUi(QDialog *OknoRegulator)
    {
        if (OknoRegulator->objectName().isEmpty())
            OknoRegulator->setObjectName("OknoRegulator");
        OknoRegulator->resize(386, 299);
        NastawaDopis = new QLabel(OknoRegulator);
        NastawaDopis->setObjectName("NastawaDopis");
        NastawaDopis->setGeometry(QRect(80, 180, 81, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        NastawaDopis->setFont(font);
        NastawaDopis->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12 = new QLabel(OknoRegulator);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(160, 40, 112, 17));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        NastawaIopis = new QLabel(OknoRegulator);
        NastawaIopis->setObjectName("NastawaIopis");
        NastawaIopis->setGeometry(QRect(80, 120, 81, 31));
        NastawaIopis->setFont(font);
        NastawaIopis->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Wzmocnienie = new QDoubleSpinBox(OknoRegulator);
        Wzmocnienie->setObjectName("Wzmocnienie");
        Wzmocnienie->setGeometry(QRect(160, 60, 112, 31));
        label_14 = new QLabel(OknoRegulator);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(160, 160, 131, 21));
        label_14->setFont(font);
        StalaD = new QDoubleSpinBox(OknoRegulator);
        StalaD->setObjectName("StalaD");
        StalaD->setGeometry(QRect(160, 180, 112, 31));
        label_13 = new QLabel(OknoRegulator);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(160, 100, 112, 17));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);
        NastawaPopis = new QLabel(OknoRegulator);
        NastawaPopis->setObjectName("NastawaPopis");
        NastawaPopis->setGeometry(QRect(80, 60, 81, 31));
        NastawaPopis->setFont(font);
        ZatwierdzenieUstawien = new QDialogButtonBox(OknoRegulator);
        ZatwierdzenieUstawien->setObjectName("ZatwierdzenieUstawien");
        ZatwierdzenieUstawien->setGeometry(QRect(-80, 220, 341, 32));
        ZatwierdzenieUstawien->setOrientation(Qt::Orientation::Horizontal);
        ZatwierdzenieUstawien->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        StalaI = new QDoubleSpinBox(OknoRegulator);
        StalaI->setObjectName("StalaI");
        StalaI->setGeometry(QRect(160, 120, 112, 31));

        retranslateUi(OknoRegulator);

        QMetaObject::connectSlotsByName(OknoRegulator);
    } // setupUi

    void retranslateUi(QDialog *OknoRegulator)
    {
        OknoRegulator->setWindowTitle(QCoreApplication::translate("OknoRegulator", "Dialog", nullptr));
        NastawaDopis->setText(QCoreApplication::translate("OknoRegulator", "Nastawa D", nullptr));
        label_12->setText(QCoreApplication::translate("OknoRegulator", "Wzmocnienie", nullptr));
        NastawaIopis->setText(QCoreApplication::translate("OknoRegulator", "Nastawa I", nullptr));
        label_14->setText(QCoreApplication::translate("OknoRegulator", "Sta\305\202a R\303\263\305\274niczkuj\304\205ca", nullptr));
        label_13->setText(QCoreApplication::translate("OknoRegulator", "Sta\305\202a Ca\305\202kuj\304\205ca", nullptr));
        NastawaPopis->setText(QCoreApplication::translate("OknoRegulator", "Nastawa P", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OknoRegulator: public Ui_OknoRegulator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOREGULATOR_H
