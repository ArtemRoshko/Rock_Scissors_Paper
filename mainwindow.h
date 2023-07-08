#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_rock_clicked();

    void on_pushButton_scis_clicked();

    void on_pushButton_paper_clicked();

private:
    Ui::MainWindow *ui;
    QList<QString> choices = {"Камінь","Ножиці ","Папір"};
    QString choice_human, choice_program;
    int choice_r, choice_h;
    void make_choice();
    QString check_winner();
    void display(QString result);
};
#endif // MAINWINDOW_H
