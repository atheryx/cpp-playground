#include <iostream>
#include <vector>

int main()
{
	int i;
	
	std::vector<int> v; // static allocation

	// elements are added using push_back()
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	/* 
	If we directly add using v[4] = something...
	the size wont increase & mainly - 
	(IMP) It will try to change values of something on the stack/heap that may not
	be a part of out vector, and can lead to faulty fatal errors
	
	Only times when [] is used are when we try to - 
	Fetch values & update values
	*/

	v[1] = 100;
	v.at(0) = 89;

	// size() returns number of elements, not last index
	int size = v.size();
	for (int i = 0; i < size; ++i) {
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;


	// we can also access elements using at()
	for (int i = 0; i < size; ++i) {
		std::cout << v.at(i) << " ";
	}

	// accessing out of bounds elements
	//std::cout << v[10] << std::endl; // this prints some value from the stack/heap
	//std::cout << v.at(10) << std::endl; // this first checks size and tries to access
	// using at() is always better


	// removing element at the top

	std::cout << std::endl << "Trying POP" << std::endl;

	for (int i = 0; i < v.size(); ++i) {
		std::cout << v.at(i) << " ";
	}
	std::cout << std::endl;

	v.pop_back();

	std::cout << "After pop" << std::endl;
	for (int i = 0; i < v.size(); ++i) {
		std::cout << v.at(i) << " ";
	}
	std::cout << std::endl;



	for (int i = 0; i < 5; ++i)
		std::cout << std::endl;


	std::vector<int> x;
	for (i = 0; i < 10; ++i)
		x.push_back(i+1);
	
	for (i = 0; i < x.size(); ++i)
		std::cout << x.at(i) << " ";
	std::cout << std::endl;

	x.erase(x.begin() + 4);
	
	// Printing the vector
	for (auto it : x)
		std::cout << it << " ";
	std::cout << std::endl;

	return 0;
}