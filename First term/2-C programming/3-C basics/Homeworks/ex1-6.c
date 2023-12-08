// Write Source Code to Swap Two Numbers

// #########Console_output######
// Enter value of a: 1.20
// Enter value of b: 2.45

// After swapping, value of a = 2.45
// After swapping, value of b = 1.2

#include <stdio.h>

void swap(float *a, float*b){
    float x ;
    x = *a;
    *a = *b;
    *b = x;
}

int main(){
    float a, b;
    printf("Enter value of a: ");
    scanf(" %f", &a);
    printf("Enter value of b: ");
    scanf(" %f", &b);

    swap(&a, &b);

    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of a = %f", b);

    return 0;
}