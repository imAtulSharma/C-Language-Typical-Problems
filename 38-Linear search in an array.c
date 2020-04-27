// To find a given number in the array with its position using lineat search

#include<stdio.h>

void main()
{
    int size, pos= -1, number, steps = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter %dth element...\n", i+1);
        scanf("%d", &array[i]);
    }

    printf("Enter the number to be searched in the array: ");
    scanf("%d", &number);

    for(int i = 0; i < size; i++)
    {
        steps++;
        if (number == array[i])
        {
            pos = i;
            break;
        }
    }
    (pos == -1) ? printf("There is no number found in the array\n") : printf("Hurray! number is in the array at %dth (means %dth place) index\n", pos, pos + 1);
    printf("This takes %d steps", steps);
}