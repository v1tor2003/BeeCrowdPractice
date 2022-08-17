// Even or Odd

#include <stdio.h>
#include <string.h>

int main () {
  
    int input;
    int cases;
    int count;
    scanf("%d", &cases);
    for (count = 0; count < cases; count++){
        scanf("%d", &input);
        if(input == 0){
            printf("NULL\n");
        }
        
        else if(input < 0){
            if(input % 2 != 0){
                printf("ODD NEGATIVE\n");
            }
            else {
                printf("EVEN NEGATIVE\n");
            }
        }
        else if(input > 0){
            if(input % 2 == 1){
                printf("ODD POSITIVE\n");
            }
            else {
                printf("EVEN POSITIVE\n");
            }
        }
    }
     
    return 0;
}