#include "Mage.h"

Mage::Mage(const std::string& name)
{
	this->name = name;
}

Mage::~Mage()
{

}

void Mage::attack()
{
	std::cout << "I'm attacking ...";
}

void Mage::print()
{
	std::cout << "Mage: " << this->name << std::endl;
}
