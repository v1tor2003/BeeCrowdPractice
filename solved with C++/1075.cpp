// Remaining 2

#include <iostream>
using namespace std;

void printNumbers(int N){
	for (int i = 0; i < 10000; i++) {
		if (i % N == 2) {
			cout << i<<endl;
		}
	}
}
int main() {
	int N;
	cin >> N;
	printNumbers(N);
    return 0;
}
