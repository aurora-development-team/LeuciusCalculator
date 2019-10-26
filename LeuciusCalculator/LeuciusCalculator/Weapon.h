#pragma once
#include<string>
#include <iostream>

typedef struct printdamage {
	
	int total;
	std::string type;
}printdano;

typedef struct damage {

	int nDice;
	int dice;
	std::string type;

}dano;
class Weapon
{
	std::string name;
	dano D[5];
	int bonus;
	int dSize;
public:
	Weapon();
	Weapon(dano d, int b, std::string s);
	void addDano(dano d);
	void setBonus(int n);
	int getBonus();
	void setName(std::string nome);
	std::string getName();
	void printDanos();
	dano getDano(int pos);
	int getDSize();
};