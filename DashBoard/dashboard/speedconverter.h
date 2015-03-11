#ifndef SPEEDCONVERTER_H
#define SPEEDCONVERTER_H

/**
 * La clase speedconverter hace de intermediario entre un source (modelo generador de velocidad, para este ejemplo es la palanca de la UI,
 * podria venir de algun motor grafico tambien) y un target (view el cual esta interesado en la actualizacion de ese dato/velocidad). En este
 * SpeedConverter normaliza la velocidad para los diferentes interesado, para el ejemplo convierte a mph y kmh.
 */

#include <QObject>

class SpeedConverter : public QObject
{
    Q_OBJECT
public:
    /**
     * @brief SpeedConverter
     * @param base
     * @param parent
     */
    explicit SpeedConverter(int base, QObject *parent = 0);
    ~SpeedConverter();
    int getVelocidadMPH() const;
    int getVelocidadKMH() const;
    double getVelocidadDouble() const;

signals:
    /**
     * Emite estas senales las cuales son subscripta por los interesado, para el ejemplo son las tres formas de visualizar la velocidad
     * LDC kmh, LCD mph, velocimetro analogico en kmh
     */
    void velocidadChanged(int);
    void velocidadChangedMPH(int);
    void velocidadChangedDouble(double);

public slots:
    /**
     * Es notificado cuando el potenciometro (la palanca en UI) varia su velocidad.
     */
    void setVelocidad(int);

private:
    /**
     * @brief m_velocidad
     * Es suficiente con usar una sola variable como descriptora del estado de la velocidad, ya que la misma es una sola.
     * Se escriba en millas por hora o km por hora.
     */
    double m_velocidad;
};

#endif // SPEEDCONVERTER_H
