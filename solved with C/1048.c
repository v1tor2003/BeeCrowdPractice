// Salary Increase
#include <stdio.h>

int main(void) {
  
  float salary;
  float salary_aux;
  float new_salary;
  float money_earned;
  int percentual;
 
  scanf("%f", &salary);

  if(salary > 0 && salary <= 400){
    percentual = 15;
    salary_aux = (salary * percentual) / 100;
    new_salary = salary_aux + salary;
    money_earned = salary_aux;
  }
  else if(salary > 400 && salary <= 800){
    percentual = 12;
    salary_aux = (salary * percentual) / 100;
    new_salary = salary_aux + salary;
    money_earned = salary_aux;
  }
  else if(salary > 800 && salary <= 1200){
    percentual = 10;
    salary_aux = (salary * percentual) / 100;
    new_salary = salary_aux + salary;
    money_earned = salary_aux;
  }
  else if(salary > 1200 && salary <= 2000){
    percentual = 7;
    salary_aux = (salary * percentual) / 100;
    new_salary = salary_aux + salary;
    money_earned = salary_aux;
  }
  else if(salary > 2000){
    percentual = 4;
    salary_aux = (salary * percentual) / 100;
    new_salary = salary_aux + salary;
    money_earned = salary_aux;
  }
  

  printf("Novo salario: %.2f\n", new_salary);
  printf("Reajuste ganho: %.2f\n", money_earned);
  printf("Em percentual: %d %%\n", percentual);
  return 0;

}