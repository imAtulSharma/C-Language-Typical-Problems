//Programme to sort arrray in ascending order

#include<stdio.h>

void main()
{   
    int Size_of_array;

    printf("Enter the size of array : ");
    scanf("%d", &Size_of_array);

    int array[Size_of_array], temp, steps = 0;

    for(int i = 0; i < Size_of_array; i++)
    {
        printf("Enter the %dth element of the array\n", i);
        scanf("%d", &array[i]);
    }

    printf("The inputed Array is...\n{");
    for (int i = 0; i < Size_of_array; i++)
    {
        printf("%d, ", array[i]);
    }

    for (int i = 0; i < Size_of_array; i++)
    {   
        for (int j = i+1; j < Size_of_array; j++)
        {   
            steps++;
            if(array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    printf("\b\b}\nThe sorted Array is in ascending order...\n{");
    for (int i = 0; i < Size_of_array; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\b\b}\nSteps take are %d", steps);
}