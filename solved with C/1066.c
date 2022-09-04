// Even, Odd, Positive and Negative
#include <stdio.h>

int main (){
    int number[5];
    int count = 0;
    int even = 0;
    int odd = 0;
    int positives = 0;
    int negatives = 0;
  
    for(count = 0; count < sizeof(number)/sizeof(number[0]); count++){
         scanf("%d", &number[count]);
         if(number[count] > 0){
            positives++;
         }
         else if (number[count] < 0){
            negatives++;
         }
         if(number[count] % 2 == 0){
            even++;
         }
         else if(number[count] % 2 != 0){
             odd++;
         }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positives);
    printf("%d valor(es) negativo(s)\n", negatives);
    
    return 0;
}