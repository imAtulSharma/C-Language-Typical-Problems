//Programme to convert string into an integer with parsing
#include<stdio.h>
#include<string.h>

void main(){
    char array1[10];
    int array2[10], i=0, sum = 0;

    printf("Please enter a number\n");
    gets(array1);

    while(array1[i] != '\0')
    {
        array2[i] = array1[i]-48;
        sum = sum*10 + array2[i];
        i++;
    }
    
    //To print integer array

    // printf("The array of integer is...\n");
    // for (i = 0; array1[i] != '\0'; i++)
    // {
    //     printf("[%d] ", array2[i]);
    // }

    printf("\nYour converted string into integer is %d\n", sum);
    printf("When we add 1 in that then we get %d", sum+1);
}