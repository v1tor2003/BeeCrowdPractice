// Even Betweem five Numbers
#include <stdio.h>

int main (){
    int number[5];
    int count = 0;
    int even = 0;
    
    for(count = 0; count < sizeof(number)/sizeof(number[0]); count++){
        scanf("%d", &number[count]);
    }
    
    for(count = 0; count < sizeof(number)/sizeof(number[0]); count++){
         if(number[count] % 2 == 0){
            even++;
         }
    }
    printf("%d valores pares\n", even);
    
    return 0;
}