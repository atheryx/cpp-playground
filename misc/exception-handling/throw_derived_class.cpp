#include <iostream>
#include <exception>
#include <cstring>

class Base {
public:
	int what;
	
	Base() { what = 0; }
};

class Derived : public Base {
public:
	char str_what[20];

	Derived();
	Derived(char *, int);
};

Derived::Derived() {
	this->what = 0;
	*this->str_what = 0;
}

Derived::Derived(char *s, int i) {
	this->what = i;
	strcpy(this->str_what, s);
}

int main()
{
	int i;

	try {
		std::cout << "Enter a positive number: ";
		std::cin >> i;

		if (!i) {
			throw Base();
		} else if (i < 0) {
			throw Derived("Negative value", i);
		}
	
	} catch (Derived e) {
		std::cout << "Inside derived class exception!" << std::endl;
		std::cout << "Caught exception: " << e.str_what << std::endl;
		std::cout << "Value is = " << e.what << std::endl;
	} catch(Base e) {
		std::cout << "Inside base class exception!" << std::endl;
		std::cout << "Caught = " << e.what << std::endl;
	}

	std::cin.get();
}