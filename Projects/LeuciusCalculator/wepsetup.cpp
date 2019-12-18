#include "wepsetup.h"
#include "ui_wepsetup.h"
#include "Weapon.h"
#include <fstream>

extern std::vector <Weapon> weaponList;
extern std::string fileName;
extern bool isOK;
Weapon newWep;
std::string fileOut;
wepSetup::wepSetup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wepSetup)
{
    ui->setupUi(this);

    //QString print;
    //for(int i = 0;i < weaponList.size();i++)
    //{
    //    print+=(QString::fromStdString(weaponList[i].getName()) + "\n");
   // }
   // ui->fOut->setText(print);
       ui->bonus->setRange(0,5);
}

wepSetup::~wepSetup()
{
    delete ui;
}


void wepSetup::on_cancel_clicked()
{
    isOK = true;
    this->close();
}

void wepSetup::on_wepName_editingFinished()
{
    newWep.setName(ui->wepName->text().toStdString());
    fileOut = newWep.getName() + ";" + newWep.printDanos()+ ";+" + QString::number(newWep.getBonus()).toStdString();
    ui->fOut->setText(QString::fromStdString(fileOut));
}

void wepSetup::on_addDamage_clicked()
{
    dano d;
    d.dice = (ui->dice->currentText().remove(0,1)).toInt();
    d.nDice = ui->ndice->text().toInt();
    d.type = ui->damage->currentText().toStdString();
    newWep.addDano(d);
    fileOut = newWep.getName() + ";" + newWep.printDanos()+ ";+" + QString::number(newWep.getBonus()).toStdString();
    ui->fOut->setText(QString::fromStdString(fileOut));
}

void wepSetup::on_bonus_valueChanged(int arg1)
{
 newWep.setBonus(arg1);
 fileOut = newWep.getName() + ";" + newWep.printDanos()+ ";+" + QString::number(newWep.getBonus()).toStdString();
 ui->fOut->setText(QString::fromStdString(fileOut));

}

void wepSetup::on_confirm_clicked()
{
    std::fstream arq;
    arq.open(fileName, std::fstream::app);
    if (arq.is_open() == 0)
    {
        std::cout << "deu caca" << std::endl;
        isOK = true;
        this->close();
    }
    else
    {
        arq << fileOut + "\n";
        arq.close();
        weaponList.push_back(newWep);
        isOK = false;
        this->close();
    }

}
