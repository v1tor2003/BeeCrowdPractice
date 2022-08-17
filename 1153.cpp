// Simple Factorial

#include <iostream>
using namespace std;

int fatorial(int N) {
	if (N == 0 || N == 1) {
		return 1;
	}
	else {
		return N * fatorial(N - 1);
	}
}

int main() {
	int N;
	cin >> N;
	int result = fatorial(N);
	cout << result << endl;

	return 0;
}