// Our Days Are Never Coming Back

#include <stdio.h>
#include <string.h>

int main (){
    
    char quote[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    char awnser[35];
    int letters;
    int count;
    
    scanf("%d", &letters);

    for (count = 0; count < letters; count++){
        awnser[count] = quote[count];
    }
    awnser[count] = '\0';

    printf("%s\n", awnser);
    
    return 0;
}