/********************************************************************************
** Form generated from reading UI file 'comportsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPORTSETTINGS_H
#define UI_COMPORTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ComPortSettings
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGroupBox *printerGBox;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *portCBox_1;
    QComboBox *baudRateCBox_1;
    QComboBox *dataBitsCBox_1;
    QComboBox *stopBitsCBox_1;
    QComboBox *parityCBox_1;
    QPushButton *pushButton;
    QGroupBox *sensorGBox;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *portCBox_2;
    QComboBox *baudRateCBox_2;
    QComboBox *dataBitsCBox_2;
    QComboBox *stopBitsCBox_2;
    QComboBox *parityCBox_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ComPortSettings)
    {
        if (ComPortSettings->objectName().isEmpty())
            ComPortSettings->setObjectName(QString::fromUtf8("ComPortSettings"));
        ComPortSettings->resize(450, 229);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ComPortSettings->sizePolicy().hasHeightForWidth());
        ComPortSettings->setSizePolicy(sizePolicy);
        ComPortSettings->setMaximumSize(QSize(450, 229));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(10);
        ComPortSettings->setFont(font);
        ComPortSettings->setModal(true);
        gridLayout_4 = new QGridLayout(ComPortSettings);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        printerGBox = new QGroupBox(ComPortSettings);
        printerGBox->setObjectName(QString::fromUtf8("printerGBox"));
        gridLayout = new QGridLayout(printerGBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(printerGBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(printerGBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(printerGBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(printerGBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(printerGBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        portCBox_1 = new QComboBox(printerGBox);
        portCBox_1->setObjectName(QString::fromUtf8("portCBox_1"));

        formLayout->setWidget(0, QFormLayout::FieldRole, portCBox_1);

        baudRateCBox_1 = new QComboBox(printerGBox);
        baudRateCBox_1->setObjectName(QString::fromUtf8("baudRateCBox_1"));

        formLayout->setWidget(1, QFormLayout::FieldRole, baudRateCBox_1);

        dataBitsCBox_1 = new QComboBox(printerGBox);
        dataBitsCBox_1->setObjectName(QString::fromUtf8("dataBitsCBox_1"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dataBitsCBox_1);

        stopBitsCBox_1 = new QComboBox(printerGBox);
        stopBitsCBox_1->setObjectName(QString::fromUtf8("stopBitsCBox_1"));

        formLayout->setWidget(3, QFormLayout::FieldRole, stopBitsCBox_1);

        parityCBox_1 = new QComboBox(printerGBox);
        parityCBox_1->setObjectName(QString::fromUtf8("parityCBox_1"));

        formLayout->setWidget(4, QFormLayout::FieldRole, parityCBox_1);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(printerGBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        gridLayout_3->addWidget(printerGBox, 0, 0, 1, 1);

        sensorGBox = new QGroupBox(ComPortSettings);
        sensorGBox->setObjectName(QString::fromUtf8("sensorGBox"));
        gridLayout_2 = new QGridLayout(sensorGBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_6 = new QLabel(sensorGBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(sensorGBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(sensorGBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(sensorGBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(sensorGBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_10);

        portCBox_2 = new QComboBox(sensorGBox);
        portCBox_2->setObjectName(QString::fromUtf8("portCBox_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, portCBox_2);

        baudRateCBox_2 = new QComboBox(sensorGBox);
        baudRateCBox_2->setObjectName(QString::fromUtf8("baudRateCBox_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, baudRateCBox_2);

        dataBitsCBox_2 = new QComboBox(sensorGBox);
        dataBitsCBox_2->setObjectName(QString::fromUtf8("dataBitsCBox_2"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, dataBitsCBox_2);

        stopBitsCBox_2 = new QComboBox(sensorGBox);
        stopBitsCBox_2->setObjectName(QString::fromUtf8("stopBitsCBox_2"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, stopBitsCBox_2);

        parityCBox_2 = new QComboBox(sensorGBox);
        parityCBox_2->setObjectName(QString::fromUtf8("parityCBox_2"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, parityCBox_2);


        gridLayout_2->addLayout(formLayout_2, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(sensorGBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);


        gridLayout_3->addWidget(sensorGBox, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        retranslateUi(ComPortSettings);

        QMetaObject::connectSlotsByName(ComPortSettings);
    } // setupUi

    void retranslateUi(QDialog *ComPortSettings)
    {
        ComPortSettings->setWindowTitle(QCoreApplication::translate("ComPortSettings", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        printerGBox->setTitle(QCoreApplication::translate("ComPortSettings", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 COM-\320\277\320\276\321\200\321\202\320\260 \320\277\321\200\320\270\320\275\321\202\320\265\321\200\320\260", nullptr));
        label->setText(QCoreApplication::translate("ComPortSettings", "\320\237\320\276\321\200\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("ComPortSettings", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("ComPortSettings", "\320\224\320\273\320\270\320\275\320\260 \321\201\320\273\320\276\320\262\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("ComPortSettings", "\320\241\321\202\320\276\320\277\320\276\320\262\321\213\321\205 \320\261\320\270\321\202", nullptr));
        label_5->setText(QCoreApplication::translate("ComPortSettings", "\320\237\320\260\321\200\320\270\321\202\320\265\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("ComPortSettings", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        sensorGBox->setTitle(QCoreApplication::translate("ComPortSettings", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 COM-\320\277\320\276\321\200\321\202\320\260 \320\264\320\260\321\202\321\207\320\270\320\272\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("ComPortSettings", "\320\237\320\276\321\200\321\202", nullptr));
        label_7->setText(QCoreApplication::translate("ComPortSettings", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("ComPortSettings", "\320\224\320\273\320\270\320\275\320\260 \321\201\320\273\320\276\320\262\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("ComPortSettings", "\320\241\321\202\320\276\320\277\320\276\320\262\321\213\321\205 \320\261\320\270\321\202", nullptr));
        label_10->setText(QCoreApplication::translate("ComPortSettings", "\320\237\320\260\321\200\320\270\321\202\320\265\321\202", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ComPortSettings", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComPortSettings: public Ui_ComPortSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPORTSETTINGS_H
