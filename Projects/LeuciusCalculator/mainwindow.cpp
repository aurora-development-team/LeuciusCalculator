#include "mainwindow.h"
#include "ui_mainwindow.h"
int monsterAC = 0;
int nAtk = 0;
int atkRoll = 0;
int atkDmg = 0;
int arma;
char menu = 0;
std::vector <Weapon> weaponList;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    readFile("weaponFile.txt", &weaponList);

    ui->setupUi(this);
    for(int i = 0;i < weaponList.size();i++)
    {
        ui->weaponBox->addItem(QString::fromStdString(weaponList[i].getName()));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Calcular_clicked()
{
    calculate(nAtk, atkRoll, weaponList, arma, atkDmg, monsterAC);
}

void MainWindow::on_weaponBox_activated(int index)
{
    arma = index;
    ui->bonVal->setText(QString::number(weaponList[index].getBonus()));
    ui->dmgVal->setText(QString::fromStdString(weaponList[index].printDanos()));
    atkDmg += weaponList[index].getBonus();
    atkRoll += weaponList[index].getBonus();
}
