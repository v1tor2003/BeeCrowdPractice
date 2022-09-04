// Fixed Password
#include <stdio.h>
#include <string.h>

int main () {
  
   int password = 2002;
   int input;
   while (1)
   {
       scanf("%d", &input);
       if(input != password){
           printf("Senha Invalida\n");
       }
       else{
        break;
       }
   }
   
   printf("Acesso Permitido\n");
    return 0;
}