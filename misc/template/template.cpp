#include <iostream>
using namespace std;

/* The templates don't actually get created if we don't use it 
 * in our program */
template<typename T>
void Print(T x)
{
	cout << x << endl;
}

int main()
{
	Print(6);
	Print("hello");

	return 0;
}
