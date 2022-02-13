#include <iostream>
using namespace std;

void showmenu();
void magicnumber();

int main() {
	int x;
	cout << "*** Simple Games Collection. ***\n";
	showmenu();
	cout << "=>";
	cin >> x;

	switch (x) {
	case 1:
		magicnumber();
		break;
	}

	return 0;
}