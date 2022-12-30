#pragma once

#include <iostream>

class Mage
{
public:
	Mage(const std::string& name);
	~Mage();

	void attack();
	void print();

private:
	std::string name;
};