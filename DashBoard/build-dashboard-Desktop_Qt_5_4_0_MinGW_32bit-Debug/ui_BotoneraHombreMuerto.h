/********************************************************************************
** Form generated from reading UI file 'BotoneraHombreMuerto.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOTONERAHOMBREMUERTO_H
#define UI_BOTONERAHOMBREMUERTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "QQuickWidget"

QT_BEGIN_NAMESPACE

class Ui_BotoneraHombreMuerto
{
public:
    QQuickWidget *quickWidget;

    void setupUi(QWidget *BotoneraHombreMuerto)
    {
        if (BotoneraHombreMuerto->objectName().isEmpty())
            BotoneraHombreMuerto->setObjectName(QStringLiteral("BotoneraHombreMuerto"));
        BotoneraHombreMuerto->resize(100, 150);
        quickWidget = new QQuickWidget(BotoneraHombreMuerto);
        quickWidget->setObjectName(QStringLiteral("quickWidget"));
        quickWidget->setGeometry(QRect(0, 0, 100, 150));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

        retranslateUi(BotoneraHombreMuerto);

        QMetaObject::connectSlotsByName(BotoneraHombreMuerto);
    } // setupUi

    void retranslateUi(QWidget *BotoneraHombreMuerto)
    {
        BotoneraHombreMuerto->setWindowTitle(QApplication::translate("BotoneraHombreMuerto", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class BotoneraHombreMuerto: public Ui_BotoneraHombreMuerto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOTONERAHOMBREMUERTO_H
