#include "pch.h"
#include <iostream>
#include <cstdio>

using namespace std;

void code(char ch) {
	cout << (int)(unsigned char)ch << endl;
}

int main()
{
	char Hello[] = "hello!";
	cout << strlen(Hello);
	// the following returns error
	cout << strcat(Hello, "ffggh");


	//Hello[4] = '\0';
	cout << "convert \"" << Hello << "\" to the code number" << endl;



	for (int i = 0; Hello[i] != '\0'; ++i) {
		cout << (int)(unsigned char)Hello[i] << ", ";
	}
		

	cout << 0 << endl;

	for (int i = 0; Hello[i] != 0; ++i) {
		cout << (int)(unsigned char)Hello[i] << ", ";
	}


	cout << 0 << endl;
}