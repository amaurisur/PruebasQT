/********************************************************************************
** Form generated from reading UI file 'formacite.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMACITE_H
#define UI_FORMACITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "QQuickWidget"

QT_BEGIN_NAMESPACE

class Ui_FormAceite
{
public:
    QQuickWidget *quickWidget;

    void setupUi(QWidget *FormAceite)
    {
        if (FormAceite->objectName().isEmpty())
            FormAceite->setObjectName(QStringLiteral("FormAceite"));
        FormAceite->resize(150, 100);
        quickWidget = new QQuickWidget(FormAceite);
        quickWidget->setObjectName(QStringLiteral("quickWidget"));
        quickWidget->setGeometry(QRect(0, 0, 150, 100));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

        retranslateUi(FormAceite);

        QMetaObject::connectSlotsByName(FormAceite);
    } // setupUi

    void retranslateUi(QWidget *FormAceite)
    {
        FormAceite->setWindowTitle(QApplication::translate("FormAceite", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class FormAceite: public Ui_FormAceite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMACITE_H
