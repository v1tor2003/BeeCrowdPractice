// Twitting
#include <stdio.h>
#include <string.h>

int main () {
    char string_input[500];
    int size;
    int x= 140;

    fgets(string_input, 500, stdin);
    size = strlen(string_input) - 1;
    
    if(size <= x){
        printf("TWEET\n");
    }
    else if (size > x){
        printf("MUTE\n");
    }
    return 0;
}