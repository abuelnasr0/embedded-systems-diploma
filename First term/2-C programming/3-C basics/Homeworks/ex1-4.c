// Write C Program to Multiply two Floating Point Numbers
// i should see the Console as following:
// ##########Console-output###

// ###########################
// Enter two numbers: 2.4
// 1.1
// Product: 2.640000

#include <stdio.h>

int main(){
    float a, b;
    printf("Enter two numbers: ");
    scanf(" %f %f", &a, &b);
    printf("%f", a*b);
    return 0;
}