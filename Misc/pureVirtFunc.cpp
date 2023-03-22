#include <iostream>
#include <string.h>
using namespace std;

class Entity
{
	public:
		virtual string GetName() = 0;
		/* The = 0 makes it a pure virtual function 
		So it must be implemented in the sub class 
		to instantiate that class */
};

class Player : public Entity
{
	private:
		string m_Name;
	
	public:
		Player(const string& name)
			: m_Name(name) {}

		string GetName() override { return m_Name; }
};

void PrintName(Entity* entity) {
	cout << entity->GetName() << endl;
}

int main(void)
{
	/* This becomes wrong, we can no longer 
	instantiate the Entity class

	Entity *e = new Entity();
	*/

	// this works since we have implemented 
	// GetName in player class
	Player *p = new Player("pandfun");
	PrintName(p);

	return 0;
}