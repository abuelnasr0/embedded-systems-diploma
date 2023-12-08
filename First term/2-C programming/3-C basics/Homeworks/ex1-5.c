// Write C Program to Find ASCII Value of a Character

// #########Console_output######
// Enter a character: G
// ASCII value of G = 71
// #############################

#include<stdio.h>

int main(){
    char a;
    printf("Enter a charcter :");
    scanf(" %c", &a);
    printf("ASCII value of %c = %d", a, a);
    return 0;
}