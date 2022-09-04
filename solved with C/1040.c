// Average 3
#include <stdio.h>

int main(void) {
  
   float note1, note2, note3, note4;
   float average;
   float weight1 = 2;
   float weight2 = 3;
   float weight3 = 4; 
   float weight4 = 1; 
   float exam;

   scanf("%f %f %f %f", &note1, &note2, &note3, &note4);

   average = ((note1 * weight1) + (note2 * weight2) + (note3 * weight3) + (note4 * weight4));
   average = average/(weight1 + weight2 + weight3 + weight4);

   printf("Media: %.1f\n", average);
   if(average >= 7) {
     printf("Aluno aprovado.\n");
   }

   else if(average < 5) {
     printf("Aluno reprovado.\n");
   }

   else if(average >= 5 && average <= 6.9) {
     printf("Aluno em exame.\n");
     scanf("%f", &exam);
     printf("Nota do exame: %.1f\n", exam);
     average = (average + exam) / 2;
     if(average >= 5){
       printf("Aluno aprovado.\n"); 
     }
     else if(average <= 4.9){
       printf("Aluno reprovado.\n");
     }
     printf("Media final: %.1f\n", average);
   }
  return 0;
}