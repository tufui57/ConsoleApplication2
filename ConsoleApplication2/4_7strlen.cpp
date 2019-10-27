#include <iostream>

using namespace std;

size_t StrLen(const char* str) { 
	// why the sample code is char*, not const char*? Using char*, I've got an error saying "C++ argument of type "const char *" is incompatible with parameter of type "char *"" 
	size_t i; // data type "size_t"?
	for (i = 0; str[i] != '\0'; ++i) {
		// Do nothing
	}
	return i;
}

void showlength(const char* str) {
	cout << "The length of character strings \'" << str << "\' is "
		<< StrLen(str) << " bytes." << endl;
}

int main() {
	showlength("mocyaa");
	showlength("");
}