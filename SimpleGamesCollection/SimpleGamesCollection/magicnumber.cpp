#include <iostream>
#include <cstdlib>
using namespace std;

void magicnumber() {
	int magic;
	int guess;

	cout << "*** Magic number ***\n";

	magic = rand();

	cout << "Enter your value: ";
	cin >> guess;

	if (guess == magic) {
		cout << "You are right!\n";
		cout << "Magic number and your are equal.\n";
	}
	else if (guess > magic) {
		cout << "You are wrong!\n";
		cout << "Your value is greater than magic number.\n";
		cout << "Your luck next time.\n";
	}
	else if (guess < magic) {
		cout << "You are wrong!\n";
		cout << "Your value is less than magic number.\n";
		cout << "Your luck next time.\n";
	}
}