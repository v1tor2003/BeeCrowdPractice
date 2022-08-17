// Logical Sequence

#include <iostream>
#include <math.h>
using namespace std;


int main() {
	int N, i;
	cin >> N;
	for (int count = 1; count <= N; count++) {
		cout << count << " " << count * count << " " << count * count * count<< endl;
		cout << count << " " << count * count + 1 << " " << count * count * count + 1 << endl;
	}
	return 0;
}
