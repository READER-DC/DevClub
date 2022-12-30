#pragma once

#include <iostream>
#include <string>

class Soldier
{
public:
	Soldier(const std::string& name);
	~Soldier();

	void attack();
	void print();

private:
	std::string name;
};