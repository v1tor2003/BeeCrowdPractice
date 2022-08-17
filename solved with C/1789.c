// Race of Slugs

#include <stdio.h>
#include <stdlib.h>


int main(void) {
 
  int cases;
  int count;
  int slugs;
  
  while (scanf("%d", &cases) != EOF){
      
      int result = 0;
      int level = 0;
      
      for(count = 0; count < cases; count++){
          scanf("%d", &slugs);
           if(slugs > result){
             result = slugs;
         }
      }
   
      if(result < 10){
            level = 1;      
      }
      else if(result >= 10 && result < 20){
            level = 2;
      }
      else if(result >= 20){
            level = 3;
      }
      printf("%d\n", level);
   }
  
  
  return 0;
}