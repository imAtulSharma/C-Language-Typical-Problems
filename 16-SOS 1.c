//Summation of series 1 + 1/2 + 1/3 + 1/4 + 1/5 + ...... + 1/n upto n terms

#include<stdio.h>

void main()
{
    int n, i = 1;
    float sum = 0;

    printf("Enter the number of terms...\n");
    scanf("%d", &n);

    while(i <= n)
    {
        sum += (float)1/i;
        i++;
    }
    printf("The summation of series 1 + 1/2 + 1/3 + 1/4 + 1/5 + ...... + 1/%d is %.2f", n, sum);
}