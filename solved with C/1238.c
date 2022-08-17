// Combiner

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (){

    char first_string[50];
    char second_string[50];
    char string_output[100];
    int cases;
    int i;
    
   
    scanf("%d\n", &cases);

    while (i < cases){
    
    int size;
    int count = 0;
    int count_aux = 0;
    int count_aux2 = 0;
    
    scanf("%s %s", first_string, second_string);
    size = strlen(first_string) + strlen(second_string);
    
    strncpy(string_output, first_string, 50);
    
    for(count = 0; count < size; count++){
        if(count_aux == strlen(first_string)){
        string_output[count] = second_string[count_aux2];
        count_aux2++;
        }

        else if(count_aux2 == strlen(second_string)){
        string_output[count] = first_string[count_aux];
        count_aux++;
        }
       
        else if(count % 2 == 0){
        string_output[count] = first_string[count_aux];
        count_aux++;
        }
        else if(count % 2 != 0){
        string_output[count] = second_string[count_aux2];
        count_aux2++;
        }
    }
    
    string_output[count] = '\0';
    
    printf("%s\n", string_output);
    
    i++;
    size = 0;
    }


    return 0;
}