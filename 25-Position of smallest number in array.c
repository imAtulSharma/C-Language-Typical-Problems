// To find Position of smallest number in array

#include<stdio.h>

void main()
{
    int array[5], small, pos;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter %dth element...\n", i+1);
        scanf("%d", &array[i]);
    }

    small = array[0], pos = 0;

    for(int i = 0; i < 5; i++)
    {
        if (small > array[i])
        {
            small = array[i];
            pos = i;
        }
    }
    printf("The smallest number is %d and its index in array is %d", small, pos);
}