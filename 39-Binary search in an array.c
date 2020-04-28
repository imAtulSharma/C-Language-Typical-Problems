// To find a given number in the array with its position usinf binary search

#include<stdio.h>

void main()
{
    int size, pos= -1, number, beg = 0, steps = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    int end = size-1; 

    for(int i = 0; i < size; i++)
    {
        printf("Enter %dth element...\n", i+1);
        scanf("%d", &array[i]);
    }

    printf("Enter the number to be searched in the array: ");
    scanf("%d", &number);

    int mid;
    while( beg <= end)
    {   
        steps++;
        mid = (beg + end)/2;

        if(number == array[mid])
        {
            pos = mid;
            break;
        }
        else if (number < array[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    (pos == -1) ? printf("There is no number found in the array\n") : printf("Hurray! number is in the array at %dth index (means %dth place)\n", pos, pos + 1);
    printf("This takes %d steps", steps);
}