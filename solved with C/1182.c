// Column in Array

#include <stdio.h>
#include <string.h>
#define ROWS 12
#define COLUNES 12

int main(void) {
  
  char operation[2];
  float matrice[ROWS][COLUNES];
  int column;
  int r;
  int c;
  float sum = 0;
  float average = 0;

  
  scanf("%d\n", &column);
  scanf("%c\n", operation);


if(strcmp(operation, "M")){
  for(r = 0; r < ROWS; r++){
      for(c = 0; c < COLUNES; c++){
      scanf("%f", &matrice[r][c]);     
      }
    }
    
  for(r = 0; r < ROWS; r++){
      for(c = 0; c < COLUNES; c++){
      if(c == column){
      sum += matrice[r][c];
    }
   }
  }
  printf("%.1f\n", sum);
}

else if (strcmp(operation, "S")){
  for(r = 0; r < ROWS; r++){
      for(c = 0; c < COLUNES; c++){
      scanf("%f", &matrice[r][c]);     
      }
    }
  for(r = 0; r < ROWS; r++){
      for(c = 0; c < COLUNES; c++){
      if(c == column){
      sum += matrice[r][c]; 
      average = sum / ROWS;
      }
   }
  } 
  printf("%.1f\n", average);
}  

   
   
  return 0;
}

