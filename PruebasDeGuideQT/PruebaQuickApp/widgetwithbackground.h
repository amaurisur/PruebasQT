#ifndef WIDGETWITHBACKGROUND
#define WIDGETWITHBACKGROUND

#include <QWidget>
/*
* The QPixmap class is an off-screen image representation that can be used as a paint device.
*/
class QPixmap;

class WidgetWithBackground : public QWidget
{
    Q_OBJECT
public:
    //Constructor
    WidgetWithBackground(QWidget * parent =0);
    ~WidgetWithBackground();
    /* Controles de operación -
       mapa de bits con el fondo con el control
       generarlo antes si es necesario.
    */
    void drawBackground();
    void updateWithBackground();
    bool doRepaintBackground();

protected:
    void repaintBackground();
    /* Repintado de fondo del control
     * dispositivo pintor,
     * fondo es el fondo del control.....
    */
    virtual void paintBackground (QPainter & painter) = 0;

protected:
    //Buffer del fondo
    QPixmap * m_pixmap;
    //Establezca esta variable cuando cambia las propiedades
    bool m_modified;
};

#endif // WIDGETWITHBACKGROUND

