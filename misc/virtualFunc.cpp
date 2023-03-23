/* Virtual Functions are used to override methods in functions */

#include <iostream>
#include <string.h>
using namespace std;

class Entity
{
	public:
	/* A v-table is created for this function in the memory 
	which is used for mapping the function the class being reffered 
	Moreover a member pointer is initiallized here? */
		virtual string GetName() { return "Entity"; }
};

class Player : public Entity
{
	private:
		string m_Name;
	
	public:
		Player(const string& name)
			: m_Name(name) {}

		string GetName() override { return m_Name; }
		/* The override keyword here is not nececary 
		but it is done for conciseness */
};

void PrintName(Entity* entity) {
	cout << entity->GetName() << endl;
}

int main(void)
{
	Entity *e = new Entity();
	PrintName(e);

	Player *p = new Player("pandfun");
	PrintName(p);

	return 0;
}