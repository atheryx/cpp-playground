#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
class Array {
	int len;
	std::vector<T> arr;
	public:
		Array();
		int binary_search(int, int, T);
		inline int size() { return len; }
};

template<typename T>
Array<T>::Array() 
{
	T tmp;
	std::cout << "Enter the length: ";
	std::cin >> this->len;

	for (int i = 0; i < len; ++i) {
		std::cout << "Enter the value: ";
		std::cin >> tmp;

		(this->arr).push_back(tmp);
	}

	std::cout << "Unsorted: " << std::endl;
	for (auto it : arr) {
		std::cout << it << " ";
	}
	std::cout << std::endl;

	sort(arr.begin(), arr.end());

	std::cout << "Sorted: " << std::endl;
	for (auto it : arr) {
		std::cout << it << " ";
	}
	std::cout << std::endl;

	return;
}

template<typename T>
int Array<T>::binary_search(int left, int right, T key)
{
	if (left > right)
		return -1;
	
	int mid = (left + right) / 2;
	if (key > (this->arr)[mid]) {
		return binary_search(mid+1, right, key);
	} else if (key < (this->arr)[mid]) {
		return binary_search(left, mid-1, key);
	} else if (key == (this->arr)[mid]){
		return mid;
	}

	return -1;
}


int main()
{
	Array<int> a;
	std::cout << a.binary_search(0, a.size(), 3) << std::endl;

	Array<char> c;
	std::cout << c.binary_search(0, c.size(), 'k') << std::endl;

	std::cin.get();
}