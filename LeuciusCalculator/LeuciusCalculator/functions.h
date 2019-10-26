#pragma once
#include <fstream>
#include <iostream>
#include <vector>
void buildWeapon();
int readFile(std::string fileName, std::vector<Weapon> *list);
int decodeDice();
