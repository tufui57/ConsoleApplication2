#include <iostream>

using namespace std;
int main()
{
	int  a;
	// Pointer
	int* b;

	b = &a;

	cout << "b; " << b << endl;
	cout << "&a; " << &a << endl;
	// show in decimal value
	cout << "b; " << (size_t) b << endl;

	return 0;
}