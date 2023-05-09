#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	try {
		throw 5.6;
		throw runtime_error("abc");
		throw 8;
		throw "some exception";

	} catch (const char *s) {
		cout << "ERROR: " << s << endl;

	} catch (const char *s) {

		/* This wont be executed, since exceptions will be 
		caught by the above catch with same args */
		cout << "ERROR: " << s << endl;

	} catch (int err) {

		cout << "INT ERROR: " << err << endl;

	} catch (runtime_error &err) {

		cout << "RUNTIME: " << err.what() << endl;

	} catch (...) {
		/* This can catch all exceptions */
		cout << "some exceptions occured!" << endl;
	} 

	return 0;
}