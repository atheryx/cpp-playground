#include <iostream>
using namespace std;

class IntArray {
	public:
		explicit IntArray( int sz = defaultArrSize ); // this is the defualt constructor here
		IntArray( int * arr, int arr_size );
		IntArray( const IntArray& rhs );

		void printArr();
		int size() { return _size; } // treated as an inline function by default
		void newVal(int *, int);
	private:
		/* variables declared with static will appear only once
		despite the number of class objects 
		It's a way of sharing data among all objects of that class */
		static const int defaultArrSize = 12;
		int _size;
		int *ia;
};

IntArray::IntArray(int sz) {
	cout << "Default constructor called" << endl;
	_size = sz;
	ia = new int[sz];

	// initiallizing the memory
	for (int i = 0; i < sz; ++i) {
		ia[i] = 0;
	}
}

IntArray::IntArray(int *arr, int arr_size) {
	cout << "param constructor called" << endl;
	ia = new int[arr_size];
	_size = arr_size;
	for (int i = 0; i < arr_size; ++i) {
		ia[i] = arr[i];
	}
}

IntArray::IntArray( const IntArray& rhs) {
	cout << "Copy constructor called" << endl;
	this->_size = rhs._size;
	this->ia = new int[this->_size];

	for (int i = 0; i < _size; ++i) {
		this->ia[i] = rhs.ia[i];
	}
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
	int arr1[] = {1, 3, 5, 7};
	IntArray a1(arr1, 4);
	cout << "a1: ";
	a1.printArr();

	int arr2[] = {4, 5, 6, 9};
	IntArray a2(arr2, 4);
	cout << "a2: ";
	a2.printArr();

	IntArray a3(a2);
	/* IntArray a3 = a2 also works */
	cout << "a3: "; 
	a3.printArr();

	cout << "\nmodified a3 val: ";
	a3 = a1; 
	a3.printArr();

	/* Since this program doesn't have a copy assignment operator,
		the default method will copy a1.ia's pointer values and give it to a3.ia
		So any changes in a1 will also lead to changes in a3 */
	a1.newVal(arr2, 4);
	cout << "New a1: ";
	a1.printArr();
	cout << "New a3: ";
	a3.printArr();

	return 0;
}