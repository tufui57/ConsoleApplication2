#include <iostream>
using namespace std;

// Show multiples of "x" with the size is "array_size".

const int array_size = 4; // array_size shouldn't be changed anywhere. So, it's declared as const.

void Init(int array[]) {
	int x = 2;
	for (int i = 0; i < array_size; ++i) {
		array[i] = i * x;
	}
}

void show(int array[]) {
	for (int i = 0; i < array_size; ++i) {
		cout << array[i] << ' ';
	}
	cout << endl;
}

int main() {
	int n[array_size];
	Init(n);
	show(n);
}