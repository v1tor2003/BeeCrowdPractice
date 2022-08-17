// Several Scores with Validation

#include <stdio.h>

int main (){
   
  double note;
  double validated_note = 0;
  double average;
  int new_calculus = 1;
  int answer;
  int count_tst = 0;

    while (count_tst < new_calculus){
    
      int amount = 0;
      int count;
      int amount_asw = 0;

      for (count = 0; amount < 2; count++){
        
      scanf("%lf", &note);

      if ((note >= 0) && (note <= 10)){
       validated_note += note; 
       amount++;   
      } 
      else {
       printf("nota invalida\n");
      }
      count++;
    }

    average = validated_note / 2;
    printf("media = %.2lf\n", average);
    
    average = 0;
    validated_note= 0;
    
    for (count = 0; amount_asw < 1; count ++){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &answer);
        if((answer == 1) || (answer == 2)){
        amount_asw++;
        }
    }
      if(answer == 2){
      count_tst++;
      }
    } 
  
  return 0; 
}
