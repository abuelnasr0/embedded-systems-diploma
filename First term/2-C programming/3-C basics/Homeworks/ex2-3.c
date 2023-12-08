// the largest of three float numbers

#include <stdio.h>

int main(){
    float a, b, c, m;
    printf("Enter three numbers : ");
    scanf(" %f %f %f" ,&a ,&b ,&c);
    m = ((a > b) ? ((a > c)  ? a : c) : ( (b > c) ? b : c )); 
    // if( a > b){
    //     if ( a > c){
    //         m = a;
    //     }else{
    //         m = c;
    //     }
    // }else{
    //     if ( b > c){
    //         m = b;
    //     }else{
    //         m = c;
    //     }

    // }
    printf("Max is %f", m);
    return 0;
}