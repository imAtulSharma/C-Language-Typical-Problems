//To delete an element from the middle of an array

#include<stdio.h>

void main()
{
    int size, pos;
    
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %dth element of the array ",i);
        scanf("%d", &array[i]);
    }

    printf("Enter the index of the array to be deleted:\n");
    scanf("%d", &pos);

    for(int i = pos; i < size-1; i++)
    {
        array[i] = array[i+1];
    }
    size--;//The size of array is decrease by one but actually it exist

    printf("The new array is the following\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    
}