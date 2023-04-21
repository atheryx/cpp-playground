#include <iostream>
#include <algorithm>

using namespace std;

void Print(int *a)
{
	for (int i = 0; i < 7; ++i)
		cout << a[i] << " ";
	cout << endl;

	return;
}

int main()
{
	int a[] = {4, 2, 90, 192, 1, 2345, 124097};
	sort(begin(a), end(a));
	cout << "Sorted arr: ";
	Print(a);

	int ret = binary_search(begin(a), end(a), 2);
	cout << "192 fouund @ " << ret << endl;

	return 0;
}
