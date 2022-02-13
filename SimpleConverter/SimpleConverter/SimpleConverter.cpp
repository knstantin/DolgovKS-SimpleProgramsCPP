#include <iostream>
using namespace std;

void gallontoliter();
void kilometertometer();
void miletokilometer();

int main() {
	int x = 0;
	cout << "Chose option:\n";
	cout << "1) Gallons To Liters;\n";
	cout << "2) Kilometers To Meters;\n";
	cout << "3) Miles to Kilometers;\n";
	cout << "-> ";
	cin >> x;
	switch (x) {
	case 1:
		gallontoliter();
		break;

	case 2:
		kilometertometer();
		break;

	case 3:
		miletokilometer();
		break;
	}
	return 0;
}