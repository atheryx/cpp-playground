#include <iostream>
#include <exception>
#include <cstring>

class Exception {
public:
    int what;
    char str_what[80];

    Exception() { *str_what = 0, what = 0; }

    Exception(char *s, int i) {
        strcpy(str_what, s);
        what = i;
    }
};

int main()
{
    int i;

    try {
        std::cout << "Enter a positive number: ";
        std::cin >> i;

        if (i < 0) {
            throw Exception("Not positive", i);
        }
    } catch (Exception e) {
        std::cout << "Caught exception: " << e.str_what;
        std::cout << "\nValue is = " << e.what << std::endl;
    }

    std::cin.get();
}