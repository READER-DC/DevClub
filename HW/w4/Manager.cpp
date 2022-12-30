#include "Manager.h"

Manager::Manager()
{

}
Manager::~Manager()
{

}

void Manager::likeArticle(int userID, int articleID)
{
	favourites[userID].push_back(articleID);
	likes[articleID].push_back(userID);
}

const std::vector<int>& Manager::getFavourites(int userID) const
{
	return favourites.at(userID);
}

const std::vector<int>& Manager::getLikes(int articleID) const
{
	return likes.at(articleID);
}