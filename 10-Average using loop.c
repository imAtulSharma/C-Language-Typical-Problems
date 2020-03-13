//Programme to find average of n numbers using loop

#include<stdio.h>

void main(){
    int num, sum = 0, count = 0;
    float avg;

    do
    {
        printf("Enter a number. enter -1 to get result...\n");
        scanf("%d", &num);
        
        sum += num;
        count++;
    }while(num != -1);

    avg = (float)sum/count;

    printf("The sum is %d\n", sum);
    printf("You enter %d numbers\n", count);
    printf("The average is %f", avg);
}