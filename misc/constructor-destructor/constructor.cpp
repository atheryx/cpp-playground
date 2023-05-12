#include <iostream>

class Entity {
public:
	float X, Y;

	Entity() {
		X = 0;
		Y = 0;
	}

	Entity(int x, int y) {
		X = x;
		Y = y;
	}

	void Print() {
		std::cout << X << ", " << Y << std::endl;
	}
};

int main()
{
	Entity e;
	e.Print();

	Entity e1(3, 4);
	e1.Print();


	std::cin.get();
}