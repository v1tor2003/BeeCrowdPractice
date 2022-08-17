// Simple Sort

#include <iostream>
using namespace std;

void insertData(int* ary, int* arycpy, int size) {
	int count;
	for (count = 0; count < size; count++) {
		cin >> ary[count];
		arycpy[count] = ary[count];
	}
}

void printAsc(int* arycpy, int size) {
	for (int count = 0; count < size; count++) {
		cout << arycpy[count] << endl;
	}
}

void sortAry(int* ary, int size) {
	int swap;
	for (int count = 0; count < size - 1; count++) {
		if (ary[count] > ary[count + 1]) {
			swap = ary[count];
			ary[count] = ary[count + 1];
			ary[count + 1] = swap;
			if (ary[0] > ary[1]) {
				swap = ary[0];
				ary[0] = ary[1];
				ary[1] = swap;
			}
		}
	}
}

void printAry(int* ary, int size) {
	for (int count = 0; count < size; count++) {
		cout << ary[count]<<endl;
	}
	cout << endl;
}


int main() {
	int ary[3], arycpy[3];
	int size = sizeof(ary) / sizeof(ary[0]);
	insertData(ary, arycpy,size);
	sortAry(ary, size);
	printAry(ary, size);
	printAsc(arycpy,size);
	return 0;
}