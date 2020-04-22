// To make a number using all elements of an array

#include<stdio.h>
#include<math.h>

void main()
{
    int array[5], number;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter %dth element...\n", i+1);
        scanf("%d", &array[i]);
    }

    number = 0;
    
    for(int i = 0; i < 5; i++)
    {
        number = number*10 + array[i];
    }
    printf("The number is %d", number);
}