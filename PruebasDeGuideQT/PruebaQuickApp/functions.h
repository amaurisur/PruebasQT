#ifndef FUNCTIONS
#define FUNCTIONS

#include <assert.h>
#include <cmath>
//#include <iostream> // para las pruebas

using namespace std;

/**
Encuentra más alto valor inferior a scaleSize / pasos y
al mismo tiempo ser completamente divisible por valor
10 ^ n donde n es cualquier número entero.
para 5,2,1 es {..., respectivamente, 500,50,5,0.5, ...},
{... 200,20,2,0.2,0.02, ...}, etc.
*/

double minimalStep(double scaleSize, int steps);


/**
Función de la plantilla para determinar la escala en el intervalo de un número especificado
de puntos de escala. Sobre la base de los valores mínimo y máximo que queremos establecer
el mín_m valor máx_m y así todo el rango de la escala (máx_m-mín_m) era divisible por el
número de puntos de la escala y la distancia entre la escala de puntos era un valor que es
un múltiplo de 5. Además, es posible cambiar la escala hacia la izquierda o hacia la derecha
para comenzar con tan cerca del mínimo o cerca de composición como el valor máximo.

param m_minimum - valor minimo en la escala que desea ver
param m_maximum - el valor máximo de la escala que desea ver
param mín_m - valor calculado de la escala inicial
param máx_m - valor calculado de la escala completa
param stesp - el número de nodos que es tener una escala
param izquierda - si la escala es estar alineados a la izquierda oa la derecha (por defecto a la derecha).
volver La función devuelve true si los valores y mín_m máx_m debido a cambios en el alcance de los cambios
en el valor. Sobre la base de este valor es conocido por ser tales Volver a dibujar escala -.
Dando antes de que los valores anteriores de la gama de escala.
*/

template <typename T>
bool range(T m_minimum, T m_maximum,
           T & m_min, T & m_max,
           unsigned int steps,
           bool left = false,
           double inc = 5.0)
{
  //cout<<"("<<m_minimum<<","<<m_maximum<<")  ("<<m_min<<","<<m_max<<")"<<endl;
  T max_tmp = m_max, min_tmp = m_min;
  m_max=m_maximum;
  m_min=m_minimum;
  assert( m_max > m_min );
  //  assert( (m_max - m_min) > 0 );
  //  if (m_max<0) left!=left;

  T diff = abs(m_max - m_min);
  T scale = 0, factor = 0 ;

  while (inc * steps > (m_maximum-m_minimum))
  if (inc/10 > 0 ) inc/=10;
  else break;

  bool done = false;
  while ( diff > scale )
   { factor+=static_cast<T>(inc);  scale = factor * steps;  }

  while (!done)
  {

    // truco sucio para tener cero igual exactamente cero
    if (m_max<0)  m_max=m_min - fmodf(m_min,steps);
    else m_max = 0.0;

     while ( m_max < m_maximum ) m_max +=factor;
     m_min = m_max - scale;
     if (m_min <= m_minimum ) done = true;
     else { factor+=static_cast<T>(inc); scale = factor * steps; }
  }
  //Un ajuste de la balanza no se moverá a la izquierda en el eje X
  if (left)
    while (m_min + factor <= m_minimum)
    {
        m_min+=factor;
        m_max+=factor;
    }
//  cout<<"Min:"<<m_min<<" Max:"<<m_max<<endl;
 return (m_max != max_tmp) | (m_min != min_tmp);
}



#endif // FUNCTIONS

