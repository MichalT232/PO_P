#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_wynik_clicked();

    void on_dziel_clicked();

    void on_b0_clicked();

    void on_modulo_clicked();

    void on_mnoz_clicked();

    void on_b3_clicked();

    void on_b2_clicked();

    void on_b1_clicked();

    void on_minus_clicked();

    void on_b6_clicked();

    void on_b5_clicked();

    void on_b4_clicked();

    void on_plus_clicked();

    void on_b9_clicked();

    void on_b8_clicked();

    void on_b7_clicked();

    void on_clear_clicked();

    void on_pamiecdod_clicked();

    void on_pamiecclear_clicked();

    void on_pamiecread_clicked();

private:
    Ui::MainWindow *ui;
    double memory=0;
    double operand=0;
    char operation = '\0';
    double getDisplayValue();
    void setDisplayValue(double value);
    void appendDigit(QString digit);


};
#endif // MAINWINDOW_H
