// Even Numbers
#include <stdio.h>

int main (){
    int count = 0;
    int maximum = 100;

    for (count = 1; count < maximum + 1; count++){
        if(count % 2 == 0){
            printf("%d\n", count);
        }
    }
    return 0;
}