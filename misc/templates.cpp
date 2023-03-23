#include <iostream>
#include <string.h>


/* We can prevent code duplication by using a template here
 * If we were to overload the functions, the only thing chaning would be the 
 * data type in the argument list, since cout accepts any arguement
 *
 * Using a template solves this issue
 *
 *
 * Instead of "typename" we can also use "classname"
 *
 * Further we can specify the data type while calling it in an 
 * angular bracket
 *
 *
 * IMP: If we do not call the Print func, it does not exist
 * It is a template and gets created when its only called
 *
 * */

template<typename T>
void Print(T value)
{
	std::cout << value << std::endl;
}

int main()
{
	Print(5);
	Print("Hello");
	Print(8.9);

	Print<double>(6.2891);

	return 0;
}
