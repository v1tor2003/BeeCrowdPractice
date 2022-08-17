// Logical Sequence II

#include <iostream>
#include <iomanip>
using namespace std;

void printSequence(int X, int Y){
	int control = 0;
	for (int i = 0; i < Y; i++) {
		if(control == 0) {
			cout << i+1;
			control++;
		}
		else {
			cout << " " << i+1;
			control++;
			if(control == X){
				cout << endl;
				control = 0;
			}
		}
	}

}
int main() {
	int X, Y;
	cin >> X >> Y;
	printSequence(X, Y);
	return 0;
}