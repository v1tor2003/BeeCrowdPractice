// Squared and Cubic

#include <stdio.h>

int main (){
  
  int cases;
  int count_tst = 0;
  int count;
  int number = 1;
  int aux = 1;
  int aux_save = aux;
  int result = 1;

  scanf("%d", &cases);

  while (count_tst < cases) {
      
      printf("%d", number);
      
      for(count = 0; count < 2;count++){
        result = number * aux;
        printf(" %d", result);
        aux = aux * aux;
      }  
       
      printf("\n");
      number++;
      aux_save++;
      aux = aux_save;
      
      count_tst++;
  }
 
  return 0; 
}

