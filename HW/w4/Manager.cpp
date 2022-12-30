#include "Manager.h"

Manager& Manager::getInstance()
{
	static Manager manager;
	return manager;
}

void Manager::likeArticle(int userID, int articleID)
{
	favourites[userID].push_back(articleID);
	likes[articleID].push_back(userID);
}

std::vector<int> Manager::getFavourites(int userID) const
{
	if(favourites.find(userID) == favourites.end())
	{
		return std::vector<int>();

	}
	return favourites.at(userID);
}

std::vector<int> Manager::getLikes(int articleID) const
{
	if(likes.find(articleID) == likes.end())
	{
		return std::vector<int>();
	}
	return likes.at(articleID);
}