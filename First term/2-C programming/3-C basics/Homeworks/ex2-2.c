// program to check Vowel or Consonant

#include<stdio.h>

#define DIFF 'a'-'A'

int main(){
    char c, a ;
    printf("Enter the char :");
    scanf(" %c", &c);
    a = (c < 91 ? c+DIFF : c);
    switch(a){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is Vowel", c);
            break;
        default:
            printf("%c is Consonant", c);
            break;
    }
    return 0;
}