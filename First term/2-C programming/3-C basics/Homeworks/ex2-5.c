// Check if a char is in alphpet

#include <stdio.h>

int main(){
    char a;
    printf("Enter the charcter :");
    scanf(" %c",&a );
    if( (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') ){
        printf("char is in the alphapet");
    }else{
        printf("char is not in the alphapet");

    }

    return 0;
}