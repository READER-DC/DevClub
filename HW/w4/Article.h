#pragma once

class Article
{
public:
	Article(int id);
	~Article();

	int getID() const;
	void print() const;

private:
	int id;
};