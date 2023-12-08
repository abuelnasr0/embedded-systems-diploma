// q) simple calculator

#include<stdio.h>


int main(){
    char type;
    int a, b, c;
    printf("please enter two operands: ");
    scanf(" %d %d", &a, &b);
    printf("please enter th operator * or / or - or +: ");
    scanf(" %c", &type);
    switch (type)
    {
    case'*':
        c = a*b;
        break;
    case'-':
        c = a-b;
        break;
    case'/':
        c = a/b;
        break;
    case'+':
        c = a+b;
        break;
    
    default:
        printf("operator is wrong ");
        return 0;
        break;
    }
    printf("%d %c %d = %d",a , type, b, c);

    return 0;
}