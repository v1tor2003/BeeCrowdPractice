// Easy Fibonacci

#include <iostream>
using namespace std;

int fibonacci(int N) {
	if (N == 0) {
		return 0;
	}
	if (N == 1 || N == 2) {
		return 1;
	}
	else {
		return fibonacci(N - 1) + fibonacci(N - 2);
	}
}
int main() {
	int N;
	cin >> N;
	while (N < 0 && N > 46) {
		cin >> N;
	}

	for (int i = 0; i < N; i++) {
		if (i == N -1){
			cout << fibonacci(i);
		}
		else {
			cout << fibonacci(i)<<" ";
		}
	}

	cout << endl;

	return 0;
}