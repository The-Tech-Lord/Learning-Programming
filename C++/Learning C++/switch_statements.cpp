#include <iostream>
using namespace std;

string getDayofWeek(int dayNum) {
	string dayName;

	//Using switch can be much more efficient in certain cases like this
	switch(dayNum) {
		case 0: //Saying if dayNum is equal to 0, do this
			dayName = "Sunday";
			break;
		case 1:
			dayName = "Monday";
			break;
		case 2:
			dayName = "Tuesday";
			break;
		case 3:
			dayName = "Wednesday";
			break;
		case 4:
			dayName = "Thursday";
			break;
		case 5:
			dayName = "Friday";
			break;
		case 6:
			dayName = "Saturday";
			break;
		default: //Runs if none of the cases are true
			dayName = "Invalid Day Number";
	}

	return dayName;
}

int main() {
	cout << getDayofWeek(1);
}