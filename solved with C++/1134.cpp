// Type of Fuel

#include <iostream>
using namespace std;

void showResults(int gas, int alcool, int diesel) {
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcool << endl;
	cout << "Gasolina: " << gas << endl;
	cout << "Diesel: " << diesel << endl;
}

void readData(int *ptrgas,int *ptralc, int *ptrdis) {
	unsigned short int input;
	bool stop = true;
	while (stop) {
		cin>>input;
		if (input >= 1 && input <= 4) {
			switch (input) {
			case 2:
				(*ptrgas)++;
				break;
			case 1:
				(*ptralc)++;
				break;
			case 3:
				(*ptrdis)++;
				break;
			case 4:
				stop = false;
				break;
			default:
				break;
			}
		}
	}
}

int main() {
	int gas = 0, alcool = 0, diesel = 0;
	int *ptrgas = &gas;
	int *ptralc = &alcool;
	int *ptrdis = &diesel;
	readData(ptrgas, ptralc, ptrdis);
	showResults(gas, alcool, diesel);
	return 0;
}