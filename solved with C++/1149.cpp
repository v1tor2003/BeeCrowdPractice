// Summing Consecutive Integers

#include <iostream>
using namespace std;

void Sum(int A, int N) {
	int sum = 0;
	while (N == 0 || N < 0) {
		cin >> N;
	}
	for (int i = A; i < (A + N); i++) {
		sum += i;
	}
	cout << sum << endl;
}


int main() {
	int A, N;
	cin >> A >> N;
	Sum(A, N);
	return 0;
}
