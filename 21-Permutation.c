//Programmme to print Permutations of a numbers
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

int permutation_of(int n, int r)
{
    return factorial_of(n)/factorial_of(n-r);
}

void main()
{
    int n, r;

    printf("Enter the value of n: \n");
    scanf("%d", &n);

    printf("Enter the value of r: \n");
    scanf("%d", &r);
    
    (n >= 0 && r >= 0) ? printf("The answer is %d", permutation_of(n, r)) : printf("The value of n and r should be positive.");
}