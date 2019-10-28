#include <iostream>

using namespace std;

// Show Kuku, a matrix of multiples
const int kuku_size = 9;

int kuku[kuku_size * kuku_size];

for(int i = 1; i <= kuku_size; ++i){
	for(int j = 1; j <= kuku_size; ++j) {
		kuku[(i - 1) * kuku_size + (j - 1)] = i * j;
	}
}
