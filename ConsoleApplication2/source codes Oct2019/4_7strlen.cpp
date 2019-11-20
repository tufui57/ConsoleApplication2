#include <iostream>

using namespace std;

size_t StrLen(char* str) {
	size_t i; // data type "size_t"?
	for (i = 0; str[i] != '\0'; ++i) { // Do not use "" instead of ''.
		// Do nothing
	}
	return i;
}

void showlength(char* str) {
	cout << "The length of character strings \'" << str << "\' is "
		<< StrLen(str) << " bytes." << endl;
}

int main() {
	showlength("mocyaa");
	showlength("");
}

// Using char*, I've got an error saying "C++ argument of type "const char *" is incompatible with parameter of type "char *"" 
// This error can be solved by using const char*. But const char* shouldn't be used in this case.	
