#include <iostream>
using namespace std;

class Shapes 
{
	virtual void ReadData() = 0;
	virtual double Area() = 0;
};

class Square : public Shapes
{
	public:
		int side;

		void ReadData() override {
			cout << "Enter the value of the side: ";
			cin >> side;
		}

		double Area() override { return side * side; }
};

class Rectable : public Shapes
{
	public:	
		int length, breadth;

		void ReadData() override {
			cout << "Enter lenght and breadth: ";
			cin >> length >> breadth;
		}

		double Area() override { return length * breadth; }
};

int main()
{
	Square *s = new Square;
	
	s->ReadData();
	cout << s->Area() << endl;

	return 0;
}