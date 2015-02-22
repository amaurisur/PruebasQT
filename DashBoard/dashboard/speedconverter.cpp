#include "speedconverter.h"

SpeedConverter::SpeedConverter(int v,QObject *parent) : QObject(parent)
{
    if (v && v>=0){
        m_velocidad = v;
    }else{
        this->m_velocidad = 0;
    }
}

SpeedConverter::~SpeedConverter()
{

}

int SpeedConverter::getVelocidadMPH()const{
    //Arreglar casting y dejar 0.62
    return (m_velocidad * 2 );
}

int SpeedConverter::getVelocidadKMH()const{
    return this->m_velocidad;
}

void SpeedConverter::setVelocidad(int v){
    if(this->m_velocidad == v) return;
    this->m_velocidad = v;
    emit velocidadChanged(getVelocidadKMH());
    emit velocidadChangedMPH(getVelocidadMPH());
}
