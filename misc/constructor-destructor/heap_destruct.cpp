#include <iostream>

class Entity {
public:
	int *X;


	Entity() {
		X = new int;
		*X = 10;
	}

	// Entity(int a) {
	// 	X = new int(a);
	// }

	void Print() {
		std::cout << "The value of x is = " << *X << std::endl;
	}

	~Entity() {
		std::cout << "Value destroyed" << std::endl;
		delete X;
	}
};

int main()
{
	Entity e;
	std::cout << "Addr of X " << e.X << "\nValue = " << *e.X << std::endl;
	e.Print();
	e.~Entity();
	std::cout << "Addr of X " << e.X << "\nValue = " << *e.X << std::endl;

	// Entity e1(89);
	// e1.Print();

	std::cin.get();
}