// Jumping Frog

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  
  int jump;
  int pipes;
  int count;
  int result = 0;

 
  scanf("%d %d", &jump, &pipes);

  int ary[pipes];

  for(count = 0; count < pipes; count++){
     scanf("%d", &ary[count]);
   }
 
  for (count = 1; count < pipes; count++){
     if (result < abs(ary[count] - ary[count - 1])){    
        result = abs(ary[count] - ary[count - 1]);
        }
      }  

  if (result > jump){
        printf("GAME OVER\n");
        }
        else if (result <= jump){
        printf("YOU WIN\n");
        }


    
   
  return 0;
}
