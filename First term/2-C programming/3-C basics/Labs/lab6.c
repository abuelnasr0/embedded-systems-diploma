// q) program that produces the following output
// 0 1 2 3 4 5 6 7 8 9 
// 1 2 3 4 5 6 7 8 9
// 2 3 4 5 6 7 8 9
// 3 4 5 6 7 8 9
// 4 5 6 7 8 9
// 5 6 7 8 9
// 6 7 8 9
// 7 8 9
// 8 9
// 9

#include <stdio.h>

int main(){

    int i = 0 ;
    int j ;
    for (i = 0 ; i<10 ;i++){
        for(j=i;j<10;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}