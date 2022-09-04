// Six Odd Numbers
#include <stdio.h>
#include <string.h>

int main () {
    
    int number;
    int count;

    scanf("%d", &number);

    for(count = number; count < number + 12; count++){
        if(count % 2 == 1){
          printf("%d\n", count);
        }
    }

    return 0;
}