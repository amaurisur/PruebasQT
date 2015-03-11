/********************************************************************************
** Form generated from reading UI file 'panelhombrevivo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANELHOMBREVIVO_H
#define UI_PANELHOMBREVIVO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QQuickWidget"

QT_BEGIN_NAMESPACE

class Ui_PanelHombreVivo
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QQuickWidget *quickWidget_BotonRojo;
    QQuickWidget *quickWidget_BotonVerde;

    void setupUi(QWidget *PanelHombreVivo)
    {
        if (PanelHombreVivo->objectName().isEmpty())
            PanelHombreVivo->setObjectName(QStringLiteral("PanelHombreVivo"));
        PanelHombreVivo->resize(193, 244);
        verticalLayoutWidget = new QWidget(PanelHombreVivo);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 171, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        quickWidget_BotonRojo = new QQuickWidget(verticalLayoutWidget);
        quickWidget_BotonRojo->setObjectName(QStringLiteral("quickWidget_BotonRojo"));
        quickWidget_BotonRojo->setResizeMode(QQuickWidget::SizeRootObjectToView);

        verticalLayout->addWidget(quickWidget_BotonRojo);

        quickWidget_BotonVerde = new QQuickWidget(verticalLayoutWidget);
        quickWidget_BotonVerde->setObjectName(QStringLiteral("quickWidget_BotonVerde"));
        quickWidget_BotonVerde->setResizeMode(QQuickWidget::SizeRootObjectToView);

        verticalLayout->addWidget(quickWidget_BotonVerde);


        retranslateUi(PanelHombreVivo);

        QMetaObject::connectSlotsByName(PanelHombreVivo);
    } // setupUi

    void retranslateUi(QWidget *PanelHombreVivo)
    {
        PanelHombreVivo->setWindowTitle(QApplication::translate("PanelHombreVivo", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class PanelHombreVivo: public Ui_PanelHombreVivo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANELHOMBREVIVO_H
