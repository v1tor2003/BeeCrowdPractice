// Caesar Cipher

#include <stdio.h>
#include <string.h>

int main () {
    
   int count_tst = 0;
   int cases;

   scanf("%d", &cases);

   while (count_tst < cases){

       char string_encoded[50];
       char string_decoded[50];
       int size;
       int number;
       int count;
       

       scanf("%s", string_encoded);
       size = strlen(string_encoded);
       scanf("%d", &number);
  
        for(count = 0; count < size; count++){      
               if(string_encoded[count] - number < 'A'){
               string_decoded[count] = string_encoded[count] - number + 26;
               }
               if(string_encoded[count] - number >= 'A'){
               string_decoded[count] = string_encoded[count] - number;
               }
               }
       
       string_decoded[count] = '\0';
       
       printf("%s\n", string_decoded);

       count_tst++;
   }
   

   
    return 0;
}