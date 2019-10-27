//#include "pch.h"
#include <iostream>

using namespace std;

// Chapter 4-4
// Code to multiply elements in an array by 5, and output the results.


// The output of the following func() is -858993460 -858993460 -858993460 -858993460 -858993460
// What are they?

//void func(int array[]) {
//	int i = 0;
//	int a[10];
//
//	while (i <= sizeof(array)) {
//		a[i] = i * 5;
//		++i;
//	}
//	cout << endl;
//}

// This func() works as I intended.
void func(int array[]) {
	int i = 0;

	while (i <= sizeof(array)) {
		array[i] = i * 5;
		++i;
	}
	cout << endl;
}

void show(int array[]) {
	int i = 0;
	while (i <= sizeof(array)) {
		cout << array[i] << " ";
		++i;
	}
	cout << endl;
}

int main() {
	int s[5];
func(s);
show(s);

}
