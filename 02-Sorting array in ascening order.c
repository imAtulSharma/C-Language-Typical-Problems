//Programme to sort arrray in ascending order

  /*
     * C program to accept N numbers and arrange them in an ascending order
     */

#include<stdio.h>

/* header file is included. */

void main()
{   
    int Size_of_array;
    
    */ we can also used this as int A[10] this means we have declared the array of integer type and whose size is 10,and the name of the array is A */

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
    
    */ when displaying \b would move the cursor one step back, this is why we have used /b here just for formating purposes .*/
    for (int i = 0; i < Size_of_array; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\b\b}\nSteps take are %d", steps);
}
