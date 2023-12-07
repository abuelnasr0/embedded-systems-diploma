// calculates the area and circumference of a circle

#include <stdio.h>

#define PI 3.14

int main(){
    float r; 
    char a;
    
    printf("Enter circle raduis : ");
    fflush(stdout);
    scanf("%f", &r);
    printf("type 'a' to print the area and 'c' for circumference  : ");
    fflush(stdout);
    scanf(" %c", &a);
    if(a == 'a'){
        printf("\nArea = %f", PI*r*r);
    }
    else if(a == 'c'){
        printf("\nCircumference = %f", 2*PI*r);
    }else{
        printf("wrong charcter entered");
    }


}