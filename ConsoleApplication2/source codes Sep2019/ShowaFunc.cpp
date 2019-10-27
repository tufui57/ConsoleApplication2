#include <pch.h>
#include <iostream>

using namespace std;

void Showa() {
	int a;

	cout << "Put your birth year > " << flush;
	cin >> a;

	if (a > 1925 && a <= 1988) {
		cout << "Your birth year is Showa" << a - 1925 << endl;
	}
	else {
		cout << "Your birth year is not in Showa." << endl;
	}
}

// main() cannot be changed the name. why one source file cannot have more than 1 main function?
int main() {
	Showa();
}