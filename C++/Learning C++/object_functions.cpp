#include <iostream>
using namespace std;

class Student {
	public:
		string name;
		string major;
		double gpa;
		Student(string aName, string aMajor, double aGpa) {
			name = aName;
			major = aMajor;
			gpa = aGpa;
		}

		//This is an object function
		bool hasHonors() {
			if(gpa >= 2.0) { //You can change this if you want
				return true; //Prints out as 1
			}
			return false; //Prints out as 0
		}
};

int main() {
	Student student1("Jim", "Business", 2.4);
	Student student2("Pam", "Art", 3.6);

	cout << student1.hasHonors();
}