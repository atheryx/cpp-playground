/* Similar to copyAssignment, only difference is the class variables are pointers */

#include <iostream>
using namespace std;

class Entity {
	public:
		Entity();
		Entity(int a, int b);

		void setPoint(int a, int b);
		void printVal();

		//Entity& operator=(const Entity& rhs);
	
	private:
		int *x;
		int *y;
};

Entity::Entity() {
	cout << "Default operator called" << endl;

	/* Why do I need to use new here? Are pointers not allocated space by default in C++? */
	/*
	Program received signal SIGSEGV, Segmentation fault.
	0x000055555555525d in Entity::Entity (this=0x7fffffffdf60, a=4, b=4) at copyAssignment(v2).cpp:28
	28		*(this->y) = b;

	Why wasn't there seg fault at *(this->x) ??
	*/

	this->x = new int;
	this->y = new int;
	
	*this->x = 0;
	*this->y = 0;
}

Entity::Entity(int a, int b) {
	cout << "Param constructor called" << endl;

	this->x = new int;
	this->y = new int;
	
	*x = a;
	*y = b;
}


/* V.IMP 
	default behaviour of the assignment operation is to copy the pointer locations
	not the value of the pointer locations

	If we want to copy the pointer values, we write this functiion
*/
Entity& Entity::operator=(const Entity& rhs) {
	cout << "Assignment operator called" << endl;
	*x = *rhs.x;
	*y = *rhs.y;

	return *this;
}

void Entity::setPoint(int a, int b) {
	*x = a;
	*y = b;
}

void Entity::printVal() {
	cout << "(" << *x << "," << *y << ")" << endl;
}

int main()
{
	Entity e1(2, 10);
	Entity e2(3, 4);
	
	e1.printVal();
	e2.printVal();

	e2 = e1;
	e1.setPoint(4,4);

	e1.printVal();
	e2.printVal();
}