#include <iostream>

using namespace std;

const int MAX_NAME = 16;

struct Student {

	char name[MAX_NAME + 1];
	int scoreJp;
	int scoreMath;
	int scoreEng;

};

void show(const Student* pointer) {
	cout << "Name " << (*pointer).name << endl // (*pointer) equals to &pointer?
		<< "Japanase " << (*pointer).scoreJp <<
		", Math " << (*pointer).scoreMath <<
		", English " << (*pointer).scoreEng << endl;

}
int main() {
	Student student[] = {
	{"Jhon McDonald", 10, 78, 50,},
	{"Wayne Stephenson", 6, 88, 98,}

	};
	int* pointer;
	int size = sizeof student / sizeof student[0]; // sizeof *student == sizeof student[0]
	for (int i = 0; i < size; ++i) {
		show(&student[i]); // show() takes address as the argument. 
	}
}
