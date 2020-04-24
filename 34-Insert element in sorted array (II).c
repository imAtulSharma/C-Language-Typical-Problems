// To insert an element in already sorted in ascending array (II)

#include <stdio.h>

void main()
{
    int number, n;

    printf("Enter the number of elements in the array...\n");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element of %dth index...\n", i);
        scanf("%d", &array[i]);
    }

    printf("Enter the value of the new element\n");
    scanf("%d", &number);

    for (int i = 0; i < n; i++)
    {
        if (number < array[i])
        {
            for (int j = n - 1; j >= i; j--) 
            {
                array[j] = array[j - 1];
            }
            array[i] = number; 
            break;
        }
    }
    
    printf("The new array is the following...\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}