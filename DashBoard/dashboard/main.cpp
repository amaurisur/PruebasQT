#include <QApplication>
// #include <QQmlApplicationEngine>
#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Dialog consolaTrain;
    consolaTrain.show();

    //QQmlApplicationEngine engine;
    //engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
