// To show the use of array of pointers

#include<stdio.h>

void main(){
    int *(ptr_array)[5];
    int a = 54, b = 47, c = 45, d = 96, e = 12;

    ptr_array[0] = &a;
    ptr_array[1] = &b;
    ptr_array[2] = &c;
    ptr_array[3] = &d;
    ptr_array[4] = &e;

    for (int i = 0; i < 5; i++)
    {
        printf("The address of %dth pointer in the array is %d\n", i, &ptr_array[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("The address at %dth pointer in the array is %d\n", i, ptr_array[i]);
    }

    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %dth pointer in the array is %d\n", i, *ptr_array[i]);
    }
    
}