#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//int a, b, i;

	//i = 0;

	//while (i < 5)
	//{
	//	cout << "the first value > ";
	//	cin >> a;

	//	cout << "the second value > ";
	//	cin >> b;

	//	if (b == 0)
	//	{
	//		cout << "can't divide by 0" << endl;
	//		//break;
	//		continue;
	//	}

	//	cout << a << " / " << b << " = "
	//		<< a / b << " ... " << a % b << endl;

	//	++i;
	//}

	//cout << "end" << endl;


	//// else
	//int c, d, e;
	//cout << "first value" << endl;
	//cin >> c;
	//cout << "second value" << endl;
	//cin >> d;
	//cout << "which calc" << endl;
	//cin >> e;


	//if (e == 1) {
	//	cout << "c + d = " << c + d << endl;
	//}
	//else if (e == 2) {
	//	cout << "c - d = " << c - d << endl;
	//}
	//else if (e == 3) {
	//	cout << "c / d = " << c / d << endl;
	//}
	//else if (e == 4) {
	//	cout << "c * d = " << c * d << endl;
	//}

	// switch
	int c, d, e;
	cout << "first value" << endl;
	cin >> c;
	cout << "second value" << endl;
	cin >> d;
	cout << "which calc" << endl;
	cin >> e;


	switch (e)
	{
	default:
		cout << "can't calc" << endl;
		break;

	case 1: {
		cout << "c + d = " << c + d << endl;
		break;
	}
	case 2: {
		cout << "c - d = " << c - d << endl;
		break;
	}
	case 3: {
		cout << "c / d = " << c / d << endl;
		break;
	}
	case 4: {
		cout << "c * d = " << c * d << endl;
		break;
	}

	}
}

