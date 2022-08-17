// Bob Conduit

#include <stdio.h>
#include <string.h>

int main(void) {
  
 
  int cases;
  int count;

  scanf("%d", &cases);

  while (count < cases){
   
    int R1;
    int R2;

   scanf("%d %d", &R1, &R2);
   printf("%d\n", R1 + R2);
   
   count++;
   }
  
  
 
 
  return 0;
}