TEMPLATE = app

TARGET = dashboard

QT += core gui widgets xml qml

SOURCES += main.cpp \
    speedconverter.cpp \
    dialog.cpp \
    source/qcgaugewidget.cpp \
    botonerapuerta.cpp

RESOURCES +=

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =
# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    speedconverter.h \
    dialog.h \
    source/qcgaugewidget.h \
    botonerapuerta.h

FORMS += dialog.ui

DISTFILES += \
    MedidorAceite.qml \
    MedidorAceite.qml

RESOURCES +=
