#include <iostream>
#include <exception>

using namespace std;

class Overspeed : public exception 
{
private: 
	int speed;
public:

	const char * what() {
		return "SLOW DOWN!!\n";
	}

	void getSpeed() {
		cout << "Car speed is: " << speed << endl;
	}

	void setSpeed(int val) {
		speed = val;
	}
};

class Car 
{
private:
	int speed;
public:
	Car() {
		speed = 0;
		cout << "Speed value is set to zero!" << endl;
	}

	void accelerate();
};

void Car::accelerate()
{
	while (1) {
		speed += 10;
		cout << "New Speed = " << speed << endl;
		if (speed >= 250) {
			Overspeed s;
			s.setSpeed(speed);
			throw s;
		}
	}
}


int main()
{
	Car krish_car;
	try {
		krish_car.accelerate();
	} catch (Overspeed s) {
		s.getSpeed();
		cout << s.what();
	}

	return 0;
}