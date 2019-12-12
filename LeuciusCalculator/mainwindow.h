#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Weapon.h"
#include "functions.h"
#include "wepsetup.h"
#include <ctime>



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
    void on_Calcular_clicked();


    void on_weaponBox_activated(int index);


    void on_enemyACVal_valueChanged(int arg1);


    void on_profVal_valueChanged(int arg1);

    void on_statVal_valueChanged(int arg1);

    void on_numAtkVal_valueChanged(int arg1);

    void on_newWep_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
