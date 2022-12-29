#include <iostream>

#include "User.h"

User::User(int id)
{
	this->id = id;
}
User::~User()
{

}
	
int User::getID () const
{
	return this->id;
}
void User::like (Article& article)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void User::print () const
{
	std::cout << "User: " << this->id << std::endl;
}