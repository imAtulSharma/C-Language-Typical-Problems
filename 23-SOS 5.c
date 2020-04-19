//Summation of series 1 + 1/2! + 1/3! + 1/4! + 1/5! + ...... + 1/n! upto n terms

#include<stdio.h>

int factorial_of(int n)
{
    int factorial = 1;

    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

void main(){
    int n, i = 1;
    float sum = 0;

    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    for(; i <= n; i++)
    {
        sum += (float)1/factorial_of(i);
    }
    printf("The summation of the series 1 + 1/2! + 1/3! + 1/4! + 1/5! + ...... + 1/%d! is %.2f", n, sum);
}