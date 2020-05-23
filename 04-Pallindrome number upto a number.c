//Printing palindrome numbers upto n numbers

#include<stdio.h>

void check_pallindrome(int n)
{
    int reverse = 0, remainder;

    int temp = n;

    while(temp > 0)
    {
        remainder = temp % 10;
        reverse = reverse*10 + remainder;
        temp /= 10;
    }

    if (reverse == n)
    {
        printf("%d ", n);
    }
}

void main()
{
    int number, i = 0;

    printf("Enter a number\n");
    scanf("%d", &number);

    printf("The pallindrome numbers are the following...\n");

    while(i <= number)
    {
        check_pallindrome(i);
        i++;
    }
}