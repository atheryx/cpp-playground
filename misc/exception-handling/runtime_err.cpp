#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
        int a, b, c;
        
        try {
                cout << "Enter a and b: ";
                cin >> a >> b;

                if (!b) 
                        throw runtime_error("Divide by zero!");
                
                c = a/b;
                cout << c << endl;

        } catch (runtime_error &err) {
                cout << "ERROR: " << err.what();
        }

        return 0;
}