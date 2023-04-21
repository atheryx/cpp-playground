#include <iostream>
using namespace std;

template<typename T>
void Swap(T &x, T &y) {
	T tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	int x = 0, y = 9;
	Swap<int>(x, y);
	cout << x << endl;
	cout << y << endl;

	return 0;
}
