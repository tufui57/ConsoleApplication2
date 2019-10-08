#include <iostream>

using namespace std;


//void show(char array[]) {
//	int i = 0;
//	while (i <= sizeof(array)) {
//		cout << (size_t)&array[i] << " ";
//		++i;
//	}
//	cout << endl;
//}
//
//// whatever number I give as the number of array s, the output shows 5 elements. why? 
//int main() {
//	char s[2];
//	show(s);
//
//}


void show(char array[]) {
	for (int i = 0; i < 4; ++i) {
		cout << (size_t)&array[i] << endl;
	}
}

// Why the number of output is always "i"? The number of elements in the array s is 2, though.
int main() {
	char s[2];
	show(s);

}