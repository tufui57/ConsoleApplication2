#include "pch.h"
#include <iostream>

using namespace std;

void code(char ch) {
	cout << (int)(unsigned char)ch << endl;
}

int main()
{
	int i;
	char Hello[] = "hello";

	cout << "convert \"" << Hello << "\" to the code number" << endl;

	for (i = 0; i < 5; i++)
		cout << (int)(unsigned char)Hello[i] << ", ";

	cout << (int)(unsigned char)Hello[5] << endl;

	code('h');
	code('e');
	code('l');
	code('l');
	code('o');
	
	// Japanese characters are not correctly recongnised in my environment.
	code('ぱ');
	code('な');
	code('ま');

	char jp[] = "あすきー♡";
	cout << (int)sizeof jp;

	// cast
	cout << (double)(unsigned char)Hello[2] << endl;
	cout << (double)Hello[2] << endl;
}