#include <iostream>
#include <cstdio>
using namespace std;

// Show Kuku, a matrix of multiples

int main(){
	const int kuku_size = 9;
	int kuku[kuku_size][kuku_size];
	
	for(int i = 1; i <= kuku_size; ++i){
		for(int j = 1; j <= kuku_size; ++j) {
			kuku[i - 1][j - 1] = i * j;
		}
	}
	
	cout << "   1 2 3 4 5 6 7 8 9" << endl;

// the output is wierd.
	for (int i = 0; i <= kuku_size; ++i) {
		printf(" %d ", i);
		for (int j = 0; j <= kuku_size; ++j) {
			printf("%2d ", kuku[i-1][j-1]);
		}
	}
	
}



