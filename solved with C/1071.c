// Sum of Consecutive Odd Numbers I

#include <stdio.h>
int main()
{
   int X;
   int Y;
   int aux;
   int count;
   int result = 0;

   scanf("%d", &X);
   scanf("%d", &Y);
   
   if(Y < X){
       aux = X;
       X = Y;
       Y = aux;
   }

   for(count = X + 1; count < Y; count++){
       if(count % 2 != 0){
       result += count;
       }
    }

    printf("%d\n", result); 


   return 0;
}