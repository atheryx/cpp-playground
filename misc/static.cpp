#include <iostream>

struct Entity {
	static int x, y;

	static void Print() {
		std::cout << x << ", " << y << std::endl;
	}
};


int Entity::x;
int Entity::y;


int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1;
	e1.x = 5;
	e1.y = 8;

	Entity::x = 10;
	Entity::y = 20;


	e.Print();
	e1.Print();
	Entity::Print();

	std::cin.get();
}