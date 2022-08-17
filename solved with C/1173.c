// Array fill I

#include <stdio.h>

int main () {

  int ary[10];
  int count;
  int number;
  
  scanf("%d", &number);

  printf("N[0] = %d\n", number);
  for (count = 0; count < sizeof(ary)/ sizeof(ary[0]) - 1; count++) {
    ary[count] = ary[count - 1] * 2;
    printf("N[%d] = %d\n", count + 1,ary[count]);
  }    
    
  return 0;
}