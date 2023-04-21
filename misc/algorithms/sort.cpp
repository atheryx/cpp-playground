#include <iostream>
#include <algorithm>

using namespace std;

void Print(int *a)
{
	for (int i = 0; i < 5; ++i)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int a[]= {45, 112, 92, 32, 61};

	cout << "Init" << endl;
	Print(a);

	sort(begin(a), end(a));

	cout << "Final" << endl;
	Print(a);

	return 0;
}
