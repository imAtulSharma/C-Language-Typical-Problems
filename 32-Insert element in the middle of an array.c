// To insert an element in the middle of an array 

#include<stdio.h>

void main()
{
    int pos, n;

    printf("Enter the number of elements in the array...\n");
    scanf("%d", &n);
    
    int array[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter the element of %dth index...\n", i);
        scanf("%d", &array[i]);
    }
    
    printf("Enter the index for inserting the new element\n");
    scanf("%d", &pos);

    for(int i = n-1; i >= pos; i--)
    {
        array[i] = array[i-1];
    }
    printf("Enter the value of the new element\n");
    scanf("%d", &array[pos]);

    printf("The new array is the following...\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}