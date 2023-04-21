#include <iostream>
using namespace std;

template<class T>
class Array {
private:
	T *ptr;
	int size;
public:
	Array(T *, int);
	void Print();
};


template<class T>
Array<T>::Array(T *a, int len) {
	this->size = len;
	this->ptr = a;
}

template<class T>
void Array<T>::Print()
{
	for (int i = 0 ; i < this->size; ++i) {
		cout << ((this->ptr)[i]) << " ";
	}

	cout << endl;

	return;
}


int main()
{
	float a[] = {9.6, 7.8, 10.1};
	Array<float> q(a, 3);
	
	q.Print();

	return 0;
}
