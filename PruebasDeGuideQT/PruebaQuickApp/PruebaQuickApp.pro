TEMPLATE = app

QT += qml quick widgets svg gui

RCC_DIR = .
UI_DIR = .


INCLUDEPATH += ../analogwidgets/analogwidgets \
               ../analogwidgets
SOURCES += main.cpp \
    widgetwithbackground.cpp \
    abstractmeter.cpp \
    functions.cpp \
    manometer.cpp \
    test.cpp \
    counter.cpp \
    widgettester.cpp

RESOURCES += test.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    manometer.h \
    abstractmeter.h \
    widgetwithbackground.h \
    functions.h \
    test.h \
    counter.h \
    widgettester.h

DISTFILES += \
    Notas.txt

FORMS += \
    testform.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../190214/AnalogWidgets/build-analogwidgets-Desktop_Qt_5_4_0_MinGW_32bit-Debug/ -lanalogwidgets
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../190214/AnalogWidgets/build-analogwidgets-Desktop_Qt_5_4_0_MinGW_32bit-Debug/ -lanalogwidgetsd
else:unix: LIBS += -L$$PWD/../../../190214/AnalogWidgets/build-analogwidgets-Desktop_Qt_5_4_0_MinGW_32bit-Debug/ -lanalogwidgets

INCLUDEPATH += $$PWD/../../../190214/AnalogWidgets/build-analogwidgets-Desktop_Qt_5_4_0_MinGW_32bit-Debug
DEPENDPATH += $$PWD/../../../190214/AnalogWidgets/build-analogwidgets-Desktop_Qt_5_4_0_MinGW_32bit-Debug
