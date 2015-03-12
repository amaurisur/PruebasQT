#include "form_botonera_hombremuerto.h"
#include "ui_form_botonera_hombremuerto.h"

Form_botonera_hombreMuerto::Form_botonera_hombreMuerto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_botonera_hombreMuerto)
{
    ui->setupUi(this);
}

Form_botonera_hombreMuerto::~Form_botonera_hombreMuerto()
{
    delete ui;
}
