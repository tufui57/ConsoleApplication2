#include <iostream>

using namespace std;

/// Does each of element in structured variable have its own address?

const int MAX_NAME = 25;

struct Student {

	char name[25]; // why MAX_NAME is needed? Doen't name[26] work here?
	int scoreJp;
	int scoreMath;
	int scoreEng;

};

int main() {
	Student student[] = {
	{"Jhon Abies McDonald", 10, 78, 50,},
	{"Wayne Stephenson", 6, 88, 98,}

	};
	
	cout << "(*student).name; " << (*student).name <<
		", *student -> name; " << *student -> name << // why is this output "J"? The output isn't same as "(*student).name"
		// ", *student -> name; " << &(student[0]) -> name << // why "&(student[0])" makes an error here?
		", &(*student).name; " << &(*student).name <<

		", student[1].name; " << student[1].name <<
		", &student[1].name; " << &student[1].name << endl;

	cout << ", &student; " << &student << 
		// ", (*student); " << (*student) << // Although "(*student)" works as a pointer in "(*student).name", it cannot work samely on its own.
		", &(student[0]); " << &(student[0]) <<
		", &student[0]; " << &student[0]

		<< endl;



 }
