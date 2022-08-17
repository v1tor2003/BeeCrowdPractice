// Experiments

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char animal;
    int count = 0;
    int cases;
    float qntd_exp;
    float rabbit = 0;
    float rat = 0;
    float frog = 0;
    float multiplayer = 100;

    scanf("%d", &cases);
   
    while (count < cases)
    {
        scanf("%f %c", &qntd_exp, &animal);
        toupper(animal);
        switch(animal){
        case 'C':
            rabbit = rabbit + qntd_exp;
            break;
        case 'R':
            rat = rat + qntd_exp;
            break;
        case 'S':
            frog = frog + qntd_exp;    
            break;      
        default:
            break;
        }
        count++;
    }
    qntd_exp = rabbit + rat + frog;

    printf("Total: %.0f cobaias\n", qntd_exp);
    printf("Total de coelhos: %.0f\n", rabbit);
    printf("Total de ratos: %.0f\n", rat);
    printf("Total de sapos: %.0f\n", frog);
    printf("Percentual de coelhos: %.2f %%\n", (rabbit * multiplayer) / qntd_exp);
    printf("Percentual de ratos: %.2f %%\n", (rat * multiplayer) / qntd_exp);
    printf("Percentual de sapos: %.2f %%\n", (frog * multiplayer) / qntd_exp);

    
    
    
    return 0;
}