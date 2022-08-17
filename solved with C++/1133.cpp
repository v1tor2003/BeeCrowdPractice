// Rest of a Division

#include <iostream>
using namespace std;


void showNumber(int X, int Y, int divider) {
	for (int count = X + 1; count < Y; count++) {
		if ((count % divider == 2) || (count % divider == 3)) {
			cout << count << endl;
		}
	}
}


int main() {
	int X, Y;
	int divider = 5;
	cin >> X;
	cin >> Y;

	if (Y < X) {
		int swap = X;
		X = Y;
		Y = swap;
	}

	showNumber(X, Y, divider);

	return 0;
}
