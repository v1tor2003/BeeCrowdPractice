// Even Square

#include <stdio.h>
#include <math.h>

int main () {
  int count;
  int number;
  int partial;
  int indice;   
  int count_aux = 0;

  scanf("%d", &number);

  for (count = 0; count <= number; count++){
      partial = 1 + count_aux;
      count_aux++;
      if(partial % 2 == 0){
          indice = count_aux;
          partial = pow(partial, 2);
          printf("%d^2 = %d\n", indice, partial);
      }
  }    
  return 0;
}