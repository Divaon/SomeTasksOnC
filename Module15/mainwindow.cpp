#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->ComboBoxCurrency_1->addItem("USD");
    ui->ComboBoxCurrency_1->addItem("EUR");
    ui->ComboBoxCurrency_1->addItem("RUB");

    ui->ComboBoxCurrency_2->addItem("USD");
    ui->ComboBoxCurrency_2->addItem("EUR");
    ui->ComboBoxCurrency_2->addItem("RUB");

    RubToUsd = 0.5;
    RubToEuro = 0.333333;
    UsdToEuro = 1.5;

    connect(ui->LineEditInput, &QLineEdit::textChanged, this, &MainWindow::CollectInput);
    connect(ui->ComboBoxCurrency_1, &QComboBox::currentIndexChanged, this, &MainWindow::CollectInput);
    connect(ui->ComboBoxCurrency_2, &QComboBox::currentIndexChanged, this, &MainWindow::CollectInput);

    CollectInput();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::CollectInput()
{

    double inputValue = 0.0;
    bool ok = false;

    if (!ui->LineEditInput->text().isEmpty()) {
        inputValue = ui->LineEditInput->text().toDouble(&ok);
    }
    else if (ui->LineEditInput->text().isEmpty())
    {
        inputValue = 0.0;
        ok = true;
    }

    if (ok && inputValue >= 0) {
        UpdateConversion(inputValue);
    }
    else {
        ui->LabelResult->setText("Ошибка ввода");
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите корректное положительное число");
    }
}

void MainWindow::UpdateConversion(double value)
{
    QString SelectedCurrency_1 = ui->ComboBoxCurrency_1->currentText();
    QString SelectedCurrency_2 = ui->ComboBoxCurrency_2->currentText();
    double convertedValue;

    if (SelectedCurrency_2 == "USD" && SelectedCurrency_1 == "RUB")
    {
        convertedValue = value * RubToUsd;
    }
    else if (SelectedCurrency_2 == "EUR" && SelectedCurrency_1 == "RUB")
    {
        convertedValue = value * RubToEuro;
    }
    else if (SelectedCurrency_2 == "RUB" && SelectedCurrency_1 == "RUB")
    {
        convertedValue = value ;
    }

    else if (SelectedCurrency_2 == "RUB" && SelectedCurrency_1 == "EUR")
    {
        convertedValue = value/RubToEuro ;
    }
    else if (SelectedCurrency_2 == "USD" && SelectedCurrency_1 == "EUR")
    {
        convertedValue = value*UsdToEuro ;
    }
    else if (SelectedCurrency_2 == "EUR" && SelectedCurrency_1 == "EUR")
    {
        convertedValue = value ;
    }


    else if (SelectedCurrency_2 == "RUB" && SelectedCurrency_1 == "USD")
    {
        convertedValue = value/RubToUsd ;
    }
    else if (SelectedCurrency_2 == "EUR" && SelectedCurrency_1 == "USD")
    {
        convertedValue = value/UsdToEuro ;
    }
    else if (SelectedCurrency_2 == "USD" && SelectedCurrency_1 == "USD")
    {
        convertedValue = value ;
    }

    ui->LabelResult->setText(QString::number(convertedValue, 'f', 2));
}
