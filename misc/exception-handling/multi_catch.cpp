#include <iostream>
#include <exception>
#include <cstring>

class ZeroException {
public:
	int what;
	char str_what[20];

	ZeroException() { strcpy(str_what, "Value is 0"), what = 0; }
};

void Handler(int val)
{
	if (val > 0) {
		throw val;
	} else if (val < 0) {
		throw "Negative Value";
	} else if (!val) {
		throw ZeroException();
	}
}

int main()
{
	int i;

	try {
		std::cout << "Enter a positive number: ";
		std::cin >> i;

		Handler(i);

	} catch(int i) {
		std::cout << "Positive Value" << std::endl;
		std::cout << "Value is = " << i << std::endl;
	} catch(ZeroException e) {
		std::cout << e.str_what << std::endl;
		std::cout << "Passing = " << e.what << std::endl;
	} catch(...) {
		std::cout << "Caught unknown exception" << std::endl;
	} 

	std::cin.get();
}