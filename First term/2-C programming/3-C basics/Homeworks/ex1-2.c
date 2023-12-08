// Write C Program to Print a Integer Entered by a User
// i should see the Console as following:
// ##########Console-output###
// Enter a integer: 25
// You entered: 25

#include <stdio.h>

int main(){
    int a;
    printf("Enter a integer: ");
    scanf(" %d", &a);
    printf("You entered %d", a);
    return 0;
}