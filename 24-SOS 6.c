//Summation of series 1 + 4/2! + 27/3! + 256/4! + 3125/5! + ...... + n^2/n! upto n terms

#include<stdio.h>
#include<math.h>

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
        sum += (float)pow(i, i)/factorial_of(i);
    }
    printf("The summation of the series 1 + 4/2! + 27/3! + 256/4! + 3125/5! + ...... + %d^2/%d! is %.2f", n, n, sum);
}