// it is an interview trick

// Write Source Code to Swap Two Numbers without temp variable.

#include <stdio.h>

void swap(float *a, float*b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
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