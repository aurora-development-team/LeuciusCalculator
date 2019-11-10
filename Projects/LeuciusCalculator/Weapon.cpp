#include "Weapon.h"

Weapon::Weapon()
{
	name = "";
	bonus = 0;
	dSize = 0;
}
Weapon::Weapon(dano d, int b, std::string s)
{
	name = s;
	bonus = b;
	dSize = 1;
    D[0] = d;
}
void Weapon::addDano(dano d)
{
	if (dSize < 5)
	{
		D[dSize] = d;
		dSize++;
	}
}
void Weapon::setBonus(int n)
{
	bonus = n;
}
int Weapon::getBonus()
{
	return bonus;
}
void Weapon::setName(std::string nome)
{
	name = nome;
}
std::string Weapon::getName()
{
	return name;
}
std::string Weapon::printDanos()
{
	std::string aux = "";
	for (int i = 0; i < dSize; i++)
	{
		aux = aux + std::to_string(D[i].nDice) + "d" + std::to_string(D[i].dice) + " " + D[i].type;
	//	std::cout << D[i].nDice << "d"<< D [i].dice << " " << D[i].type;
		if (i != dSize - 1)
			//std::cout << "+" ;
			aux = aux + "+";
	}
    return aux;
}
dano Weapon::getDano(int pos)
{
	return D[pos];
}
int Weapon::getDSize()
{
	return dSize;
}
