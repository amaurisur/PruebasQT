#include "formaceite.h"
#include "ui_formaceite.h"
#include <QQuickView>
#include <QQuickItem>

FormAceite::FormAceite(QWidget *parent, QUrl qurl) :
    QWidget(parent),
    ui_formAceite(new Ui::FormAceite)
{
    ui_formAceite->setupUi(this);
    ui_formAceite->quickWidget_aceiteMedidor->setSource(QUrl("qrc:/MedidorAceite.qml"));
}

void FormAceite::setVelocidad(double value)
{
    QQuickItem *medidor = ui_formAceite->quickWidget_aceiteMedidor->rootObject();
    QQuickItem *dial = medidor->findChild<QQuickItem*>("agujaImagen");
    dial->setProperty("rotation",value);
}

FormAceite::~FormAceite()
{
    delete ui_formAceite;
}
