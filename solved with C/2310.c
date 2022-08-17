// Volleyball
#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {
    
   int count_tst = 0;
   int cases;
   
        int sacks = 0;
        int blocks = 0;
        int attacks = 0;
                
        int sacks_finished = 0;
        int blocks_finished = 0;
        int attacks_finished = 0;

   scanf("%d", &cases);

   while (count_tst < cases){
      
      char name[10];
      int rows;
      int colunes;
      int ary[2][3];

      scanf("%s\n", name);

      for(rows = 0; rows < 2; rows++){
          for (colunes = 0; colunes < 3; colunes++){
           scanf("%d", &ary[rows][colunes]); 
        }
      }
      
      sacks = sacks + ary[0][0];
      blocks = blocks + ary[0][1];
      attacks = attacks + ary[0][2];

      sacks_finished = sacks_finished + ary[1][0];
      blocks_finished = blocks_finished + ary[1][1];
      attacks_finished = attacks_finished + ary[1][2];
      
      count_tst++;
   }
   
   printf("Pontos de Saque: %.2f %%.\n", (float)sacks_finished*100/sacks);
   printf("Pontos de Bloqueio: %.2f %%.\n", (float)blocks_finished*100/blocks);
   printf("Pontos de Ataque: %.2f %%.\n", (float)attacks_finished*100/attacks);
    return 0;
}