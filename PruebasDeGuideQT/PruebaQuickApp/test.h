#ifndef TEST
#define TEST


#include "ui_testform.h"

#include <QMainWindow>

    class ManoMeter;
    class ThermoMeter;
    class Chart;


    class TestWidget : public QMainWindow,  private Ui::TestForm
    {
        Q_OBJECT
    public:
        TestWidget(QMainWindow *parent = 0);
        /** Inicjuje podstawową geometrię oraz komponenty na formie */
        void initialize();

        /** Inicjuje wykres */
        void initCharts();

        /** Generuje płączenia pomiędzy sygnałami i slotami */
        void connections();
    public slots:
        void ComboBoxChoiceChanged(int index );
        void SpinBoxValueChanged(int val);
    void WidgetTest();
        void tabChange(int i);
    void movePosition(int val);
    void setSize(int val);
    void loadInjection(const QString &  file );


    private:
    /** Gdy zamykane jest okno */
    void closeEvent ( QCloseEvent * e );
        /** Wczytuje dane przykładowego wtrysku i pokazuje je na wykresie */


    // Potencjometr
    ManoMeter * bar;
    // Termometr
    ThermoMeter * thermo;
    // Wykres
    Chart * chart;
    };


#endif // TEST

