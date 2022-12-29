#include <iostream>

#include "User.h"
#include "Article.h"

int main()
{
	Article art1(1);
	Article art2(2);
	Article art3(3);

	User user1(1);
	User user2(2);
	User user3(3);

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