#include <iostream>
#include <string.h>

using namespace std;

template<int N>
class Array
{
	/* Generally we cannot have variable size of arrays
	 * 
	 * But since it's a template, the code gets compiled based on the usage
	 * i.e how we create instances of this class */

	int m_Array[N];
	public:
		int GetSize() { return N; }
};

/* If we also want to decide the type of the array being created,
 * we can do something like this.. */

template<typename T, int N>
class A {
	T m_Array[N];
	public:
		int GetSize() { return N; }
};

int main()
{
	Array<5> array;
	std::cout << array.GetSize() << std::endl;
	
	A<float, 7> a;
	std::cout << a.GetSize() << std::endl;

	return 0;
}

