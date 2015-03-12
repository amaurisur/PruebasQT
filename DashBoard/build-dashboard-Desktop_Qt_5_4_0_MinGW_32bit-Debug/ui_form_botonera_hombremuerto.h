/********************************************************************************
** Form generated from reading UI file 'form_botonera_hombremuerto.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_BOTONERA_HOMBREMUERTO_H
#define UI_FORM_BOTONERA_HOMBREMUERTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "QQuickWidget"

QT_BEGIN_NAMESPACE

class Ui_Form_botonera_hombreMuerto
{
public:
    QQuickWidget *quickWidget;

    void setupUi(QWidget *Form_botonera_hombreMuerto)
    {
        if (Form_botonera_hombreMuerto->objectName().isEmpty())
            Form_botonera_hombreMuerto->setObjectName(QStringLiteral("Form_botonera_hombreMuerto"));
        Form_botonera_hombreMuerto->resize(100, 150);
        quickWidget = new QQuickWidget(Form_botonera_hombreMuerto);
        quickWidget->setObjectName(QStringLiteral("quickWidget"));
        quickWidget->setGeometry(QRect(0, 0, 100, 150));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        quickWidget->setSource(QUrl(QStringLiteral("qrc:/BotoneraHombreMuerto.qml")));

        retranslateUi(Form_botonera_hombreMuerto);

        QMetaObject::connectSlotsByName(Form_botonera_hombreMuerto);
    } // setupUi

    void retranslateUi(QWidget *Form_botonera_hombreMuerto)
    {
        Form_botonera_hombreMuerto->setWindowTitle(QApplication::translate("Form_botonera_hombreMuerto", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_botonera_hombreMuerto: public Ui_Form_botonera_hombreMuerto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_BOTONERA_HOMBREMUERTO_H
