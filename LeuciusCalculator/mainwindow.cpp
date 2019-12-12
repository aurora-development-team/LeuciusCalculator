#include "mainwindow.h"
#include "ui_mainwindow.h"
int monsterAC = 0;
int nAtk = 0;
int atkRoll = 0;
int atkDmg = 0;
int arma;
char menu = 0;

int profBonus = 0;
int statMod = 0;
std::vector <Weapon> weaponList;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    srand(time(NULL));
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
    atkRoll = statMod + profBonus + weaponList[arma].getBonus();
    atkDmg = statMod + weaponList[arma].getBonus();
   ui->output->setText( QString::fromStdString(calculate(nAtk, atkRoll, weaponList, arma, atkDmg, monsterAC)));
}

void MainWindow::on_weaponBox_activated(int index)
{
    arma = index;
    ui->bonVal->setText(QString::number(weaponList[index].getBonus()));
    ui->dmgVal->setText(QString::fromStdString(weaponList[index].printDanos()));
}



void MainWindow::on_enemyACVal_valueChanged(int arg1)
{
    monsterAC = arg1;
}


void MainWindow::on_profVal_valueChanged(int arg1)
{
   profBonus = arg1;
}

void MainWindow::on_statVal_valueChanged(int arg1)
{
    statMod = arg1;
}

void MainWindow::on_numAtkVal_valueChanged(int arg1)
{
    nAtk = arg1;
}

void MainWindow::on_newWep_clicked()
{
    wepSetup *set = new wepSetup;
    set->setAttribute(Qt::WA_DeleteOnClose);
    set->show();
}
