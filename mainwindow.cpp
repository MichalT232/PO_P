#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     QMessageBox::information(this, "kalkulator", "Autor: Michal Tasior");
    memory = 0;
    operand = 0;
    operation = '\0';
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::getDisplayValue()
{
    return ui->display->text().toDouble();
}

void MainWindow::setDisplayValue(double value)
{
    ui->display->setText(QString::number(value));
}

// Dodawanie cyfr do wyświetlacza
void MainWindow::appendDigit(QString digit)
{
    ui->display->setText(ui->display->text() + digit);
}

void MainWindow::on_wynik_clicked()
{
    double secondOperand = getDisplayValue();
    double result = 0;
    if ((operation == '/' || operation == '%') && secondOperand == 0)
    {
        QMessageBox::critical(this, "blad", "Pamietaj GOACIK`u nie dziel przez 0");
        return;
    }

    switch (operation)
    {
    case '+': result = operand + secondOperand; break;
    case '-': result = operand - secondOperand; break;
    case '*': result = operand * secondOperand; break;
    case '/': result = (secondOperand != 0) ? operand / secondOperand : 0; break;
    case '%': result = fmod(operand, secondOperand); break;
    default: result = secondOperand; break;
    }

    setDisplayValue(result);
    operand = 0;
    operation = '\0';
}


void MainWindow::on_dziel_clicked()
{
    operand = getDisplayValue(); ui->display->clear(); operation = '/';
}


void MainWindow::on_b0_clicked()
{
  appendDigit("0");
}


void MainWindow::on_modulo_clicked()
{
    operand = getDisplayValue(); ui->display->clear(); operation = '%';
}


void MainWindow::on_mnoz_clicked()
{
    operand = getDisplayValue(); ui->display->clear(); operation = '*';
}


void MainWindow::on_b3_clicked()
{
    appendDigit("3");
}


void MainWindow::on_b2_clicked()
{
    appendDigit("2");
}


void MainWindow::on_b1_clicked()
{
    appendDigit("1");
}


void MainWindow::on_minus_clicked()
{
    operand = getDisplayValue(); ui->display->clear(); operation = '-';
}


void MainWindow::on_b6_clicked()
{
    appendDigit("6");
}


void MainWindow::on_b5_clicked()
{
    appendDigit("5");
}


void MainWindow::on_b4_clicked()
{
    appendDigit("4");
}


void MainWindow::on_plus_clicked()
{
    operand = getDisplayValue(); ui->display->clear(); operation = '+';
}


void MainWindow::on_b9_clicked()
{
    appendDigit("9");
}


void MainWindow::on_b8_clicked()
{
    appendDigit("8");
}


void MainWindow::on_b7_clicked()
{
    appendDigit("7");
}


void MainWindow::on_clear_clicked()
{
    ui->display->clear();
    operand = 0;
    operation = '\0';
}


void MainWindow::on_pamiecdod_clicked()
{
    memory += getDisplayValue();
}


void MainWindow::on_pamiecclear_clicked()
{
    memory = 0;

}


void MainWindow::on_pamiecread_clicked()
{
    setDisplayValue(memory);

}

