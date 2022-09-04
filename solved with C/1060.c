// Positive Numbers
#include <stdio.h>

int main(void) {
 
  float number;
  int final_result = 0, i = 0,cases = 6;
  float divider = 2;
  while(i < cases){
    scanf("%f", &number);
    if(number >= 0){
      final_result++;
    }
    i++;
  }
  printf("%d valores positivos\n", final_result);
  return 0;

}