#include <QApplication>
#include <QObject>

#include "test.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TestWidget widget;
    widget.showFullScreen();
    return app.exec();
}
