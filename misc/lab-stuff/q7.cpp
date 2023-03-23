#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
	vector<int> v, x;
	list<int> l;

	int size, i, tmp;
	cout << "What should be the size of the vector? ";
	cin >> size;

	for (i = 0; i < size; ++i) {
		cout << "Enter the element: ";
		
		cin >> tmp;
		v.push_back(tmp);
		l.push_back(tmp);
	}
	
	cout << "\nVector contents: " << endl;
	for (auto it : v)
		cout << it << " ";
	cout << endl << endl;

	cout << "List contents: " << endl;
	for (auto it : l)
		cout << it << " ";
	cout << endl << endl;

	l.sort();
	cout << "List contents after sorting: " << endl;
	for (auto it : l)
		cout << it << " ";
	cout << endl << endl;

	return 0;
}
