#include <iostream>

using namespace std;


void show(char array[]) {
	int i = 0;
	while (i <= sizeof(array)) {
		cout << (size_t)&array[i] << " ";
		++i;
	}
	cout << endl;
}

// whatever number I give as the number of array s, the output shows 5 elements. why? 
int main() {
	char s[12];
	show(s);

}