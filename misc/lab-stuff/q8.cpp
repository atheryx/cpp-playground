#include <iostream>
#include <string.h>

using namespace std;

template<typename T>
int search(T *p, T key, int left, int right)
{
	if (left > right)
		return -1;

	int mid = (left + right) /2 ;
	if (p[mid] > key) {
		return (search(p, key, left, mid-1));
	} else if (p[mid] < key) {
		return (search(p, key, mid+1, right));
	} else if (p[mid] == key)
		return mid;

	return -1;
}

int main()
{
	int arr[] = {1, 3, 5, 6, 9};
	for (int i = 0; i < 5; ++i)
		cout << arr[i] << " ";
	cout << endl;
	
	int tmp;
	cout << "search for? ";
	cin >> tmp;

	cout << "Item found at: " << search<int>(arr, tmp, 0, 4) << endl;

	return 0;
}
