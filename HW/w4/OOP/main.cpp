#include <iostream>

#include "Soldier.h"
#include "Mage.h"

int main()
{
	Soldier soldier("John Doe");
	Mage mage("Susan Woe");

	soldier.print();
	mage.print();
	return 0;
}
