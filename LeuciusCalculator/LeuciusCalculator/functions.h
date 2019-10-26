#pragma once
#include <fstream>
#include <iostream>
#include <vector>
void buildWeapon();
int readFile(std::string fileName, std::vector<Weapon> *list);
int decodeDice();
void findDamageType(std::vector<printdano> &d, std::string type, int val);
