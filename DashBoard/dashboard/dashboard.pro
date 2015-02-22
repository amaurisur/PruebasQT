TEMPLATE = app

TARGET = dashboard

QT += core gui widgets

SOURCES += main.cpp \
    speedconverter.cpp \
    dialog.cpp

# RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    speedconverter.h \
    dialog.h

FORMS += dialog.ui
