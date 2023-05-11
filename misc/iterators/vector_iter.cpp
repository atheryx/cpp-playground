#include <iostream>
#include <vector>


using namespace std;

int main()
{
	std::vector<int> values = { 1, 2, 3, 4, 5 };


	for(int i = 0; i < values.size(); ++i) {
		cout << values[i] << endl;
	}

	// range based for loop
	for (int value : values) {
		cout << value << endl;
	}

	for (vector<int>::iterator it = values.begin(); 
		it != values.end(); ++it) {

			cout << *it << endl;
	}

	return 0;
}