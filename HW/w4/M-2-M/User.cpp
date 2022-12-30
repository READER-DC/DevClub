#include <iostream>

#include "User.h"

int User::id = 0;

User::User()
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
	Manager::getInstance().likeArticle(this->innerID, article.getID());
}

void User::print () const
{
	std::cout << "User: " << this->innerID << "--->";

	int limit = Manager::getInstance().getFavourites(this->innerID).size() - 1;

	if (Manager::getInstance().getFavourites(this->innerID).empty()) 
	{
		return ;
	}

	for( int i = 0; i < limit; i++)
	{
		std::cout << "Like Art "<< Manager::getInstance().getFavourites(this->innerID).at(i) << ", ";
	}
	std::cout << "Like Art "<< Manager::getInstance().getFavourites(this->innerID).at(limit) << std::endl;
}