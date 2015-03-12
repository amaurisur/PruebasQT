#ifndef FORM_BOTONERA_HOMBREMUERTO_H
#define FORM_BOTONERA_HOMBREMUERTO_H

#include <QWidget>

namespace Ui {
class Form_botonera_hombreMuerto;
}

class Form_botonera_hombreMuerto : public QWidget
{
    Q_OBJECT

public:
    explicit Form_botonera_hombreMuerto(QWidget *parent = 0);
    ~Form_botonera_hombreMuerto();

private:
    Ui::Form_botonera_hombreMuerto *ui;
};

#endif // FORM_BOTONERA_HOMBREMUERTO_H
