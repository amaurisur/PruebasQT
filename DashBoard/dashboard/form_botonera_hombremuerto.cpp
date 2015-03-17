#include "form_botonera_hombremuerto.h"
#include "ui_form_botonera_hombremuerto.h"

Form_botonera_hombreMuerto::Form_botonera_hombreMuerto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_botonera_hombreMuerto)
{
    ui->setupUi(this);

    //Configuro el Root Objects de la Vista asociada
    this->qmlView = ui->quickWidget->rootObject();

    //Creo la Maquina de Estado
    this->machine_HombreMuerto = new QStateMachine();
    this->state_alarma = new QState();
    this->state_safe = new QState();
    this->state_final = new QFinalState();

    //Agregro los estados
    this->machine_HombreMuerto->addState(state_alarma);
    this->machine_HombreMuerto->addState(state_safe);
    this->machine_HombreMuerto->addState(state_final);

    //Creo los timer
    this->timer_died = new QTimer(state_alarma);
    this->timer_safe = new QTimer(state_safe);

    //Configuro los timer
    this->timer_died->setInterval(5000); //Va con un random
    this->timer_safe->setInterval(3000);

    //Conexiones SIGNAL-SLOTS
    QObject::connect(state_safe,SIGNAL(entered()),this,SLOT(on_rutinaSafe()));
    QObject::connect(state_alarma,SIGNAL(entered()),timer_died,SLOT(start()));
    QObject::connect(state_final,SIGNAL(entered()),this,SLOT(do_rutinaMurio()));
    //Prender Rojo
    QObject::connect(timer_safe,SIGNAL(timeout()),this, SLOT(on_rutinaAlarma()));//Prender Rojo

    //Transiciones
    state_safe->addTransition(timer_safe,SIGNAL(timeout()),state_alarma);
    state_alarma->addTransition(timer_died,SIGNAL(timeout()),state_final);
    state_alarma->addTransition(this->qmlView,SIGNAL(blueClicked()),state_safe);

    //Set Inicial state
    this->machine_HombreMuerto->setInitialState(this->state_safe);

    //Set property
    //state_alarma->assignProperty()

}

void Form_botonera_hombreMuerto::on_rutinaSafe(){

    QVariant returnedValue("Error");
    QMetaObject::invokeMethod(this->qmlView, "light_blueButton", Q_RETURN_ARG(QVariant, returnedValue),Q_ARG(QVariant, "ON"));
    QMetaObject::invokeMethod(this->qmlView, "light_redButton", Q_RETURN_ARG(QVariant, returnedValue),Q_ARG(QVariant, "OFF"));

    qDebug() << "<---- Estado Luz Boton Azul: ----->  " << returnedValue;

    timer_safe->start();
}


void Form_botonera_hombreMuerto::on_rutinaAlarma(){

    QVariant returnedValue("Error");
    QMetaObject::invokeMethod(this->qmlView, "light_redButton", Q_RETURN_ARG(QVariant, returnedValue),Q_ARG(QVariant, "ON"));

    qDebug() << "<---- Estado Luz Roja: ----->  " << returnedValue;
}

void Form_botonera_hombreMuerto::on_SistemaHombreMuerto(){

    this->machine_HombreMuerto->start();

}

void Form_botonera_hombreMuerto::off_SistemaHombreMuerto(){

   this->machine_HombreMuerto->stop();

}

void Form_botonera_hombreMuerto::do_rutinaMurio(){
    qDebug() << "<------ Disparo de alarma hombre Muerto ------> " << this->state_final->objectName();
    this->machine_HombreMuerto->stop();
    qDebug() << "Maquina Parada";
}

Form_botonera_hombreMuerto::~Form_botonera_hombreMuerto()
{
    delete ui;
}


/*
ui->quickWidget->setSource(QUrl("qrc:/tunningButton.qml"));
QQuickItem *qmlView = ui->quickWidget->rootObject();
QObject *button = qmlView ->findChild<QObject*>("blueL");
connect(button, SIGNAL(blueLeftSignal(int)),this, SLOT(changeStateLights(int)));

ui->blueButton->setSource(QUrl("qrc:/ButtonQML.qml"));
QObject *blue = ui->quickWidget->rootObject()->findChild<QObject*>("button");
connect(blue, SIGNAL(clicked()),this, SLOT(recive()));
ui->blueButton->setClearColor(Qt::transparent);
ui->blueButton->setAttribute(Qt::WA_AlwaysStackOnTop);
*/
