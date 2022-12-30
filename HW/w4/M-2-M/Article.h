#pragma once

#include "Manager.h"

class Article
{
public:
	Article();
	~Article();

	int getID() const;
	void print() const;

private:
	static int id;
	int innerID;
};