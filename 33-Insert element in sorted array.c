// To insert an element in already sorted in ascending array

#include <stdio.h>

void main()
{
    int pos = -1, number, n;

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

    for (int i = 0; i < n-1; i++)//we can also put i < n and the programme still behaves correctly according to the following comments
    {
        if (number >= array[i] && number <= array[i + 1]) //Here if i = 9 and condition satisfies then pos = 10
        {
            pos = i + 1;
        }
    }

    if (pos != -1)
    {
        for (int i = n - 1; i >= pos; i--) //Here if pos = 10 then the condition is not satisfied
        {
            array[i] = array[i - 1];
        }
        array[pos] = number; //Here if pos = 10 then compiler does not give any error and also there is no run time error
    }
    
    //Here also we are traversing the array for only 10 elements (means upto 9th index)... Here I am not sure to the effect of arra[10] in the computer
    
    printf("The new array is the following...\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}