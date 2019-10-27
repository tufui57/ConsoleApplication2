#include "pch.h"
#include <iostream>

using namespace std;

void westernShowa(int& x) {
	if (1926 <= x && x <= 1989) {
		x -= 1925;
	}
	else {
		x = 0;
	}
}

// reference
	void Showa() {
		int a, res;

		cout << "Put your birth year > " << flush;
		cin >> a;

		westernShowa(a);

		if (a > 0) {
			cout << "Your birth year is Showa" << a << endl;
		}
		else {
			cout << "Your birth year is not in Showa." << endl;
		}
	}


int main() {
	//cout << sizeof(int) << endl;
	//cout << sizeof(short) << endl;
	//cout << sizeof(long) << endl; cout << sizeof(double) << endl;
	//cout << sizeof(unsigned char) << endl; cout << sizeof(long double) << endl;
	Showa();
	Showa();
	
}