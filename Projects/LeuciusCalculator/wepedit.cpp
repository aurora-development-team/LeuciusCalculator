#include "wepedit.h"
#include "ui_wepedit.h"
#include "Weapon.h"
#include <fstream>

extern std::vector <Weapon> weaponList;
extern std::string fileName;
extern bool isOK;
int wepIndex, damageIndex;
std::string printOut;
wepEdit::wepEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wepEdit)
{
    ui->setupUi(this);
    for(int i = 0;i < weaponList.size();i++)
    {
        ui->weaponbox->addItem(QString::fromStdString(weaponList[i].getName()));
    }
     ui->weaponbox->setCurrentIndex(-1);
}

wepEdit::~wepEdit()
{
    delete ui;
}



void wepEdit::on_weaponbox_activated(int index)
{
    wepIndex = index;
    ui->bonus->setValue(weaponList[index].getBonus());
    printOut = weaponList[index].getName() + ";" + weaponList[index].printDanos()+ ";+" + QString::number(weaponList[index].getBonus()).toStdString();
    ui->fOut->setText(QString::fromStdString(printOut));
    ui->DD->clear();
    for(int i = 0;i < weaponList[index].getDSize();i++)
    {
        QString box = QString::number(weaponList[index].getDano(i).nDice) + "d" + QString::number(weaponList[index].getDano(i).dice);
        box = box + " " + QString::fromStdString(weaponList[index].getDano(i).type);
        ui->DD->addItem(box);
    }
     ui->DD->setCurrentIndex(-1);
}

void wepEdit::on_DD_activated(int index)
{
    damageIndex = index;
    ui->ndice->setText(QString::number(weaponList[wepIndex].getDano(index).nDice));
    ui->dice->setCurrentText("d" + QString::number(weaponList[wepIndex].getDano(index).dice));
    ui->damage->setCurrentText(QString::fromStdString(weaponList[wepIndex].getDano(index).type));
}

void wepEdit::on_editDamage_clicked()
{
    weaponList[wepIndex].editDano(damageIndex, ui->ndice->text().toInt(),ui->dice->currentText().remove(0,1).toInt(), ui->damage->currentText().toStdString());
    ui->DD->clear();
    for(int i = 0;i < weaponList[wepIndex].getDSize();i++)
    {
        QString box = QString::number(weaponList[wepIndex].getDano(i).nDice) + "d" + QString::number(weaponList[wepIndex].getDano(i).dice);
        box = box + " " + QString::fromStdString(weaponList[wepIndex].getDano(i).type);
        ui->DD->addItem(box);
    }
    printOut = weaponList[wepIndex].getName() + ";" + weaponList[wepIndex].printDanos()+ ";+" + QString::number(weaponList[wepIndex].getBonus()).toStdString();
    ui->fOut->setText(QString::fromStdString(printOut));
}

void wepEdit::on_editDamage_2_clicked()
{
    if(weaponList[wepIndex].getDSize() == 1)
         ui->fOut->setText("Can't delete, weapon has only one damage dice");
    else
        (weaponList[wepIndex].removeDano(damageIndex));
    printOut = weaponList[wepIndex].getName() + ";" + weaponList[wepIndex].printDanos()+ ";+" + QString::number(weaponList[wepIndex].getBonus()).toStdString();
    ui->fOut->setText(QString::fromStdString(printOut));

    ui->DD->clear();
    for(int i = 0;i < weaponList[wepIndex].getDSize();i++)
    {
        QString box = QString::number(weaponList[wepIndex].getDano(i).nDice) + "d" + QString::number(weaponList[wepIndex].getDano(i).dice);
        box = box + " " + QString::fromStdString(weaponList[wepIndex].getDano(i).type);
        ui->DD->addItem(box);
    }
    ui->DD->setCurrentIndex(-1);
}

void wepEdit::on_delWep_clicked()
{
    weaponList.erase(weaponList.begin() + wepIndex);
    ui->weaponbox->clear();
    for(int i = 0;i < weaponList.size();i++)
    {
        ui->weaponbox->addItem(QString::fromStdString(weaponList[i].getName()));
    }

}
