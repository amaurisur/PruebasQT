#include "botonerahombrevivo.h"
#include "ui_botonerahombrevivo.h"

botoneraHombreVivo::botoneraHombreVivo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::botoneraHombreVivo)
{
    ui->setupUi(this);
    ui->quickWidget_BotonRojo->setSource(QUrl("qrc:/Botones/ButtonQML.qml"));
    ui->quickWidget_BotonVerde->setSource(QUrl("qrc:/Botones/ButtonQML.qml"));
}

botoneraHombreVivo::~botoneraHombreVivo()
{
    delete ui;
}
