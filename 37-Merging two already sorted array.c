//Programme to merge two alredy sorted array in a third array

#include<stdio.h>

void main()
{
    //**********************************First array*********************
    int size_of_array1;

    printf("Enter the size of first array: ");
    scanf("%d", &size_of_array1);

    int array1[size_of_array1];

    for(int i = 0; i < size_of_array1; i++)
    {
        printf("Enter the %dth element of the first array:", i);
        scanf("%d", &array1[i]);
    }

    //**********************************second array********************
    int size_of_array2;

    printf("Enter the size of second array: ");
    scanf("%d", &size_of_array2);

    int array2[size_of_array2];

    for(int i = 0; i < size_of_array2; i++)
    {
        printf("Enter the %dth element of the second array:", i);
        scanf("%d", &array2[i]);
    }

    //**********************************Merged array********************
    int size_of_merged_array = 1;

    int merged_array[size_of_array1 + size_of_array2];

    for (int i = 0; i < size_of_array1; i++)
    {
        merged_array[i] = array1[i];
        size_of_merged_array++;
    }

    int number;
    for(int i = 0; i < size_of_array2; i++)
    {
        number = array2[i];

        for (int x = 0; x < size_of_merged_array; x++)
        {
            if (number < merged_array[x])
            {
                for (int j = size_of_merged_array - 1; j >= x; j--) 
                {
                    merged_array[j] = merged_array[j - 1];
                }
                merged_array[x] = number; 
                break;
            }
        }
        size_of_merged_array++;
    }
    
    //**********************Displaying the Merged array*****************
    size_of_merged_array = size_of_array1 + size_of_array2;

    printf("The new merged array is the following...\n");
    for (int i = 0; i < size_of_merged_array ; i++)
    {
        printf("%d ", merged_array[i]);
    }
    
}