#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char date[] = "3/29/2023";
    fgets(date, 11, stdin);
    char month[12][10] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char *tokenPtr = strtok(date, "/");
    printf("%s ", month[strtol(tokenPtr, NULL, 10) - 1]);
    tokenPtr = strtok(NULL, "/");
    printf("%s, ", tokenPtr);
    tokenPtr = strtok(NULL, "/");
    printf("%s", tokenPtr);
    
    return 0;
}