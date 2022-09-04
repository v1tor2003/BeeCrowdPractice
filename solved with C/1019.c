// Time Conversion
#include <stdio.h>

int main(void) {

  int input;
  int hours;
  int minutes;
  int seconds;
  int rest1;
  int rest2;
  
  scanf("%d", &input);
    hours = input/3600;
    rest1 = input % 3600;
    minutes = rest1 /60;
    rest2 = rest1 % 60;
    seconds = rest2 / 1;

  printf("%d:%d:%d\n", hours, minutes, seconds);

  return 0;
}