#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 0;
	int c;

	try {
		if (!b) {
			throw "divide by zero error!";
		}

		/* when b = 0, everything else in the try block is skipped */
		c = a/b;
		cout << c << endl;

	} catch(const char *s) {
		cout << "ERROR: " << s << endl;
	}

	cout << "This runs!" << endl;
 
	return 0;
}