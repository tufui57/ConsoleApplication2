#include <iostream>

using namespace std;

const int MAX_NAME = 16;

struct Student {

	char name[MAX_NAME + 1];
	int scoreJp;
	int scoreMath;
	int scoreEng;

};
// the next line declared an object "student" which has Student structure?
void show(const Student &student){ // &student is the address of student. Is "Student& student" = "Student &student"?
	
	cout << "Name " << student.name << endl
	<< "Japanase " << student.scoreJp <<
	", Math " << student.scoreMath <<
	", English " << student.scoreEng << endl;

}
int main(){
	Student student[] = {
	{"Jhon McDonald", 10, 78, 50,},
	{"Wayne Stephenson", 6, 88, 98,}

};
	// size = the number of elements = data size of student (byts) / data size of one element of student 
	// data size of one element of student = address of student?
int size = sizeof student / sizeof * student;
for (int i = 0; i < size; ++i) {
	show(student[i]);
}
 }