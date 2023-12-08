// q) claculates factorial of numeber 

#include<stdio.h>

long long fact(long long a){
    if(a == 1){
        return 1;
    }
    return a* fact(a-1);
}

int main(){
    long long a; 
    printf("Enter the number : ");
    scanf(" %lld", &a);
    if (a <= 0)
    {
        printf("The number is negative.\n");
        return 0;
    }
    printf("factorial = %lld", fact(a));


    return 0;
}