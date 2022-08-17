// Array Replacement I

#include <stdio.h>
#include <string.h>

int main () {
    
    int ary[10];
    int count;

    for (count = 0; count < sizeof(ary) / sizeof(ary[0]); count++){
        scanf("%d", &ary[count]);
        if(ary[count] == 0 || ary[count] < 0){
            ary[count] = 1;
        }
    }

    for (count = 0; count < sizeof(ary) / sizeof(ary[0]); count++){
        printf("X[%d] = %d\n", count, ary[count]);
    }
    
    return 0;
}