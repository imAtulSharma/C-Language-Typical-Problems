// To Interchange the largest and smallest element in an array

#include<stdio.h>

void main()
{
    int array[5], small, pos_small, large, pos_large;

    for(int i = 0; i < 5; i++)
    {
    printf("Enter %dth element...\n", i+1);
    scanf("%d", &array[i]);
    }

    small = array[0], pos_small = 0;
    large = array[0], pos_large = 0;

    for(int i = 0; i < 5; i++)
    {
        if (small > array[i])
        {
            small = array[i];
            pos_small = i;
        }

        if (large < array[i])
        {
            large = array[i];
            pos_large = i;
        }
    }
    array[pos_large] = small;
    array[pos_small] = large;

    printf("The edited array is...\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
}