//Summation of series 1 + 1/2^2 + 1/3^2 + 1/4^2 + 1/5^2 + ...... + 1/n^2 upto n terms

#include<stdio.h>
#include<math.h>

void main()
{
    int n, i = 1;
    float sum = 0;

    printf("Enter the number of terms...\n");
    scanf("%d", &n);

    while(i <= n)
    {
        sum += (float)1/pow(i, 2);
        i++;
    }
    printf("The summation of series 1 + 1/2^2 + 1/3^2 + 1/4^2 + 1/5^2 + ...... + 1/%d^2 is %.2f", n, sum);
}