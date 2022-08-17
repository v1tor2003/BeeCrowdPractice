#include <stdio.h>

int main () {
    
  float A, B, C;
  float result;

  scanf("%f %f %f", &A, &B, &C);
    
  if(A + B > C && B + C > A && A + C > B){
    result = A + B + C;
    printf("Perimetro = %.1f\n", result);
  }
  else {
    result = ((A + B) * C) / 2;
    printf("Area = %.1f\n", result);
  }
    
  return 0;
}