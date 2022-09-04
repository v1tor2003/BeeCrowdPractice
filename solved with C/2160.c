// Name at Form
#include <stdio.h>
#include <string.h>

int main () {
    char string_input[500];
    int size;
    int x= 80;

    fgets(string_input, 500, stdin);
    size = strlen(string_input) - 1;
    
    if(size <= x){
        printf("YES\n");
    }
    else if (size > x){
        printf("NO\n");
    }
    return 0;
}