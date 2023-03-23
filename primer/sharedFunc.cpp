/* Modified intArray.cpp where constructors use a single function */

#include <iostream>
using namespace std;

class IntArray {
	public:
		explicit IntArray( int sz = defaultArrSize );
		IntArray( int * arr, int arr_size );
		IntArray( const IntArray& rhs );

		void printArr();
		int size() { return _size; }
		void newVal(int *, int);

	private:
		void init(int sz, int *arr);
		static const int defaultArrSize = 5;
		int _size;
		int *ia;
};

IntArray::IntArray(int sz) { init(sz, 0); }

IntArray::IntArray(int *arr, int arr_size) { init(arr_size, arr); }

IntArray::IntArray( const IntArray& rhs) { init(rhs._size, rhs.ia); }

void IntArray::init(int sz, int *arr) {
	this->_size = sz;
	this->ia = new int[sz];

	for (int i = 0; i < sz; ++i) {
		if (!arr) // this will test if arr is pointing to NULL
			this->ia[i] = 0;
		else
			this->ia[i] = arr[i];
	}

	return;
}

void IntArray::printArr() {
	for (int i = 0; i < _size; ++i) {
		cout << this->ia[i] << " ";
	}

	cout << endl;
}

void IntArray::newVal(int *arr, int size) {
	if (this->_size != size) {
		cout << "err: both arrays are not of same size" << endl;
		return;
	}

	for (int i = 0; i < size; ++i) {
		this->ia[i] = arr[i];
	}
}

int main(void) 
{
	int arr1[] = {0, 2, 3, 4};
	IntArray a1(arr1, 4);
	a1.printArr();

	return 0;
}