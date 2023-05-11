#include <iostream>
#include <exception>

void Test(int val) 
{
	std::cout << "Inside test function! ";
	std::cout << "Value is = " << val << std::endl;

	if (val) {
		throw val;
	}

	return; 
}

int main()
{
	try {
		std::cout << "Inside try block" << std::endl;
		Test(0);
		Test(1);
		Test(2); // wont execute
	} catch (int i) {
		std::cout << "Caught exceptions: " << i << std::endl;
	}

	std::cin.get();
}