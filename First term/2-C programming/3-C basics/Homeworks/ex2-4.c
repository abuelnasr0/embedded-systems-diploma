// program to check a is +ve or -ve

#include<stdio.h>

int main(){
    int a;
    printf("enter the number: ");
    scanf(" %d" , &a);
    if ( a > 0){
        printf("THe number is positive");
    }
    else if ( a < 0){
        printf("THe number is negative");
    }else{
        printf("THe number is Zero");
    }
    return 0;
    
}