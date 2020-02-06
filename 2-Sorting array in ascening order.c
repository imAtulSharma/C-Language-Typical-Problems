//Programme to sort arrray in ascending order using goto
#include<stdio.h>

void main(){
    int array[5], temp;

    printf("Enter the matrix numbers...\n");
    for(int i = 1; i <= 5; i++){
        printf("Enter the a%d element of the matrix\n", i);
        scanf("%d", &array[i-1]);
    }

    come:
    for (int i = 0; i < 5; i++)
    {
        if(array[i] > array[i + 1])
        {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            
            goto come;
        }
    }

    printf("The sorted matrix is...\n");
    for (int i = 0; i < 5; i++)
    {
        printf("[%d] ", array[i]);
    }
}