// Multiples
#include <stdio.h>

int main(void) {
  
  int A;
  int B;
  int result;
  scanf("%d %d", &A, &B);
  
  if(B > A){
    result = B % A;
  }
  else if (B < A){
    result = A % B;
  }
  if(result == 0){
    printf("Sao Multiplos\n");
  }
  else if (result != 0){
    printf("Nao sao Multiplos\n");  
  }
  return 0;

}
