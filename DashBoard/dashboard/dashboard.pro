TEMPLATE = app

TARGET = dashboard

QT += core gui widgets xml qml multimedia quickwidgets

SOURCES += main.cpp \
    speedconverter.cpp \
    dialog.cpp \
    source/qcgaugewidget.cpp \
    botonerapuerta.cpp \
    botonerahombrevivo.cpp \
    formaceite.cpp \
    lcd_tunning.cpp

RESOURCES += \
    recursossubte.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =
# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    speedconverter.h \
    dialog.h \
    source/qcgaugewidget.h \
    botonerapuerta.h \
    botonerahombrevivo.h \
    formaceite.h \
    lcd_tunning.h

FORMS += dialog.ui \
    botonerahombrevivo.ui \
    formaceite.ui

DISTFILES += \
    MedidorAceite.qml \
    MedidorAceite.qml

RESOURCES +=
