#include "pch.h"
#include <iostream>
#include <cstdio>

using namespace std;

int f(int x, int y) {
	return 2 * x + y;
}

void show(int x, int y) {
	char str[20];

	sprintf_s(str, "f(%d, %d) = %d", x, y, f(x, y));
	cout << str << endl;
}

int main()
{
	show(2, 3);
}