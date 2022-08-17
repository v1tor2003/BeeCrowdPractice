// Divisors I

#include <iostream>
#include <iomanip>
using namespace std;

void printDivisors(int X){ 
	for (int i = 1; i <= X; i++) {
		if (X % i == 0) {
			cout << i<<endl;
		}
	}
}
int main() {
	int X;
	cin >> X;
	printDivisors(X);
	
	return 0;
}