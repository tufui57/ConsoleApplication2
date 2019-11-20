#include <iostream>
using namespace std;

// Show name of month for a given number.

const char* const months[] = {// why months is declared as const twice?
	"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
}; 

const char* getMonth(int month){

	if (1<= month && month <= 12) {
		return months[month - 1];
	}
	return 0;
}

int main() {
	int month;
	cout << "Which month is it now?" << flush;
	cin >> month;

	const char* name = getMonth(month);
	
	if (name == 0)
	{
		cout << "There is no such a month." << endl;
	}
	else
	{
		cout << name << endl;
	}
	
}