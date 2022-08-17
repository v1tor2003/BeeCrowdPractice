// Grenals

#include <stdio.h>

int main (){
  
  char inter_str[] = "Inter";
  char gremio_str[] = "Gremio";

  int inter_goals;
  int gremio_goals;
  int count = 0;
  int grenals = 1;

  int inter_wins = 0;
  int gremio_wins = 0;
  int ties = 0;

while (count < 1){
    int repetition = 0;
    
    scanf("%d %d", &inter_goals, &gremio_goals);
        if (inter_goals > gremio_goals){
           inter_wins++;
        }
        else if (gremio_goals > inter_goals){
           gremio_wins++;
        }
        else if(inter_goals == gremio_goals){
           ties++;
        }

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &repetition);  
    
    if (repetition == 2) {
     count++;
    }
    else{
    grenals++;
    }
}

printf("%d grenais\n", grenals);
printf("Inter:%d\n", inter_wins);
printf("Gremio:%d\n", gremio_wins);
printf("Empates:%d\n", ties);

if (ties > inter_wins || ties > gremio_wins){
   exit(1);
}
if (inter_wins > gremio_wins){
      printf("%s venceu mais\n", inter_str);
}
else{
      printf("%s venceu mais\n", gremio_str);
}

  return 0; 
}
