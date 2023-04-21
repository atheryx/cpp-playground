#include <iostream>
using namespace std;

/*
class Array
{
	private:
		// int m_Array[size];
		// This isn't possible, 
		// Since this is stack allocated,
		// the size must be known at compile time
};
*/

// TO overcome this problem:
template<int N>
class Array
{
private:
	int m_Array[N];
public:
	int GetSize() const { return N; }

};

template<typename T, int N>
class Array2
{
private:
	T c_Array[N];
public:
	int GetSize() const { return sizeof c_Array; }
};

int main()
{
	/*
	Cannot do this: 
	
	int tmp;
	cout << "Enter tmp val: ";
	cin >> tmp;
	Array<tmp> a;
	
	*/

	Array<7> a;
	Array2<float, 1> f;
	Array2<char, 1> i;
	cout << "Float: " << f.GetSize() << endl;
	cout << "Char: " << i.GetSize() << endl;
}
