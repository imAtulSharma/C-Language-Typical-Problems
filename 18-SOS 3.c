//Summation of series 1/2 + 2/3 + 3/4 + 4/5 + 5/6 + ...... + n/(n+1) upto n terms

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
        sum += (float)i/(i+1);
        i++;
    }
    printf("The summation of series 1/2 + 2/3 + 3/4 + 4/5 + 5/6 + ...... + %d/%d is %.2f", n, n+1, sum);
}