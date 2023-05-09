#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
        try {
                try {
                        throw "krishna";

                } catch (const char *p) {
                        cout << "[INNER]char err: " << p << endl;
                        throw p;
                } catch (...) {
                        cout << "[INNER]some exceptions occured" << endl;
                        throw -1;
                }


        } catch (const char *s) {
                cout << "[OUTTER]char err: " << s << endl;
        } catch (...) {
                cout << "[OUTTER]some exceptions occured" << endl;
        }

        return 0;
}