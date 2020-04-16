//Summation of series 1/1 + 4/2 + 27/3 + 256/4 + 3125/5 + ...... + n^n/n upto n terms

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
        sum += (float)pow(i, i)/i;
        i++;
    }
    printf("The summation of series 1/1 + 4/2 + 27/3 + 256/4 + 3125/5 + ...... + %d^%d/%d is %.2f", n, n, n, sum);
}