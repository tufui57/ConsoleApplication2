#include <iostream>

using namespace std;

void Init(int array[]) {
	for (int i = 0; i < 5; ++i) {
		array[i] = i * 5;
	}
}

void show(int array[]) {
	for (int i = 0; i < 5; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
}

int main() {
	int n[5];
	// Multiply elements in the array by 5.
	Init(n);
	// Show the elements in the array
	show(n);
}