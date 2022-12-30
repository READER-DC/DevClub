#include <iostream>

#include "Article.h"

int Article::id = 0;

Article::Article()
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

	int limit = Manager::getInstance().getLikes(this->innerID).size() - 1;

	if (Manager::getInstance().getLikes(this->innerID).empty()) 
	{
		return ;
	}

	for( int i = 0; i < limit; i++)
	{
		std::cout << "Like User " << Manager::getInstance().getLikes(this->innerID).at(i) << ", ";
	}
	std::cout << "Like User " << Manager::getInstance().getLikes(this->innerID).at(limit) << std::endl;
}