#include <iostream>
using namespace std;

void miletokilometer() {
	double miles, kilometers;

	cout << "Enter miles value: ";
	cin >> miles;
	
	kilometers = miles * 1.609;

	cout << "Kilometers: " << kilometers;
}