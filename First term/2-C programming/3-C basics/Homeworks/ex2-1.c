// program to check a is even or odd

#include<stdio.h>

int main(){
    int a;
    printf("enter the number: ");
    scanf(" %d" , &a);
    if ( a%2 == 0){
        printf("THe number is even");
    }
    if ( a%2 != 0){
        printf("THe number is odd");
    }
    return 0;
    
}