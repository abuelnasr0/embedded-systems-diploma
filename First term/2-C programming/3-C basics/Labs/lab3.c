// q) the smallest of two numbers

#include <stdio.h>

int main(){
    float a, b;
    printf("Enter two numbers:");
    fflush(stdout);
    scanf(" %f %f", &a, &b);
    printf("%f", a < b ?a : b);
    return 0;
}

