#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::make_choice()
{
    choice_r = rand()%3;
    choice_program = choices[choice_r];
}

QString MainWindow::check_winner()
{
    if (choice_program==choice_human)
    {
        return "Нічия";
    }
    else
    {
        if((choice_r+1)%3==choice_h)
        {
            return "Перемога програми";
        }
        else
        {
            return "Перемога людини";
        }
    }
}

void MainWindow::display(QString result)
{
    ui->label_3->setText(choice_program);
    ui->label_4->setText(result);
}

void MainWindow::on_pushButton_rock_clicked()
{
    choice_h = 0;
    choice_human = choices[choice_h];
    make_choice();
    QString result = check_winner();
    display(result);
}


void MainWindow::on_pushButton_scis_clicked()
{
    choice_h = 1;
    choice_human = choices[choice_h];
    make_choice();
    QString result = check_winner();
    display(result);
}


void MainWindow::on_pushButton_paper_clicked()
{
    choice_h = 2;
    choice_human = choices[choice_h];
    make_choice();
    QString result = check_winner();
    display(result);
}

