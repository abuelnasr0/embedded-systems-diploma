// the largest of three numbers

#include <stdio.h>

int main(){
    long long a, b, c, m;
    printf("Enter three numbers : ");
    scanf("%lld %lld %lld" ,&a ,&b ,&c);
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
    printf("Max is %lld", m);
    return 0;
}