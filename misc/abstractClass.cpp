/* Q: Create a virtual func to calculate the area of diff figures */

#include <iostream>
#include <string.h>
using namespace std;

/* This is an abstract class or an interface 
Abstract class is a class which has atleast one 
pure virtual function

IMP: You cannot make an instance of the Shapes class
but you can make a pointer to this class 

If my derived class has no override for the pure virtual func,
they too become abstract functions */
class Shapes
{
	public:
		virtual double area() = 0;
};

/* Since this class overrides the pvf, 
they are called Concrete Class */
class Square : public Shapes
{
	public:
		double side;

		Square(const double side)
			: side(side) {}

		double area() override { return side * side; }
};

class Triangle : public Shapes
{
	public:
		double base;
		double height;

		Triangle(double base, double height)
			: base(base), height(height) {}

		double area() override { return 0.5 * base * height; }
};

void PrintArea(Shapes *s)
{
	cout << s->area() << endl;
}

int main(void)
{
	Square *sq = new Square(9);
	Triangle *tr = new Triangle(4, 5);

	PrintArea(sq);
	PrintArea(tr);

	return 0;
}