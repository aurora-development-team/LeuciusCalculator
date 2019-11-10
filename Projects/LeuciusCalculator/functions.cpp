#define d4 ((rand() % 4) + 1)
#define d6 ((rand() % 6) + 1)
#define d8 ((rand() % 8) + 1)
#define d10 ((rand() % 10) + 1)
#define d12 ((rand() % 12) + 1)
#define d20 ((rand() % 20) + 1)

#include "Weapon.h"
#include "functions.h"



std::fstream file;
std::string buffer, name, dices, bonus;
std::string delimiter;
dano danoLeitura;
Weapon *test = new Weapon();
int diceAux;
dano danoAux;
int readFile(std::string fileName, std::vector <Weapon> *list)
{
	


	file.open(fileName, std::fstream::in | std::fstream::app);
	if (file.is_open() == 0)
	{
		std::cout << "deu caca" << std::endl;
		return -1;
	}
    while (std::getline(file, buffer))
	{
		if (file.eof())
		{
			break;
		}
		buildWeapon();
		list->push_back(*test);
		test = new Weapon;


	}
	file.close();

	return 1;
}

int decodeDice(std::string dice)
{
	std::string rawDice;
	char nDice = dice.at(0);
	danoAux.nDice = nDice - '0';
	
	rawDice = dice.substr(1, dice.size() - 1);

	if (rawDice == "d1") return 1;
	else if (rawDice == "d4") return 4;
	else if (rawDice == "d6") return 6;
	else if (rawDice == "d8") return 8;
	else if (rawDice == "d10") return 10;
	else if (rawDice == "d12") return 12;
	else if (rawDice == "d20") return 20;

	else return -1;
}

void buildWeapon()
{
	std::string delimiter = ";";
	size_t pos = 0, posDice = 0;
	std::string token;
	// Poison Dagger;1d4 slashing+1d10 poison;+1
	pos = buffer.find(delimiter);
	name = buffer.substr(0, pos);
	// name = Poison Dagger
	buffer.erase(0, pos + delimiter.length());
	// 1d4 slashing+1d10 poison;+1

	test->setName(name);


	pos = buffer.find(delimiter);
	dices = buffer.substr(0, pos);
	// dices = 1d4 slashing+1d10 poison

	delimiter = "+";
	while ((posDice = dices.find(delimiter)) != std::string::npos)
	{

		token = dices.substr(0, posDice);
		//token = 1d4 slashing
		dices.erase(0, posDice + delimiter.length());
		// dices = 1d10 poison
		danoAux.dice = decodeDice(token.substr(0, token.find(" ")));
		danoAux.type = token.substr(token.find(" ") + 1, token.size());
		//type = slashing
		test->addDano(danoAux);
	}
	
	token = dices.substr(0, posDice);

	dices.erase(0, posDice + delimiter.length());


	danoAux.dice = decodeDice(token.substr(0, token.find(" ")));
	danoAux.type = token.substr(token.find(" ") + 1, token.size());
	test->addDano(danoAux);
	
	delimiter = ";";

	pos = buffer.find(delimiter);
	//buffer = 1d4 slashing+1d10 poison;+1
	buffer.erase(0, pos + delimiter.length());
	//buffer = +1
	bonus = buffer;
	bonus.erase(0, 1);
	//bonus = 1
	test->setBonus(stoi(bonus));

}
void findDamageType(std::vector <printdano> &d, std::string type, int val)
{
	bool found = false;
	printdano partial;
	for (int i = 0; i < d.size(); i++)
	{
		if (d[i].type == type)
		{
			d[i].total += val;
			found = true;
			break;
		}
	}
	if (found == false)
	{
		found = true;
		partial.total = val;
		partial.type = type;
		d.push_back(partial);
	}
}
void config(int &monsterAC, int &arma, int &nAtk, int &atkRoll, int &atkDmg)
{
	//acc
	std::cout << "ACC do inimigo: " << std::endl;
	std::cin >> monsterAC;
	//arma
	std::cout << "Escolha a arma: " << std::endl;
	std::cin >> arma;
	
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
}
void calculate(int nAtk, int  atkRoll, std::vector <Weapon> &weaponList, int arma, int atkDmg, int monsterAC)
{

	int timesAttacked = 1;
	int diceRoll;
	int atk;
	int damage = 0;
	int hits = 0;
	std::vector <printdano> danos;
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
int addWeapon(std::string fileName)
{
	std::string name;
	std::string bonus;
	std::string input;
	std::string dices;
	std::string aux;
	int damageCounts;
	file.open(fileName,std::fstream::app);
	if (file.is_open() == 0)
	{
		std::cout << "deu caca" << std::endl;
		return -1;
	}

	//std::cin.clear();
//	fflush(stdin);
	std::cin.ignore();

	std::cout << "Weapon Name: ";
	std::getline(std::cin, name);
	std::cout << "How many damage types: ";

	std::cin >> damageCounts;
	std::cin.ignore();
	for (int i = 0; i < damageCounts; i++)
	{
		std::cout << "Damage Dice " << i << ": ";
		if (i == 0)
		{
			std::getline(std::cin, dices);
		}
		else
		{
			std::getline(std::cin, aux);
			dices = dices + "+" + aux;
		}
	}
	std::cout  << "Bonus: ";
	std::getline(std::cin, bonus);

	if (name.back() == ' ')
		name.pop_back();
	if (bonus.back() == ' ')
		bonus.pop_back();
	if (dices.back() == ' ')
		dices.pop_back();

	if (bonus.at(0) != '+')
		bonus = "+" + bonus;

	input = name + ";" + dices + ";" + bonus + "\n";

	file << input;
	
	file.close();
}
void printMenu()
{
	std::cout << "[c] to calculate" << std::endl;
	std::cout << "[a] to add new weapon" << std::endl;
	std::cout << "[e] to edit existing weapon" << std::endl;
	std::cout << "[p] to show weapon List" << std::endl;
	std::cout << "[s] to exit" << std::endl;
}
void printList(std::vector<Weapon>& weaponList)
{
	std::cout << "===============================================" << std::endl;
	std::cout << std::left << std::setw(20) << "Name" << std::left << std::setw(30) << "Damage" << std::right << std::setw(2) << "Bonus" << std::endl;
	for (int i = 0; i < weaponList.size(); i++)
	{
	
		std::cout << std::left << std::setw(20) << weaponList[i].getName();
		weaponList[i].printDanos();
		std::cout <<   std::right << std::setw(2) << " +" << weaponList[i].getBonus() << std::endl;
	}
	std::cout << "===============================================" << std::endl;
}
int editWeapon(std::vector<Weapon>& weaponList)
{
	std::string weaponName, listWName;
	std::cout << "What weapon do you want do edit: ";
	std::cin.ignore();
	std::getline(std::cin,weaponName);
	char menu;

	std::for_each(weaponName.begin(), weaponName.end(), [](char& c) {
		c = ::tolower(c);
		});

	for (int i = 0; i < weaponList.size(); i++)
	{
		listWName = weaponList[i].getName();
		std::for_each(listWName.begin(), listWName.end(), [](char& c) {
			c = ::tolower(c);
			});
		if (listWName.find(weaponName) != std::string::npos || weaponName.find(listWName) != std::string::npos)
		{
			editMenu();
			std::cin >> menu;
			switch(menu)
			case 'n':
			case 'N':
				std::cin.ignore();
				std::getline(std::cin, weaponName);
				weaponList[i].setName(weaponName);
				break;

	/////////// TODO /////////////////////
			break;
		}
	}
	return 1;
}
void editMenu()
{
	std::cout << "[n] to edit name" << std::endl;
	std::cout << "[b] to edit bonus" << std::endl;
	std::cout << "[d] to edit damage" << std::endl;
}
