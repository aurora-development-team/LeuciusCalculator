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
void Weapon::printDanos()
{
	for (int i = 0; i < dSize; i++)
	{
		std::cout << D[i].nDice <<D [i].dice << " " << D[i].type << "=========" ;
	}
	std::cout << std::endl;
}
dano Weapon::getDano(int pos)
{
	return D[pos];
}
int Weapon::getDSize()
{
	return dSize;
}