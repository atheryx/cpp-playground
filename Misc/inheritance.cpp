#include <iostream>
using namespace std;

class Entity 
{
	public:
		float X, Y;

		void Move(float xa, float ya) {
			X += xa;
			Y += ya;
		}
};

/* Player will always be a super set of Entity */
/* If we had a stand alone which prints an Entity object, 
we can pass a Player object to the same object and it will accept it */

class Player : public Entity
{
	public:
		const char *Name;

		void PrintName(void) {
			cout << Name << endl;
		}
};

int main(void)
{
	Player player;

	cout << sizeof(Entity) << endl;
	cout << sizeof(Player) << endl;

	//player.PrintName();
	player.Move(5, 5);

	return 0;
}