#include <iostream>
using namespace std;

void gallontoliter();
void kilometertometer();

int main() {
	int x = 0;
	cout << "Chose option:\n";
	cout << "1) Gallons To Liters;\n";
	cout << "2) Kilometers To Meters;\n";
	cout << "-> ";
	cin >> x;
	switch (x) {
	case 1:
		gallontoliter();
		break;

	case 2:
		kilometertometer();
		break;
	}
	return 0;
}