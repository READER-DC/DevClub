#include <iostream>

#include "Article.h"

int Article::id = 0;

Article::Article(Manager& manager) : manager(manager)
{
	Article::id += 1;
	this->innerID = Article::id;
}
Article::~Article()
{

}

int Article::getID() const
{
	return this->innerID;
}
void Article::print() const
{
		std::cout << "Article: " << this->innerID << "--->";

	int limit = manager.getLikes(this->innerID).size() - 1;

	for( int i = 0; i < limit; i++)
	{
		std::cout << "Like User " << manager.getLikes(this->innerID).at(i) << ", ";
	}
	std::cout << "Like User " << manager.getLikes(this->innerID).at(limit) << std::endl;
}