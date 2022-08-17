// Ages

#include <stdio.h>

int main () {
   
   float average = 0;
   float numbers_of_data = 0;
   int data;
   

   while (1){
      scanf("%d", &data);
      if(data < 0){
         break;
      }
      average += data;
      numbers_of_data++;
   }

   average = average / numbers_of_data;
   
   printf("%.2f\n", average);
   
   

   return 0;
}
