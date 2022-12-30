#include <iostream>

#include "User.h"
#include "Article.h"
#include "Manager.h"

int main()
{
	Manager manager;
	Article art1(1, manager);
	Article art2(2, manager);
	Article art3(3, manager);

	User user1(1, manager);
	User user2(2, manager);
	User user3(3, manager);

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