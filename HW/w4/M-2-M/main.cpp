#include <iostream>

#include "User.h"
#include "Article.h"
#include "Manager.h"

int main()
{
	// Manager manager;
	// Article art1(manager);
	// Article art2(manager);
	// Article art3(manager);

	// art1.print();
	// art2.print();
	// art3.print();

	// User user1(manager);
	// User user2(manager);
	// User user3(manager);
	Article art1, art2, art3;
	User user1, user2, user3;

	user1.like(art1);

	user2.like(art1);
	user2.like(art2);

	user3.like(art1);
	user3.like(art2);
	user3.like(art3);

	art1.print();
	art2.print();
	art3.print();

	user1.print();
	user2.print();
	user3.print();


	return 0;
}