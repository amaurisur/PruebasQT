/********************************************************************************
** Form generated from reading UI file 'formpruebaboton.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPRUEBABOTON_H
#define UI_FORMPRUEBABOTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormBotonesHombreVivo
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *FormBotonesHombreVivo)
    {
        if (FormBotonesHombreVivo->objectName().isEmpty())
            FormBotonesHombreVivo->setObjectName(QStringLiteral("FormBotonesHombreVivo"));
        FormBotonesHombreVivo->resize(92, 174);
        pushButton = new QPushButton(FormBotonesHombreVivo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 91, 71));
        pushButton_2 = new QPushButton(FormBotonesHombreVivo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 100, 91, 71));

        retranslateUi(FormBotonesHombreVivo);

        QMetaObject::connectSlotsByName(FormBotonesHombreVivo);
    } // setupUi

    void retranslateUi(QWidget *FormBotonesHombreVivo)
    {
        FormBotonesHombreVivo->setWindowTitle(QApplication::translate("FormBotonesHombreVivo", "Form", 0));
        pushButton->setText(QApplication::translate("FormBotonesHombreVivo", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("FormBotonesHombreVivo", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class FormBotonesHombreVivo: public Ui_FormBotonesHombreVivo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPRUEBABOTON_H
