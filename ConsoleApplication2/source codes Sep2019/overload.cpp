#include <iostream>


using namespace std;

int Abs(int a) {
	if (a < 0) {
		return -a;
	}
	else {
		return a;
	}
}

double Abs(double a) {
	if (a < 0) {
		return -a;
	}
	else {
		return a;
	}
}

int inp(int& i, double& d) {

	cout << "Put an integer" << flush;
	cin >> i;
	if (i == 0) {
		return false;
	}

	cout << "Put a floating number" << flush;
	cin >> d;
	if (d == 0) {
		return false; // return 0;
	}

	return true;

}

void showAbs(int i, double d) {

	cout << Abs(i) << endl;
	cout << Abs(d) << endl;

}

int main() {
	int i;
	double d;

	while (inp(i, d) != 0) {
		showAbs(i, d); // what's the error, Using uninitialized memory "i", when while() isn't added?
	}
	
}

// The followings don't work because the of the error, uninitialized memory.

//
//int main() {
//	inp(20, -0.87654);
//	inp(-98, -9.9999);
//}

//int main{
//	int b;
//	double c;
//
//	cin >> b;
//	cin >> c;
//
//	cout << Abs(b) << endl;
//	cout << Abs(c) << endl;
//}