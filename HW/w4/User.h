#pragma once

#include "Article.h"

class User
{
public:
	User(int id);
	~User();
	
	int getID () const;
	void like (Article& article);

	void print () const;

private:
	int id;

};