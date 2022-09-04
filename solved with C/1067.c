// Odd Numbers
#include <stdio.h>
#include <string.h>

int main () {
    
    int number;
    int count;

    scanf("%d", &number);

    for(count = 1; count <= number; count++){
        if(count % 2 != 0){
          printf("%d\n", count);
        }
    }

    return 0;
}