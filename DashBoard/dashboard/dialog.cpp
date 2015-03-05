#include "dialog.h"
#include "ui_dialog.h"
#include "botonerapuerta.h"

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
    connect(this->speedConverter,SIGNAL(velocidadChanged(int)),this,SLOT(actualizaVelocimetro(int)));

    //Maquina de estados Botonera Puertas (Derecha)
    connect(ui->dial,SIGNAL(valueChanged(int)),this,SLOT(MachineBotonesPuertas(int)));


    // Configuracion connect de Maquina de Estados Hombre Vivo
    connect(ui->dial,SIGNAL(valueChanged(int)),this,SLOT(initMaquinaHombreVivo(int)));

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

    //Agregamos el velocimetro al dashboard
    ui->verticalLayout->addWidget(velocimetroAnalogico);

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

void Dialog::actualizarHombreMuerto(){

    this->State_HombreMuerto->assignProperty(ui->button_HombreMuerto,"text","Hombre Muerto");

}

boolean Dialog::MachineBotonesPuertas(int a){

    if (a == 0){
        this->machineBotoneraDerecha->offBotonera();
        this->machineBotoneraIzquierda->offBotonera();
    };
    if (a == 1){
        this->machineBotoneraDerecha = new BotoneraPuerta(1,true,ui,this);
        //Cambiar por machine.isRunning
    };
    if (a == 2){
        this->machineBotoneraIzquierda = new BotoneraPuerta(2,false,ui,this);
    };

    return(true);
}

boolean Dialog::initMaquinaHombreVivo(int pos){

    //Inicio la maquina de estados
    this->State_StartSistemaHombreVivo = new QState();
    this->State_EndSistemaHombreVivo = new QFinalState();
    this->State_Hombrevivo = new QState();
    this->State_HombreMuerto = new QState();

    this->State_StartSistemaHombreVivo->assignProperty(ui->button_HombreVivo,"text","you are ready");
    this->State_StartSistemaHombreVivo->assignProperty(ui->button_HombreMuerto,"text","I'm  watching you");
    
    this->State_StartSistemaHombreVivo->addTransition(ui->dial,SIGNAL(valueChanged(int)),this->State_Hombrevivo);
    this->State_Hombrevivo->addTransition(ui->button_HombreVivo,SIGNAL(clicked()),this->State_HombreMuerto);
    this->State_HombreMuerto->addTransition(ui->button_HombreMuerto,SIGNAL(clicked()),this->State_Hombrevivo);
    //this->State_HombreMuerto->addTransition(TIMER,SIGNAL(),this->State_EndSistemaHombreVivo);
    
    this->machineHombreVivo.addState(State_StartSistemaHombreVivo);
    this->machineHombreVivo.addState(State_EndSistemaHombreVivo);
    this->machineHombreVivo.addState(State_Hombrevivo);
    this->machineHombreVivo.addState(State_HombreMuerto);
    
//    //QPushButton *button = ...;
//    //QState *s1 = ...;
//    //QState *s2 = ...;
//    // If in s1 and the button receives an Enter event, transition to s2
//    QEventTransition *enterTransition = new QEventTransition(ui->button_HombreVivo, QEvent::Enter);
//    //enterTransition->connect()
//    //enterTransition->setTargetState(this->State_HombreMuerto);
//    //this->State_HombreMuerto
//    //enterTransition->connect(ui->button_HombreVivo,SIGNAL(clicked()),this->State_HombreMuerto);


//    this->State_Hombrevivo->addTransition(enterTransition);
//    // If in s2 and the button receives an Exit event, transition back to s1
//    QEventTransition *leaveTransition = new QEventTransition(ui->button_HombreMuerto, QEvent::Leave);
//    leaveTransition->setTargetState(this->State_Hombrevivo);
//    this->State_HombreMuerto->addTransition(leaveTransition);
//   // this->State_Hombrevivo->addTransition(ui->button_HombreVivo,SIGNAL(clicked()),this->State_HombreMuerto);



//    this->machineHombreVivo.setInitialState(State_StartSistemaHombreVivo);
//    this->machineHombreVivo.start();

//    return (this->machineHombreVivo.isRunning() ? true:false);
    
}

//
//class StateButtonSubte : public
