#include <iostream>
using namespace std;

class Entity {
	public:
		Entity();
		Entity(int a, int b);

		Entity& operator=( const Entity& rhs);

		void printVal();
		void setPoint(int a, int b);

	private:
		int x, y;
};

Entity::Entity() {
	this->x = 0;
	this->y = 0;

	/* alternatively we can directly do
	x = 0;
	y = 0; */
}

Entity::Entity(int a, int b) {
	this->x = a;
	this->y = b;
}

void Entity::printVal() {
	cout << "(" << x << "," << y << ")" << endl;
}

Entity& Entity::operator=( const Entity& rhs) {
	cout << "Copy assignment op has been called." << endl;
	(this->x) = (rhs.x);
	this->y = (rhs.y);
	return *this;
}

void Entity::setPoint(int a, int b) {
	this->x = a;
	this->y = b;
}

int main(void) 
{
	Entity e3;
	e3.printVal();
	Entity e1(1, 10);
	Entity e2(2, 20);

	cout << "Before operator func: " << endl;
	cout << "e1: "; e1.printVal();
	cout << "e2: "; e2.printVal();

	// calling the operator func
	e2 = e1; /* this will automatically call the copy assignment member function */
	cout << "e1: "; e1.printVal();
	cout << "e2: "; e2.printVal();

	cout << "Changing val of e1" << endl;
	e1.setPoint(4, 4);
	cout << "e1: "; e1.printVal();
	cout << "e2: "; e2.printVal();

	return 0;

}