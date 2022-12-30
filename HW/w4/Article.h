#pragma once

#include "Manager.h"

class Article
{
public:
	Article(int id,  Manager& manager);
	~Article();

	int getID() const;
	void print() const;

private:
	int id;
	Manager& manager;
};