// Below the Secundary Diagonal

#include <stdio.h>
#include <string.h>
#define ROWS 12
#define COLUNES 12

int main(void) {
  
  char operation[1];
  double matrice[ROWS][COLUNES];
  int r;
  int c;
  double sum = 0;
  double average = 0;
  
  scanf("%s", operation);

if(strcmp(operation, "M")){
  for(r = 0; r < ROWS; r++){
      for(c = 0; c < COLUNES; c++){
      scanf("%lf", &matrice[r][c]);     
      }
    }
  for(r = 0; r < ROWS; r++){
      for(c = 0; c < COLUNES; c++){
      if(c + r > ROWS -1){
      sum += matrice[r][c];
      }
     }
    }
   printf("%.1f\n", sum);
  }

else if (strcmp(operation, "S")){
  for(r = 0; r < ROWS; r++){
      for(c = 0; c < COLUNES; c++){
      scanf("%lf", &matrice[r][c]);     
      }
    }
  for(r = 0; r < ROWS; r++){
      for(c = 0; c < COLUNES; c++){
      if(c + r > ROWS - 1){
      average += matrice[r][c] / 66.0;
      }
     }
    } 
     printf("%.1f\n", average);
   }  
 
 
  return 0;
}
