// q) summation of values in a range

#include<stdio.h>

int main(){
    int a, b;
    printf("Please Enter the range:");
    fflush(stdout);
    scanf(" %d %d", &a, &b);

    // printf("summition = %d", (a+b)*(a > b ? a-b+1 : b-a+1)/2);

    int i = ( a >b ? b : a);
    int sum = 0;
    for (i ; i <= (a > b ? a : b); i++){
        sum+=i;
    }
    printf("summation = %d", sum);

    return 0;
}