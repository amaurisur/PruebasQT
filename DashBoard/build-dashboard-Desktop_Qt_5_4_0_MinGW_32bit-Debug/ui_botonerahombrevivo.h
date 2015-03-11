/********************************************************************************
** Form generated from reading UI file 'botonerahombrevivo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOTONERAHOMBREVIVO_H
#define UI_BOTONERAHOMBREVIVO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "QQuickWidget"

QT_BEGIN_NAMESPACE

class Ui_botoneraHombreVivo
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QQuickWidget *quickWidget_BotonVerde;
    QQuickWidget *quickWidget_BotonRojo;

    void setupUi(QWidget *botoneraHombreVivo)
    {
        if (botoneraHombreVivo->objectName().isEmpty())
            botoneraHombreVivo->setObjectName(QStringLiteral("botoneraHombreVivo"));
        botoneraHombreVivo->setEnabled(true);
        botoneraHombreVivo->resize(430, 149);
        botoneraHombreVivo->setWindowOpacity(1);
        horizontalLayoutWidget = new QWidget(botoneraHombreVivo);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 371, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        quickWidget_BotonVerde = new QQuickWidget(horizontalLayoutWidget);
        quickWidget_BotonVerde->setObjectName(QStringLiteral("quickWidget_BotonVerde"));
        quickWidget_BotonVerde->setEnabled(true);
        quickWidget_BotonVerde->setResizeMode(QQuickWidget::SizeViewToRootObject);

        horizontalLayout->addWidget(quickWidget_BotonVerde);

        quickWidget_BotonRojo = new QQuickWidget(horizontalLayoutWidget);
        quickWidget_BotonRojo->setObjectName(QStringLiteral("quickWidget_BotonRojo"));
        quickWidget_BotonRojo->setResizeMode(QQuickWidget::SizeRootObjectToView);

        horizontalLayout->addWidget(quickWidget_BotonRojo);


        retranslateUi(botoneraHombreVivo);

        QMetaObject::connectSlotsByName(botoneraHombreVivo);
    } // setupUi

    void retranslateUi(QWidget *botoneraHombreVivo)
    {
        botoneraHombreVivo->setWindowTitle(QApplication::translate("botoneraHombreVivo", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class botoneraHombreVivo: public Ui_botoneraHombreVivo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOTONERAHOMBREVIVO_H
