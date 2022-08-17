// Sequence IJ 2 

#include <iostream>
using namespace std;

int main() {
	int I = 1, J, Jstart = 7;
	int control = 0, count, count_aux;

	J = Jstart;
	for (count = I; I <= 9; count++) {
		for (count_aux = 0; count_aux < 3; count_aux++) {
			cout << "I=" << I << " J=" << J << endl;
			J = J - 1;
		}
		J = Jstart;
		I = I + 2;
	}
  
  return 0;
}