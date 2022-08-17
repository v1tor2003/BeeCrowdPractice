// Array Fill III

#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

void fill_array(double *ary, double input) {
	ary[0] = input;
	cout << fixed << showpoint;
	cout << setprecision(4);
	cout << "N[0] = " << ary[0] << endl;
	for (int i = 1; i < 100; i++) {
		ary[i] = ary[i - 1] / 2.0;
		cout << fixed << showpoint;
		cout << setprecision(4);
		cout << "N[" << i << "] = " << ary[i] << endl;
	}
}

int main() {
	double ary[100] = {0.0};
	double input;
	cin >> input;
	fill_array(ary, input);
}