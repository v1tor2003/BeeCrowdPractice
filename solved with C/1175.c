// Array change I

#include <stdio.h>
#include <string.h>

int main () {
    
    int ary[20];
    int aux[20];
    int count;
    int count_aux = 0;

    count_aux = sizeof(ary)/sizeof(ary[0]) - 1;

    for (count = 0; count < sizeof(ary) / sizeof(ary[0]); count++){
      scanf("%d", &ary[count]);
    }
    
    for (count = 0; count < sizeof(ary) / sizeof(ary[0]); count++){
      aux[count] = ary[count_aux];
      count_aux--;
    }
    
    for (count = 0; count < sizeof(ary) / sizeof(ary[0]); count++){
      printf("N[%d] = %d\n", count, aux[count]);
    }

    return 0;
}