// Perfect Number

#include <stdio.h>

int main () {
   
   int cases;
   int number;
   int count;
   int count_tst = 0;
   int sum = 0;

   scanf("%d", &cases);
      
      while (count_tst < cases){
      
      scanf("%d", &number);
      
      int ary[number];
      
      for(count = 0; count < number; count++){
            ary[count] = count;         
      }
      
      for (count = 1; count < number; count++){
         if(number % ary[count] == 0){
               sum += ary[count];
         }
      }

      if(sum == number){
         printf("%d eh perfeito\n", number);
      }
      else{
         printf("%d nao eh perfeito\n", number);
      }

      sum = 0;

      count_tst++;
      }
   return 0;
}