// Write C Program to Add Two Integers

// i should see the Console as following:
// ##########Console-output###
// Enter two integers: 12
// 11
// Sum: 23

#include<stdio.h>

int main(){
    int a ,b;
    printf("Enter two numbers :");
    scanf(" %d %d", &a, &b);
    printf("Sum: %d", a+b);
    return 0;
}