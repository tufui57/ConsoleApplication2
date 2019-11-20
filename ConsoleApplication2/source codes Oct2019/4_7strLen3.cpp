#include <iostream>

using namespace std;

int StrLen(const char* str) { // Why "size_t"? "int" works samely here.
	int i;
	for (i = 0; *(str + i) != '\0'; ++i) {
		// Do nothing
	}
	return i;
}

void showlength(const char* str) {
	cout << "The length of character strings \'" << str << "\' is "
		<< StrLen(str) << " bytes." << endl;
}

int main() {
	showlength("mopemopeo");
	showlength("");
}
