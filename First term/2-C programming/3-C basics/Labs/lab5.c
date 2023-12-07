// q) the average of students degree

#include<stdio.h>

int main(){ 
    int num; 
    printf("Enter number of students :");
    fflush(stdout);
    scanf(" %d", &num);
    int i ;

    // float grades[num];
    // float sum = 0 , avg ;
    // for(i=0; i<num; i++){
    //     printf("Enter student %d grade:", i+1);
    //     fflush(stdout);
    //     scanf(" %f", &grades[i]);
    // }
    // for(i=0; i<num; i++){
    //     sum += grades[i];
    // }
    // avg = sum / num;

    float tmp, avg, sum;
    for(i=0; i<num; i++){
        printf("Enter student %d grade:", i+1);
        fflush(stdout);
        scanf(" %f", &tmp);
        sum += tmp;
    }
    avg = sum/num;
    printf("The average = %f", avg);
    return 0 ;
}