// Below the Main Diagonal

#include <stdio.h>
#include <string.h>
#define ROWS 12
#define COLUNES 12

int main(void) {
  
  char operation[1];
  float matrice[ROWS][COLUNES];
  int r;
  int c;
  float sum = 0;
  float average = 0;
  
  scanf("%s", operation);

if(strcmp(operation, "M")){
  for(r = 0; r < COLUNES; r++){
      for(c = 0; c < ROWS; c++){
      scanf("%f", &matrice[r][c]);     
      }
    }
  for(r = 0; r < ROWS; r++){
      for(c = 0; c < COLUNES; c++){
      if(c < r){
      sum += matrice[r][c];
      }
     }
    }
   printf("%.1f\n", sum);
  }

else if (strcmp(operation, "S")){
  for(r = 0; r < COLUNES; r++){
      for(c = 0; c < ROWS; c++){
      scanf("%f", &matrice[r][c]);     
      }
    }
  for(r = 0; r < ROWS; r++){
      for(c = 0; c < COLUNES; c++){
      if(c < r){
      average += matrice[r][c] / 66;
      }
     }
    } 
     printf("%.1f\n", average);
   }  
 
 
  return 0;
}

