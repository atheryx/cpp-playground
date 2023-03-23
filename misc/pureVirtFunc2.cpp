#include <iostream>
#include <string.h>
using namespace std;

// This is an interface 
class Printable
{
	public:
		virtual string GetClassName() = 0;
};

/* When we want to garuentee a class has a certain function 
so we can pass it to a generic method (here it is Print)
which will call this func (here our certain func is GetClassName) */

class Entity : public Printable
{
	public:
		string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
	public:
		// If this is not there, the call will refer to Entity's override
		string GetClassName() override { return "Player"; }
		
};

class A : public Printable
{
	public:
		//string GetClassName() override { return "A"; }
	/* Since we have commented this out, we can not instantiate class A 
	because it has no override for the pure virtual function in the derived class

	"A *a = new A" inside main will result in an error */
};

void Print(Printable* p)
{
	cout << p->GetClassName() << endl;
}

int main(void)
{
	Entity *e = new Entity;
	Player *p = new Player;
	//A* a = new A;

	Print(e);
	Print(p);
	//Print(a);
	
	return 0;
}