/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <form_botonera_hombremuerto.h>
#include <formaceite.h>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_HombreMuerto;
    QPushButton *button_HombreVivo;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcd_kmh;
    QDial *dial;
    QLCDNumber *lcd_mph;
    QLabel *label_mph;
    QSlider *palanca;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *layout_BotonesPuertaIzq;
    QPushButton *button_izq_azul;
    QPushButton *button_izq_rojo;
    QPushButton *button_izq_verde;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *layout_botonesPuertaDer;
    QPushButton *botton_der_azul;
    QPushButton *botton_der_rojo;
    QPushButton *boton_der_verde;
    QLabel *label_kmh;
    Form_botonera_hombreMuerto *widget;
    FormAceite *aceiteMedidor;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(516, 606);
        horizontalLayoutWidget_2 = new QWidget(Dialog);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 380, 158, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        button_HombreMuerto = new QPushButton(horizontalLayoutWidget_2);
        button_HombreMuerto->setObjectName(QStringLiteral("button_HombreMuerto"));
        button_HombreMuerto->setAutoFillBackground(false);
        button_HombreMuerto->setAutoDefault(true);
        button_HombreMuerto->setDefault(false);
        button_HombreMuerto->setFlat(false);

        horizontalLayout_2->addWidget(button_HombreMuerto);

        button_HombreVivo = new QPushButton(horizontalLayoutWidget_2);
        button_HombreVivo->setObjectName(QStringLiteral("button_HombreVivo"));

        horizontalLayout_2->addWidget(button_HombreVivo);

        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 230, 461, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lcd_kmh = new QLCDNumber(horizontalLayoutWidget);
        lcd_kmh->setObjectName(QStringLiteral("lcd_kmh"));
        lcd_kmh->setAutoFillBackground(false);

        horizontalLayout->addWidget(lcd_kmh);

        dial = new QDial(horizontalLayoutWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setMouseTracking(false);
        dial->setAutoFillBackground(true);
        dial->setMaximum(3);
        dial->setValue(0);
        dial->setSliderPosition(0);
        dial->setTracking(false);
        dial->setInvertedControls(false);
        dial->setWrapping(false);
        dial->setNotchesVisible(true);

        horizontalLayout->addWidget(dial);

        lcd_mph = new QLCDNumber(horizontalLayoutWidget);
        lcd_mph->setObjectName(QStringLiteral("lcd_mph"));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        lcd_mph->setFont(font);
        lcd_mph->setFrameShape(QFrame::NoFrame);
        lcd_mph->setFrameShadow(QFrame::Plain);
        lcd_mph->setLineWidth(3);
        lcd_mph->setMidLineWidth(0);
        lcd_mph->setSmallDecimalPoint(true);
        lcd_mph->setMode(QLCDNumber::Dec);
        lcd_mph->setSegmentStyle(QLCDNumber::Flat);
        lcd_mph->setProperty("value", QVariant(0));
        lcd_mph->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(lcd_mph);

        label_mph = new QLabel(Dialog);
        label_mph->setObjectName(QStringLiteral("label_mph"));
        label_mph->setGeometry(QRect(370, 340, 21, 20));
        palanca = new QSlider(Dialog);
        palanca->setObjectName(QStringLiteral("palanca"));
        palanca->setGeometry(QRect(380, 380, 131, 221));
        QPalette palette;
        QLinearGradient gradient(0.0168539, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(238, 0, 0, 255));
        gradient.setColorAt(0.539326, QColor(255, 243, 110, 255));
        gradient.setColorAt(1, QColor(110, 255, 128, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(90, 255, 61, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(255, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QLinearGradient gradient1(0.0168539, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(238, 0, 0, 255));
        gradient1.setColorAt(0.539326, QColor(255, 243, 110, 255));
        gradient1.setColorAt(1, QColor(110, 255, 128, 255));
        QBrush brush3(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush3);
        QLinearGradient gradient2(0.0168539, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(238, 0, 0, 255));
        gradient2.setColorAt(0.539326, QColor(255, 243, 110, 255));
        gradient2.setColorAt(1, QColor(110, 255, 128, 255));
        QBrush brush4(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(188, 255, 3, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        QLinearGradient gradient3(0.0168539, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(238, 0, 0, 255));
        gradient3.setColorAt(0.539326, QColor(255, 243, 110, 255));
        gradient3.setColorAt(1, QColor(110, 255, 128, 255));
        QBrush brush6(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        QLinearGradient gradient4(0.0168539, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(238, 0, 0, 255));
        gradient4.setColorAt(0.539326, QColor(255, 243, 110, 255));
        gradient4.setColorAt(1, QColor(110, 255, 128, 255));
        QBrush brush7(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        QLinearGradient gradient5(0.0168539, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(238, 0, 0, 255));
        gradient5.setColorAt(0.539326, QColor(255, 243, 110, 255));
        gradient5.setColorAt(1, QColor(110, 255, 128, 255));
        QBrush brush8(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        QLinearGradient gradient6(0.0168539, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(238, 0, 0, 255));
        gradient6.setColorAt(0.539326, QColor(255, 243, 110, 255));
        gradient6.setColorAt(1, QColor(110, 255, 128, 255));
        QBrush brush9(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        QLinearGradient gradient7(0.0168539, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(238, 0, 0, 255));
        gradient7.setColorAt(0.539326, QColor(255, 243, 110, 255));
        gradient7.setColorAt(1, QColor(110, 255, 128, 255));
        QBrush brush10(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        QLinearGradient gradient8(0.0168539, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(238, 0, 0, 255));
        gradient8.setColorAt(0.539326, QColor(255, 243, 110, 255));
        gradient8.setColorAt(1, QColor(110, 255, 128, 255));
        QBrush brush11(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        palanca->setPalette(palette);
        palanca->setAutoFillBackground(false);
        palanca->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(254, 8, 40, 255), stop:0.847458 rgba(255, 255, 255, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0.0168539, y1:0, x2:0, y2:1, stop:0 rgba(238, 0, 0, 255), stop:0.539326 rgba(255, 243, 110, 255), stop:1 rgba(110, 255, 128, 255));\n"
""));
        palanca->setMaximum(150);
        palanca->setSingleStep(5);
        palanca->setValue(0);
        palanca->setOrientation(Qt::Vertical);
        palanca->setTickPosition(QSlider::TicksBothSides);
        palanca->setTickInterval(10);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 0, 281, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(Dialog);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 77, 231));
        layout_BotonesPuertaIzq = new QVBoxLayout(verticalLayoutWidget_2);
        layout_BotonesPuertaIzq->setObjectName(QStringLiteral("layout_BotonesPuertaIzq"));
        layout_BotonesPuertaIzq->setContentsMargins(0, 0, 0, 0);
        button_izq_azul = new QPushButton(verticalLayoutWidget_2);
        button_izq_azul->setObjectName(QStringLiteral("button_izq_azul"));

        layout_BotonesPuertaIzq->addWidget(button_izq_azul);

        button_izq_rojo = new QPushButton(verticalLayoutWidget_2);
        button_izq_rojo->setObjectName(QStringLiteral("button_izq_rojo"));

        layout_BotonesPuertaIzq->addWidget(button_izq_rojo);

        button_izq_verde = new QPushButton(verticalLayoutWidget_2);
        button_izq_verde->setObjectName(QStringLiteral("button_izq_verde"));

        layout_BotonesPuertaIzq->addWidget(button_izq_verde);

        verticalLayoutWidget_4 = new QWidget(Dialog);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(380, 0, 81, 231));
        layout_botonesPuertaDer = new QVBoxLayout(verticalLayoutWidget_4);
        layout_botonesPuertaDer->setObjectName(QStringLiteral("layout_botonesPuertaDer"));
        layout_botonesPuertaDer->setContentsMargins(0, 0, 0, 0);
        botton_der_azul = new QPushButton(verticalLayoutWidget_4);
        botton_der_azul->setObjectName(QStringLiteral("botton_der_azul"));

        layout_botonesPuertaDer->addWidget(botton_der_azul);

        botton_der_rojo = new QPushButton(verticalLayoutWidget_4);
        botton_der_rojo->setObjectName(QStringLiteral("botton_der_rojo"));

        layout_botonesPuertaDer->addWidget(botton_der_rojo);

        boton_der_verde = new QPushButton(verticalLayoutWidget_4);
        boton_der_verde->setObjectName(QStringLiteral("boton_der_verde"));

        layout_botonesPuertaDer->addWidget(boton_der_verde);

        label_kmh = new QLabel(Dialog);
        label_kmh->setObjectName(QStringLiteral("label_kmh"));
        label_kmh->setGeometry(QRect(60, 340, 31, 21));
        widget = new Form_botonera_hombreMuerto(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(260, 390, 100, 150));
        aceiteMedidor = new FormAceite(Dialog);
        aceiteMedidor->setObjectName(QStringLiteral("aceiteMedidor"));
        aceiteMedidor->setGeometry(QRect(10, 460, 150, 100));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        button_HombreMuerto->setText(QApplication::translate("Dialog", "PushButton", 0));
        button_HombreVivo->setText(QApplication::translate("Dialog", "PushButton", 0));
        label_mph->setText(QApplication::translate("Dialog", "M/h", 0));
        button_izq_azul->setText(QApplication::translate("Dialog", "PushButton", 0));
        button_izq_rojo->setText(QApplication::translate("Dialog", "PushButton", 0));
        button_izq_verde->setText(QApplication::translate("Dialog", "PushButton", 0));
        botton_der_azul->setText(QApplication::translate("Dialog", "PushButton", 0));
        botton_der_rojo->setText(QApplication::translate("Dialog", "PushButton", 0));
        boton_der_verde->setText(QApplication::translate("Dialog", "PushButton", 0));
        label_kmh->setText(QApplication::translate("Dialog", "Km/h", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
