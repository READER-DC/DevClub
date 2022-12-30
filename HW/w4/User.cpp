#include <iostream>

#include "User.h"


User::User(int id, Manager& manager) : manager(manager)
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
	this->manager.likeArticle(this->id, article.getID());
}

void User::print () const
{
	std::cout << "User: " << this->id << "--->";

	int limit = manager.getFavourites(this->id).size() - 1;

	for( int i = 0; i < limit; i++)
	{
		std::cout << manager.getFavourites(this->id).at(i) << ", ";
	}
	std::cout << manager.getFavourites(this->id).at(limit) << std::endl;
}