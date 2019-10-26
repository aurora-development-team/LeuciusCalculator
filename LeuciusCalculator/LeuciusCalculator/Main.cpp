#define d4 ((rand() % 4) + 1)
#define d6 ((rand() % 6) + 1)
#define d8 ((rand() % 8) + 1)
#define d10 ((rand() % 10) + 1)
#define d12 ((rand() % 12) + 1)
#define d20 ((rand() % 20) + 1)

#include <cstdlib>
#include <ctime>
#include "Weapon.h"
#include "functions.h"


int main () {

	/*
	input ACC do brother
	input bonus atk roll
	input bonus atk dmg
	input arma
		[

		poison dagger;d4 slashing + d10 poison; +1

		angelic lance;d10 slashing + d8 radiant; +2

		katana da meredith;

		cin >> line 2
		]


	output:
		numero de ataques que acertaram
		numero de criticos
		ele para quando 1 no dado e diz que teve erro critico
		printa n ataques
		dano total e dano separado por tipo (poison, slashing, etc)
	*/
	int diceRoll, atk;
	int monsterAC = 0;
	int nAtk = 0;
	int atkRoll = 0;
	int atkDmg = 0;
	int timesAttacked;
	int damage = 0;
	int hits = 0;
	int arma;
	std::vector <Weapon> weaponList;
	std::vector <printdano> danos;
	readFile("weaponFile.txt", &weaponList);


	srand(time(NULL));

	//INPUTS:

	//acc
	std::cout << "ACC do inimigo: " << std::endl;
	std::cin >> monsterAC;
	//arma
	std::cout << "Escolha a arma: " << std::endl;
	std::cin >> arma;
	std::cout << "Voce escolheu " << weaponList[arma].getName() << std::endl;
	//número de ataques
	std::cout << "Número de ataques: " << std::endl;	
	std::cin >> nAtk;
	//roll
	std::cout << "Bonus ATK ROLL: " << std::endl;
	std::cin >> atkRoll;
	//dmg
	std::cout << "Bonus ATK DMG: " << std::endl;
	std::cin >> atkDmg;
	std::cout << std::endl;

	//OUTPUTS:
	timesAttacked = 1;
	while (timesAttacked <= nAtk) {

		diceRoll = d20;
		if (diceRoll == 1)
		{
			std::cout << "Crit fail at " << timesAttacked << " attacks" << std::endl << std::endl;
			break;
		}
		atk = diceRoll + atkRoll;
		if (diceRoll == 20)
		{
			std::cout << "CRIT" << std::endl << std::endl;

		//	damage = damage + 24 + 16 + 36 + 24 + atkDmg + 4 *((rand() % 6) + 1) + 2 * ((rand() % 8) + 1) + 6 * ((rand() % 6) + 1) + 3 * ((rand() % 8) + 1);
			for (int i = 0; i < weaponList[arma].getDSize(); i++)
			{
				int partial = weaponList[arma].getDano(i).nDice * weaponList[arma].getDano(i).dice;
			//	std::cout << partial << " " << weaponList[arma].getDano(i).type << " damage" << std::endl;
				findDamageType(danos, weaponList[arma].getDano(i).type, partial);
				damage = damage + partial;
			}
			findDamageType(danos, weaponList[arma].getDano(0).type, atkDmg);
			damage = damage + atkDmg;
			hits++;
			
		}
		else if (atk > monsterAC)
		{
			//damage = damage + 4 * ((rand() % 6) + 1) + 2 * ((rand() % 8) + 1) + 6 * ((rand() % 6) + 1);  + 3 * ((rand() % 8) + 1)  + atkDmg;
			for (int i = 0; i < weaponList[arma].getDSize(); i++)
			{
				
				for (int j = 0; j < weaponList[arma].getDano(i).nDice; j++)
				{
					int partial = ((rand() % weaponList[arma].getDano(i).dice) + 1);
					//std::cout << partial << " " << weaponList[arma].getDano(i).type << " damage" << std::endl;
					findDamageType(danos, weaponList[arma].getDano(i).type, partial);
					damage = damage + partial;
				}
			}
			findDamageType(danos, weaponList[arma].getDano(0).type, atkDmg);
			damage = damage + atkDmg;
			hits++;
		}
		timesAttacked++;
	}
	std::cout << "Nro Ataques acertados: " << hits << std::endl << std::endl;
	std::cout << "Dano: " << damage << std::endl << std::endl;
	for (int i = 0; i < danos.size(); i++)
	{
		std::cout << danos[i].total << " " << danos[i].type << " damage" << std::endl;
	}
	std::cin.ignore();
	








}
