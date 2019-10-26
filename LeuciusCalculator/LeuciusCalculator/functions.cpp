
#include "Weapon.h"
#include "functions.h"

std::fstream file;
std::string buffer, name, dices, bonus;
std::string delimiter;
dano danoLeitura;
//std::vector <Weapon> weaponList;
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
	return 1;
}

int decodeDice(std::string dice)
{
	std::string rawDice;
	char nDice = dice.at(0);
	danoAux.nDice = nDice - '0';
	//std::cout << danoAux.nDice;

//	if (dice.size() > 1)
	rawDice = dice.substr(1, dice.size() - 1);
//	else
//	rawDice = dice;
	//std::cout << nDice <<" " << rawDice << std::endl;
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
	pos = buffer.find(delimiter);
	name = buffer.substr(0, pos);
//	std::cout << name << std::endl;
	buffer.erase(0, pos + delimiter.length());


	test->setName(name);


	pos = buffer.find(delimiter);
	dices = buffer.substr(0, pos);
//	std::cout << dices << std::endl;
	delimiter = "+";
	while ((posDice = dices.find(delimiter)) != std::string::npos)
	{
		token = dices.substr(0, posDice);
	//	std::cout << token << std::endl;
		dices.erase(0, posDice + delimiter.length());
		//std::cout << token.substr(0, token.find(" ")) << std::endl;
		danoAux.dice = decodeDice(token.substr(0, token.find(" ")));
	//	std::cout << token.substr(token.find(" ") + 1, token.size()) << std::endl;
		danoAux.type = token.substr(token.find(" ") + 1, token.size());
		test->addDano(danoAux);
	}
	
	token = dices.substr(0, posDice);
	//	std::cout << token << std::endl;
	dices.erase(0, posDice + delimiter.length());
	//std::cout << token.substr(0, token.find(" ")) << std::endl;
	if (decodeDice(token.substr(0, token.find(" "))) != -1)
		danoAux.dice = decodeDice(token.substr(0, token.find(" ")));
	else
		std::cout << "Error resolving dice formatting";
	//	std::cout << token.substr(token.find(" ") + 1, token.size()) << std::endl;
	
	danoAux.type = token.substr(token.find(" ") + 1, token.size());
	test->addDano(danoAux);
	
	delimiter = ";";
	pos = buffer.find(delimiter);
	buffer.erase(0, pos + delimiter.length());
	bonus = buffer;
	bonus.erase(0, 1);
	test->setBonus(stoi(bonus));

	//std::cout << test->getName() << std::endl;
//	test->printDanos();
	//std::cout << test->getBonus() << std::endl;
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