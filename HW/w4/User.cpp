#include <iostream>

#include "User.h"

int User::id = 0;

User::User(Manager& manager) : manager(manager)
{
	User::id += 1;
	this->innerID = User::id;
}
User::~User()
{

}
	
int User::getID () const
{
	return this->innerID;
}
void User::like (Article& article)
{
	this->manager.likeArticle(this->innerID, article.getID());
}

void User::print () const
{
	std::cout << "User: " << this->innerID << "--->";

	int limit = manager.getFavourites(this->innerID).size() - 1;

	if (manager.getFavourites(this->innerID).empty()) 
	{
		return ;
	}

	for( int i = 0; i < limit; i++)
	{
		std::cout << "Like Art "<< manager.getFavourites(this->innerID).at(i) << ", ";
	}
	std::cout << "Like Art "<< manager.getFavourites(this->innerID).at(limit) << std::endl;
}