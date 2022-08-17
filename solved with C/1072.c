// Interval 2

#include <stdio.h>
int main()
{
   int cases;
   int number;
   int number_out = 0;
   int number_in = 0;
   int count = 0;

   scanf("%d", &cases);

   while (count < cases){
       
       scanf("%d", &number);
       
       if(number >= 10 && number <= 20){
         number_in++;
       }
       if(number < 10 || number > 20){
         number_out++;
       }
       count++;
   }
   
   printf("%d in\n", number_in);
   printf("%d out\n", number_out);
   


   return 0;
}