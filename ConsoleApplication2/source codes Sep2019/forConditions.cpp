#include <pch.h>
#include <iostream>

using namespace std;

int main() {
	int a = 0;
	for (int i = 0; a < 10; ++i) {
		cout << i << "," << a << endl;
		a += 2;

	}

	// the following makes an array increasing by 3.
	for (int i = 0; i < 10; ++i) {
		cout << i << endl;
		i += 2;

	}

	// no need for i?
	int b = 0;
	for (; b < 10;) {
		cout << b << endl;
		b += 2;

	}
	
	// infinite loop
	int d = 0;
	for (; ;) {
		cout << d << endl;
		d += 2;

	}
}

