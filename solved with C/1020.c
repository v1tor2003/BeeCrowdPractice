//Age in Days
#include <stdio.h>

int main(void) {

  int input;
  int years;
  int months;
  int days;
  int rest1;
  int rest2;

  scanf("%d", &input);
    years = input/365;
    rest1 = input % 365;
    months = rest1 /30;
    rest2 = rest1 % 30;
    days = rest2 / 1;

  printf("%d ano(s)\n", years);
  printf("%d mes(es)\n", months);
  printf("%d dia(s)\n", days);

  return 0;
}