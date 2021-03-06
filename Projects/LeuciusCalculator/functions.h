#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string.h>
#include "Weapon.h"
void buildWeapon();
int readFile(std::string fileName, std::vector<Weapon> *list);
int decodeDice();
void findDamageType(std::vector<printdano> &d, std::string type, int val);
void config(int& monsterAC, int& arma, int& nAtk, int& atkRoll, int& atkDmg);
std::string calculate(int nAtk, int  atkRoll, std::vector <Weapon>& weaponList, int arma, int atkDmg, int monsterAC);
int addWeapon(std::string fileName);
void printMenu();
void printList(std::vector<Weapon>& weaponList);
int editWeapon(std::vector<Weapon>& weaponList);
void editMenu();
