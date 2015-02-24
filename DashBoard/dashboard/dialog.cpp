#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog)
{

    this->vivo = new QState();
    this->muerto = new QState();

    ui->setupUi(this);

    //Velocidad de inicializacion a 0
    this->speedConverter = new SpeedConverter(0,this);

    connect(ui->palanca,SIGNAL(valueChanged(int)), this->speedConverter,SLOT(setVelocidad(int)));
    connect(this->speedConverter,SIGNAL(velocidadChanged(int)),ui->lcd_kmh,SLOT(display(int)));
    connect(this->speedConverter,SIGNAL(velocidadChangedMPH(int)),ui->lcd_mph,SLOT(display(int)));
    connect(this->speedConverter,SIGNAL(velocidadChanged(int)),this,SLOT(actualizaVelocimetro(int)));

    connect(ui->button_HombreVivo,SIGNAL(clicked()),this,SLOT(actualizarHombreMuerto()));

    //Velocimetro Analogico
    this->velocimetroAnalogico = new QcGaugeWidget;
    velocimetroAnalogico->addBackground(70);
    QcBackgroundItem *bkg1 = velocimetroAnalogico->addBackground(65);
    bkg1->addColor(0.1,Qt::black);
    bkg1->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg2 = velocimetroAnalogico->addBackground(58);
    bkg2->clearrColors();
    bkg2->addColor(0.1,Qt::gray);
    bkg2->addColor(1.0,Qt::darkGray);

    velocimetroAnalogico->addArc(25);
    velocimetroAnalogico->addDegrees(30)->setValueRange(0,100);
    velocimetroAnalogico->addColorBand(50);

    velocimetroAnalogico->addValues(40)->setValueRange(0,100);

    velocimetroAnalogico->addLabel(35)->setText("Km/h");
    QcLabelItem *lab = velocimetroAnalogico->addLabel(20);
    lab->setText("0");
    aguja = velocimetroAnalogico->addNeedle(60);
    aguja->setLabel(lab);
    aguja->setColor(Qt::white);
    aguja->setValueRange(0,100);
    velocimetroAnalogico->addBackground(7);
    velocimetroAnalogico->addGlass(60);
    ui->verticalLayout->addWidget(velocimetroAnalogico);

    int a;
    a = hombreVivo();
    //qDebug() << "HombreVivo Inicializado" << a;

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::actualizaVelocimetro(int value)
{
    aguja->setCurrentValue(value);
}

int Dialog::hombreVivo(){

    int a = 0;

    vivo->assignProperty(ui->button_HombreVivo,"text","Vivo");
    vivo->setObjectName("Vivo");

    muerto->assignProperty(ui->button_HombreMuerto,"text","Muerto!!");
    muerto->setObjectName("muerto");

    muerto->addTransition(ui->button_HombreMuerto, SIGNAL(clicked()), vivo);
    vivo->addTransition(ui->button_HombreVivo, SIGNAL(clicked()), muerto);

    this->machine.addState(vivo);
    this->machine.addState(muerto);

    this->machine.setInitialState(vivo);
    this->machine.start();

    a = 1;
    return a;
}

void Dialog::actualizarHombreMuerto(){

    ui->button_HombreMuerto->setText("i'm watching you");

}

