// Positives and Average
#include <stdio.h>

int main (){
    float number[6];
    int count = 0;
    int positives = 0;
    float average;
    float sum;
    
    for(count = 0; count < sizeof(number)/sizeof(number[0]); count++){
        scanf("%f", &number[count]);
    }
    
    for(count = 0; count < sizeof(number)/sizeof(number[0]); count++){
         if(number[count] > 0){
            sum += number[count];
            positives++;
         }
    }
    printf("%d valores positivos\n", positives);
    average = sum / positives;
    printf("%.1f\n", average);
    return 0;
}