#pragma once

#include "Article.h"
#include "Manager.h"

class User
{
public:
	User(Manager& manager);
	~User();
	
	int getID () const;
	void like (Article& article);

	void print () const;

private:
	static int id;

	int innerID;

	Manager& manager;
};