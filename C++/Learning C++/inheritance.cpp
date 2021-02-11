#include <iostream>
using namespace std;

class Chef {
	public:
		void makeChicken() {
			cout << "The chef makes chicken" << endl;
		}
		void makeSalad() {
			cout << "The chef makes salad" << endl;
		}
		void makeSpecialDish() {
			cout << "The chef makes bbq ribs" << endl;
		}
};

//This is how you inherit from other classes
class ItalianChef : public Chef {
	public:
		void makePasta() {
			cout << "The chef makes pasta";
		}
		//This is how you override stuff
		void makeSpecialDish() {
			cout << "The chef makes chicken parm" << endl;
		}
};

int main() {
	Chef chef;
	chef.makeSpecialDish();

	ItalianChef italianChef;
	italianChef.makeSpecialDish();
}