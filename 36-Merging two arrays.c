//Programme to merge two arrays in a third array

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
    int size_of_merged_array = size_of_array1 + size_of_array2;

    int merged_array[size_of_merged_array];

    for (int i = 0; i < size_of_array1; i++)
    {
        merged_array[i] = array1[i];
    }

    for (int i = size_of_array1; i < size_of_merged_array; i++)
    {
        merged_array[i] = array2[i - size_of_array1];
    }
    
    //**********************Displaying the Merged array*****************
    printf("The new merged array is the following...\n");
    for (int i = 0; i < size_of_merged_array; i++)
    {
        printf("%d ", merged_array[i]);
    }
    
}