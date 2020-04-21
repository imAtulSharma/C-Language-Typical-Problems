// To find second largest number in an array

#include<stdio.h>

int find_large(int array[5])
{
    int large = array[0], pos = 0;

    for(int i = 0; i < 5; i++)
    {
        if (large < array[i])
        {
            large = array[i];
            pos = i;
        }
    }
    return pos;
}

void main()
{
    int array[5], second_large, pos_large = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter %dth element...\n", i+1);
        scanf("%d", &array[i]);
    }
    second_large = array[0];
    pos_large = find_large(array);

    for(int i = 0; i < 5; i++)
    {   
        if (i != pos_large)
        {
            if (second_large < array[i])
            {
                second_large = array[i];
            }
        }
    }
    printf("The second largest number is %d",second_large);
}