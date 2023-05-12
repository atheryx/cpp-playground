#include <iostream>
using namespace std;

union Collection {
    int x;
    float f;
    char c;
};

int main()
{
    union Collection c;

    printf("%d, %d, %d", c.c, c.f, c.x);
    
    return 0;
}