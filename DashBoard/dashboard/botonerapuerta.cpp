#include "botonerapuerta.h"
#include "dialog.h"

BotoneraPuerta::BotoneraPuerta(int estado, QVariant der, Ui::Dialog *ui, QObject *parent)
{
    this->ui = ui;
    parent = parent;
    this->m_estado = estado;

    //Maquina de estados para rojo verde de puertas laterales
    this->machine_puertas = new QStateMachine();
    this->state_abierta = new QState();
    this->state_cerrada = new QState();

    this->machine_puertas->addState(this->state_abierta);
    this->machine_puertas->addState(this->state_cerrada);

    //Discrimina si es derecha o izquierda
    if (der.toBool()){
            this->state_abierta->assignProperty(ui->boton_der_verde,"text","ABIERTA");
            this->state_abierta->assignProperty(ui->botton_der_rojo,"text","<-----");
            this->state_cerrada->assignProperty(ui->boton_der_verde,"text","------>");
            this->state_cerrada->assignProperty(ui->botton_der_rojo,"text","CERRADA");

            this->state_abierta->addTransition(ui->botton_der_rojo,SIGNAL(clicked()),this->state_cerrada);
            this->state_cerrada->addTransition(ui->boton_der_verde,SIGNAL(clicked()),this->state_abierta);
    }else{
        this->state_abierta->assignProperty(ui->button_izq_verde,"text","ABIERTA");
        this->state_abierta->assignProperty(ui->button_izq_rojo,"text","<-----");
        this->state_cerrada->assignProperty(ui->button_izq_verde,"text","------>");
        this->state_cerrada->assignProperty(ui->button_izq_rojo,"text","CERRADA");

        this->state_abierta->addTransition(ui->button_izq_rojo,SIGNAL(clicked()),this->state_cerrada);
        this->state_cerrada->addTransition(ui->button_izq_verde,SIGNAL(clicked()),this->state_abierta);
    }

    //1 abierta 0 cerrada
    if (estado == 1){
        this->machine_puertas->setInitialState(this->state_abierta);
    }else{
        this->machine_puertas->setInitialState(this->state_cerrada);
    }

    this->machine_puertas->start();

}


void BotoneraPuerta::offBotonera(){

    this->machine_puertas->stop();
}

void BotoneraPuerta::onBotonera(){
    this->machine_puertas->start();
}

BotoneraPuerta::~BotoneraPuerta()
{

}
