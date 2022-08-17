// Sequence of Numbers and Sum

#include <stdio.h>

int main (){
  
  int number_M;
  int number_N;
  int count = 0;
  int count_tst = 0;
  int sum = 0;

  while (count_tst < 1){
   
   int aux;
   scanf("%d %d", &number_M, &number_N);
   if (number_M <= 0 || number_N <= 0){
      count_tst++;
   }
   else{
        if (number_N < number_M){
        aux = number_M;
        number_M = number_N;
        number_N = aux;
        }
        for(count = number_M; count <= number_N; count++){
          printf("%d ", count);
          sum += count;
         }
         printf("Sum=%d\n", sum);
   }
   sum = 0;
  }
  
   
  return 0; 
}
