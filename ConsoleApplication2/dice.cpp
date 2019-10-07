#include <iostream>
// why I couldn't include the "cstdlib" in VS2017?
#include <cstdlib>
#include <ctime>

using namespace std;

//int dice() {
//	return (int)(rand() / (RAND_MAX + 1.0)* 6) + 1;
//}
//int main() {
	//for (int i = 0; i < 20; ++i) {
	//	cout << dice() + dice() << endl;
	//}
//}

void InitialRand() {
	srand((unsigned int)time(NULL));
}

int dice() {
	return rand() % 6 + 1;
}

int main() {
	cout << time(NULL);
	InitialRand();
	for (int i = 0; i < 20; ++i) {
		cout << dice() + dice() << endl;
	}
}