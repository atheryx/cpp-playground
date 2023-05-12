#include <iostream>
using namespace std;

class Entity {
	int X, Y;
	public:
		Entity() { X = Y = 0; }

		Entity(int i, int j) {
			X = i;
			Y = j;
		}

		Entity operator+(Entity& rhs) const {
			return Entity(this->X + rhs.X, this->Y + rhs.Y);
		}

		void Print() {
			cout << X << ", " << Y << endl;
		}

		friend ostream& operator<<(ostream&, const Entity&);
		friend istream& operator>>(istream&, Entity&);
};


std::ostream& operator<<(std::ostream& stream, const Entity& e) 
{
	stream << e.X << ", " << e.Y;
	return stream;
} 

std::istream& operator >> (std::istream& stream, Entity& e) 
{
	cout << "Enter value of X: ";
	stream >> e.X;

	cout << "Enter value of Y: ";
	stream >> e.Y;

	return stream;
}


int main()
{
	Entity e1(3, 4);
	Entity e2(5, 2);

	Entity e3 = e1 + e2;
	e3.Print();

	Entity e4 = e1.operator+(e3);
	// e4.Print();

	cout << e4 << endl;

	Entity e5;
	cin >> e5;
	cout << e5;

	std::cin.get();
}