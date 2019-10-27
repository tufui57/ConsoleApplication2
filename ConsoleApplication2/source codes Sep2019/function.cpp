#include <pch.h>
#include <iostream>

using namespace std;

void divide() {
	int c, d;

	cout << "Put the first value > " << flush;
	cin >> c;

	cout << "Put the 2nd value > " << flush;
	cin >> d;

	if (d == 0) {
		cout << "0 cannot divide" << endl;
	} else {
		cout << c << "/" << d << "="
			<< c / d << "..." << c % d << endl;
	}
}

// main() cannot be changed the name. why one source file cannot have more than 1 main function?
int main() {
	divide();
	divide();
}