/********************************************************************************
** Form generated from reading UI file 'testform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTFORM_H
#define UI_TESTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "analogwidgets/counter.h"

QT_BEGIN_NAMESPACE

class Ui_TestForm
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QTabWidget *stackedWidget;
    QWidget *wallclock_tab;
    QWidget *tab_6;
    QWidget *thermometer_tab;
    QWidget *counter_tab;
    QGridLayout *gridLayout;
    Counter *counter;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox_2;
    QSlider *horizontalSlider;
    QSpinBox *spinBox_3;
    QComboBox *comboBox_2;
    QWidget *potentiometer_tab;
    QWidget *tab;
    QComboBox *injCombo;
    QSlider *sizeSlider;
    QScrollBar *chartPosition;
    QDoubleSpinBox *zoomBox;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox;
    QSlider *HSlider;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QMainWindow *TestForm)
    {
        if (TestForm->objectName().isEmpty())
            TestForm->setObjectName(QStringLiteral("TestForm"));
        TestForm->resize(457, 223);
        centralWidget = new QWidget(TestForm);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        stackedWidget = new QTabWidget(splitter);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setTabShape(QTabWidget::Rounded);
        wallclock_tab = new QWidget();
        wallclock_tab->setObjectName(QStringLiteral("wallclock_tab"));
        stackedWidget->addTab(wallclock_tab, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        stackedWidget->addTab(tab_6, QString());
        thermometer_tab = new QWidget();
        thermometer_tab->setObjectName(QStringLiteral("thermometer_tab"));
        stackedWidget->addTab(thermometer_tab, QString());
        counter_tab = new QWidget();
        counter_tab->setObjectName(QStringLiteral("counter_tab"));
        gridLayout = new QGridLayout(counter_tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        counter = new Counter(counter_tab);
        counter->setObjectName(QStringLiteral("counter"));

        gridLayout->addWidget(counter, 0, 0, 1, 2);

        horizontalSlider_2 = new QSlider(counter_tab);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(8);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 2, 0, 1, 1);

        spinBox_2 = new QSpinBox(counter_tab);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setMaximum(8);

        gridLayout->addWidget(spinBox_2, 2, 1, 1, 1);

        horizontalSlider = new QSlider(counter_tab);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(9999);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 3, 0, 1, 1);

        spinBox_3 = new QSpinBox(counter_tab);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setMaximum(9999);

        gridLayout->addWidget(spinBox_3, 3, 1, 1, 1);

        comboBox_2 = new QComboBox(counter_tab);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 0, 1, 1);

        stackedWidget->addTab(counter_tab, QString());
        potentiometer_tab = new QWidget();
        potentiometer_tab->setObjectName(QStringLiteral("potentiometer_tab"));
        stackedWidget->addTab(potentiometer_tab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        injCombo = new QComboBox(tab);
        injCombo->setObjectName(QStringLiteral("injCombo"));
        injCombo->setGeometry(QRect(10, 80, 191, 22));
        sizeSlider = new QSlider(tab);
        sizeSlider->setObjectName(QStringLiteral("sizeSlider"));
        sizeSlider->setGeometry(QRect(10, 40, 160, 16));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sizeSlider->sizePolicy().hasHeightForWidth());
        sizeSlider->setSizePolicy(sizePolicy1);
        sizeSlider->setMaximum(2000);
        sizeSlider->setValue(1000);
        sizeSlider->setOrientation(Qt::Horizontal);
        chartPosition = new QScrollBar(tab);
        chartPosition->setObjectName(QStringLiteral("chartPosition"));
        chartPosition->setGeometry(QRect(20, 10, 160, 16));
        sizePolicy1.setHeightForWidth(chartPosition->sizePolicy().hasHeightForWidth());
        chartPosition->setSizePolicy(sizePolicy1);
        chartPosition->setMaximum(5000);
        chartPosition->setOrientation(Qt::Horizontal);
        zoomBox = new QDoubleSpinBox(tab);
        zoomBox->setObjectName(QStringLiteral("zoomBox"));
        zoomBox->setGeometry(QRect(180, 40, 100, 23));
        zoomBox->setMinimumSize(QSize(100, 0));
        zoomBox->setMaximumSize(QSize(100, 16777215));
        zoomBox->setMinimum(0.01);
        zoomBox->setSingleStep(0.01);
        zoomBox->setValue(1);
        stackedWidget->addTab(tab, QString());
        stackedWidget->setTabText(stackedWidget->indexOf(tab), QStringLiteral("Chart"));
        splitter->addWidget(stackedWidget);
        frame = new QFrame(splitter);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_3->addWidget(comboBox, 0, 0, 1, 1);

        HSlider = new QSlider(frame);
        HSlider->setObjectName(QStringLiteral("HSlider"));
        sizePolicy1.setHeightForWidth(HSlider->sizePolicy().hasHeightForWidth());
        HSlider->setSizePolicy(sizePolicy1);
        HSlider->setOrientation(Qt::Vertical);

        gridLayout_3->addWidget(HSlider, 0, 1, 3, 1);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(spinBox, 1, 0, 1, 1);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 2, 0, 1, 1);

        splitter->addWidget(frame);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 1);

        TestForm->setCentralWidget(centralWidget);

        retranslateUi(TestForm);
        QObject::connect(HSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), HSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), counter, SLOT(setDigits(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), counter, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(comboBox_2, SIGNAL(currentIndexChanged(QString)), counter, SLOT(setDigitsFile(QString)));

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TestForm);
    } // setupUi

    void retranslateUi(QMainWindow *TestForm)
    {
        TestForm->setWindowTitle(QApplication::translate("TestForm", "AnalogWidgets", 0));
        stackedWidget->setTabText(stackedWidget->indexOf(wallclock_tab), QApplication::translate("TestForm", "WallClock", 0));
        stackedWidget->setTabText(stackedWidget->indexOf(tab_6), QApplication::translate("TestForm", "Manometer", 0));
        stackedWidget->setTabText(stackedWidget->indexOf(thermometer_tab), QApplication::translate("TestForm", "Thermometer", 0));
#ifndef QT_NO_TOOLTIP
        counter->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        counter->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("TestForm", ":/default/resources/train_digits.svg", 0)
         << QApplication::translate("TestForm", ":/test/resources/digits.svg", 0)
        );
        stackedWidget->setTabText(stackedWidget->indexOf(counter_tab), QApplication::translate("TestForm", "Counter", 0));
        stackedWidget->setTabText(stackedWidget->indexOf(potentiometer_tab), QApplication::translate("TestForm", "Potentiometer", 0));
        zoomBox->setPrefix(QApplication::translate("TestForm", "zoom ", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("TestForm", "value", 0)
         << QApplication::translate("TestForm", "minimum", 0)
         << QApplication::translate("TestForm", "maximum", 0)
         << QApplication::translate("TestForm", "nominal", 0)
         << QApplication::translate("TestForm", "critical", 0)
         << QApplication::translate("TestForm", "digitOffset", 0)
         << QApplication::translate("TestForm", "valueOffset", 0)
        );
        pushButton->setText(QApplication::translate("TestForm", "Test", 0));
    } // retranslateUi

};

namespace Ui {
    class TestForm: public Ui_TestForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTFORM_H
