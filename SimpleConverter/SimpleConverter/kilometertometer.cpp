#include <iostream>
using namespace std;

void kilometertometer() {
	double meters, kilometers;

	cout << "Enter kilometers: ";
	cin >> kilometers;

	meters = kilometers * 1000;

	cout << meters << "\n";
}