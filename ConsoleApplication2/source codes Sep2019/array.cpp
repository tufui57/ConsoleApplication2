#include <pch.h>
#include <iostream>

using namespace std;

int main() {
	int scores[10];

	scores[0] = 2;
	cout << "scores[0] = " << scores[0] << endl;

	scores[0] = 9;
	cout << "scores[1] = " << scores[1] 
		<< "scores[0] = " << scores[0] << endl;
}


