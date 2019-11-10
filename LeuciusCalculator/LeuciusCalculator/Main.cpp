
#include <cstdlib>
#include <ctime>
#include "Weapon.h"
#include "functions.h"


int main () {

	int monsterAC = 0;
	int nAtk = 0;
	int atkRoll = 0;
	int atkDmg = 0;
	int arma;
	char menu = 0;
	std::vector <Weapon> weaponList;
	
	

	srand(time(NULL));
	readFile("weaponFile.txt", &weaponList);
	printMenu();
	while (1)
	{
		std::cin >> menu;
		switch (menu)
		{
		case 'c': 
		case 'C':
			config(monsterAC, arma, nAtk, atkRoll, atkDmg);
			std::cout << "Arma: " << weaponList[arma].getName() << std::endl;
			calculate(nAtk, atkRoll, weaponList, arma, atkDmg, monsterAC);
			printMenu();
			break;
		case 'a':
		case 'A':
			// add new weapon
			addWeapon("weaponFile.txt");
			printMenu();
			break;
		case 'e':
		case 'E':
			// edit weapon
			printMenu();
			break;
		case 'p':
		case 'P':
			// print weapon List
			printList(weaponList);
			printMenu();
			break;
		case 's':
		case 'S':
			return 0;
		}
		menu = 0;
	}
	


}
