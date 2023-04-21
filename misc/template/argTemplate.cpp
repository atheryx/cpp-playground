#include <iostream>
using namespace std;

template <typename T, int len>
void Print(T *arr)
{
	cout << "Inside Print function!" << endl;
	cout << "Value of len passed is: " << len << endl;
	cout << "Printing arr =>" << endl;
	for (int i = 0; i < len; ++i)
		cout << arr[i] << " ";
	cout << endl;

	return;
}

int main()
{
	float f[] = {5.6, 78.6, 12.3};
	Print<float, 3>(f);

	char c[] = {'k', 'r', 'i', 's', 'h', 'n', 'a'};
	Print<char, 7>(c);

	return 0;
}
