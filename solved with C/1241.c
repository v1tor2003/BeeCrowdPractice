// Fit or Dont Fit II

#include <stdio.h>
#include <string.h>

int main () {
    
    char string_A[1000];
    char string_B[1000];
    int count;
    int count_aux;
    int count_tst = 0;
    int cases;
    int size_A;
    int size_B;

    scanf("%d\n", &cases);

    while (count_tst < cases){
    
    scanf("%s", string_A);
    scanf("%s", string_B);

    size_A = strlen(string_A);
    size_B = strlen(string_B);
    
    char A_aux[size_A];
    char B_aux[size_B];
    
   count_aux = size_A - 1; 
 
   for (count = 0; count < size_A; count++){
      A_aux[count] = string_A[count_aux];
      count_aux--; 
   }

   count_aux = size_B - 1; 
 
   for (count = 0; count < size_B; count++){
      B_aux[count] = string_B[count_aux];
      count_aux--; 
   }

   if (strncmp(A_aux, B_aux, size_B) == 0){
        printf("encaixa\n");
   }
   else {
        printf("nao encaixa\n");
   }
   count_tst++;
   }
   
   return 0;
}