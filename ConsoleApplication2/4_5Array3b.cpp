#include <iostream>

using namespace std;

void showAddress(char* pointer) {
	cout << (size_t)pointer << endl;
	for (int i = 0; i < 10; ++i) {
		cout << (size_t)&pointer[i] << endl;
	}
}

int main() {
	char array[7];
	cout << (size_t)array << endl;

	cout << endl;
	showAddress(array);
}