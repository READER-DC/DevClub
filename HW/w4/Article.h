#pragma once

#include "Manager.h"

class Article
{
public:
	Article(Manager& manager);
	~Article();

	int getID() const;
	void print() const;

private:
	static int id;
	int innerID;
	Manager& manager;
};