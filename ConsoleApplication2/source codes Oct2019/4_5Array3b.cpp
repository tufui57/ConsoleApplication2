#include <iostream>

using namespace std;

void show(char array[]) {
	for (int i = 0; i < 10; ++i) {
		cout << (size_t)&array[i] << endl;
	}
}

void showaddress(char* pointer) {
	cout << "pointer: " << (size_t)pointer << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "&pointer: " << (size_t)&pointer[i] << endl;
	}
	
}

int main() {
	char s[2];
	show(s);
	showaddress(s);
}
