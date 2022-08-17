// Growing Sequences

#include <iostream>
#include <iomanip>
using namespace std;

void printSequence(int X){ 
	bool first_time = true;
	for (int i = 0; i < X; i++) {
		if (first_time) {
			cout << i+1;
			first_time = false;
		}
		else {
			cout << " " << i+1;
		}
	}
	cout << endl;
}
int main() {
	int X;

	while (true) {
		cin >> X;
		if (X == 0) {
			return 0;
		}
		printSequence(X);
	}
	
	return 0;
}