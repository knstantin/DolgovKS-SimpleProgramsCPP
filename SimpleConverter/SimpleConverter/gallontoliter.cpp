#include <iostream>
using namespace std;

void gallontoliter() {
	double gallons, liters;

	cout << "Enter gallons: ";
	cin >> gallons;

	liters = gallons * 3.7854;
	cout << "Liters: " << liters << "\n";
}