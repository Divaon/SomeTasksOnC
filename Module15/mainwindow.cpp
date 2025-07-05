#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBoxCurrency_1->addItem("USD");
    ui->comboBoxCurrency_1->addItem("EUR");
    ui->comboBoxCurrency_1->addItem("RUB");

    ui->comboBoxCurrency_2->addItem("USD");
    ui->comboBoxCurrency_2->addItem("EUR");
    ui->comboBoxCurrency_2->addItem("RUB");

    rubTousd = 0.5;
    rubToeuro = 0.333333;
    usdToeuro = 1.5;

    connect(ui->lineEditInput, &QLineEdit::textChanged, this, &MainWindow::collectInput);
    connect(ui->comboBoxCurrency_1, &QComboBox::currentIndexChanged, this, &MainWindow::collectInput);
    connect(ui->comboBoxCurrency_2, &QComboBox::currentIndexChanged, this, &MainWindow::collectInput);

    collectInput();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::collectInput()
{

    double inputValue = 0.0;
    bool ok = false;

    if (!ui->lineEditInput->text().isEmpty()) {
        inputValue = ui->lineEditInput->text().toDouble(&ok);
    }
    else if (ui->lineEditInput->text().isEmpty())
    {
        inputValue = 0.0;
        ok = true;
    }

    if (ok && inputValue >= 0) {
        updateConversion(inputValue);
    }
    else {
        ui->labelResult->setText("Ошибка ввода");
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите корректное положительное число");
    }
}

void MainWindow::updateConversion(double value)
{
    QString selectedCurrency_1 = ui->comboBoxCurrency_1->currentText();
    QString selectedCurrency_2 = ui->comboBoxCurrency_2->currentText();
    double convertedValue;

    if (selectedCurrency_2 == "USD" && selectedCurrency_1 == "RUB")
    {
        convertedValue = value * rubTousd;
    }
    else if (selectedCurrency_2 == "EUR" && selectedCurrency_1 == "RUB")
    {
        convertedValue = value * rubToeuro;
    }
    else if (selectedCurrency_2 == "RUB" && selectedCurrency_1 == "RUB")
    {
        convertedValue = value ;
    }

    else if (selectedCurrency_2 == "RUB" && selectedCurrency_1 == "EUR")
    {
        convertedValue = value/rubToeuro ;
    }
    else if (selectedCurrency_2 == "USD" && selectedCurrency_1 == "EUR")
    {
        convertedValue = value*usdToeuro ;
    }
    else if (selectedCurrency_2 == "EUR" && selectedCurrency_1 == "EUR")
    {
        convertedValue = value ;
    }


    else if (selectedCurrency_2 == "RUB" && selectedCurrency_1 == "USD")
    {
        convertedValue = value/rubTousd ;
    }
    else if (selectedCurrency_2 == "EUR" && selectedCurrency_1 == "USD")
    {
        convertedValue = value/usdToeuro ;
    }
    else if (selectedCurrency_2 == "USD" && selectedCurrency_1 == "USD")
    {
        convertedValue = value ;
    }

    ui->labelResult->setText(QString::number(convertedValue, 'f', 2));
}
