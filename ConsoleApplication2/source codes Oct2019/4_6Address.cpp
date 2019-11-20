#include <iostream>

using namespace std;

// pointer + 1 = ?

int main() {
	int n[5];
	cout << "&n[2] = " << (size_t)&n[2] << endl;
	cout << "&n[2] + 1 = " << (size_t)&n[2] + 1 << endl;
	cout << "(&n[2] + 1) = " << (size_t)(&n[2] + 1) << endl;
	cout << "&n[3] = " << (size_t)&n[3] << endl;

	cout << "&n[0] = " << (size_t)(&n[0]) << endl;
	cout << "(&n[2] - 2) = " << (size_t)(&n[2] - 2) << endl;

	cout << "&n[1] = " << (size_t)(&n[1]) << endl;
	cout << "(&n[2] - &n[1]) = " << (size_t)(&n[2] - &n[1]) << endl;
}
