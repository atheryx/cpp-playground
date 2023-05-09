#include <iostream>
#include <stdexcept>

using namespace std;

void test() 
{
        throw 'k';
}

int main()
{
        try {
                test();
        } catch(int err) {
                cout << "ERROR: " << err << endl;
        } catch (char c) {
                cout << "char type: " << c << endl;
        }

        return 0;
}


