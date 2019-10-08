
#include <pch.h>
#include <iostream>

using namespace std;

int a = 0;
int b = 0;

void Inc()
{
	int b = 0;
	a++;
	b++;
	cout << a << " <- a | b -> " << b << endl;
	return;
}

int main()
{
	Inc();
	Inc();
	Inc();
	return 0;
}

int main()
{
	int a;

	cout << "enter value > ";
	cin >> a;

	cout << "the number divided by 3 makes"
		<< a % 3 << endl;

	return 0;
}