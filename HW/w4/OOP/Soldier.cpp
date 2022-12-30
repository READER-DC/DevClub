#include "Soldier.h"

Soldier::Soldier(const std::string& name)
{
	this->name = name;
}

Soldier::~Soldier()
{

}

void Soldier::attack()
{
	std::cout << "I'm attacking ...";
}

void Soldier::print()
{
	std::cout << "Soldier: " << this->name << std::endl;
}