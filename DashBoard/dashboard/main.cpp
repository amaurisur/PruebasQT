#include <QApplication>
#include <QQmlApplicationEngine>
#include "dialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Dialog consolaTrain;
    consolaTrain.show();

    //QQmlApplicationEngine engine;
    //engine.load(QUrl(QStringLiteral("qrc:/MedidorAceite.qml")));

    return app.exec();
}
