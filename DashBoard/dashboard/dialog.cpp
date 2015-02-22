#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //Velocidad de inicializacion a 0
    this->speedConverter = new SpeedConverter(0,this);

    connect(ui->palanca,SIGNAL(valueChanged(int)), this->speedConverter,SLOT(setVelocidad(int)));
    connect(this->speedConverter,SIGNAL(velocidadChanged(int)),ui->lcd_kmh,SLOT(display(int)));
    connect(this->speedConverter,SIGNAL(velocidadChangedMPH(int)),ui->lcd_mph,SLOT(display(int)));


}

Dialog::~Dialog()
{
    delete ui;
}

