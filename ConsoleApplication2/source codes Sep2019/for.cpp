#include <pch.h>
#include <iostream>

using namespace std;

	int scores[] = {
		1,2,3,4,5,5,6.66,76,76
	};

	int main() {


	int sum = 0;

	// Even "i = 9; i < 10" can return the answer, not the error code.
	for (int i = 0; i < 8; ++i) {
		sum += scores[i];
	}

	cout << "average = " << sum / 8.0 << endl;
}

