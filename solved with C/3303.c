// Big Word

#include <stdio.h>
#include <string.h>

int main () {
  
   char word[20];
   int count;
   int size;

   scanf("%s", &word);

   size = strlen(word);
   
   if(size >= 10){
      printf("palavrao\n");
   }
   else{
      printf("palavrinha\n");
   }

   return 0;
}