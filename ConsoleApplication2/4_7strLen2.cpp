#include <iostream>

using namespace std;

size_t StrLen(char* str) {
	char* p;
	for (p = str; *p != '\0'; ++p) {
		// Do nothing
	}
	return p - str;
}

void showlength(char* str) {
	cout << "The length of character strings \'" << str << "\' is "
		<< StrLen(str) << " bytes." << endl;
}

int main() {
	showlength("mocyaa");
	showlength("");
}