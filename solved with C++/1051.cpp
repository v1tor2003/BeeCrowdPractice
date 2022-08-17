// Taxes
// A way far from the best soluiton
#include <iostream>
using namespace std;

float taxes(float salary) {
	float salary_w_taxes, efetive, from2kto3k = 0.08, from3kto4_5k = 0.18, over4_5k = 0.28;
	int helper = 80;

	if ((salary > 2000.00) && (salary <= 3000.00)) {
		salary = salary - 2000;
		salary_w_taxes = salary * from2kto3k;
		return salary_w_taxes;
	}
	else if ((salary > 3000.01) && (salary <= 4500.00)) {
		salary = salary - 3000;
		salary_w_taxes = (salary * from3kto4_5k) + helper;
		return salary_w_taxes;
	}
	else if (salary > 4500.00) {
		efetive = salary - 2000.00;
		salary = efetive - 1000.00;
		salary_w_taxes = helper;
		efetive = salary - 1500.00;
		salary_w_taxes = salary_w_taxes + (1500 * 0.18);
		efetive = efetive * over4_5k;
		salary_w_taxes = salary_w_taxes + efetive;
		return salary_w_taxes;
	}
}
int main() {
	float salary;
	float salary_w_taxes;
	cin >> salary;
	if (salary <= 2000.00) {
		cout << "Isento" << endl;
		return 0;
	}
	salary_w_taxes = taxes(salary);
	cout << fixed;
	cout.precision(2);
	cout << "R$ "<<salary_w_taxes << endl;
  	return 0;
}
