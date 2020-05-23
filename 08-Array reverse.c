//Programme to reverse the given array

#include<stdio.h>

void  main(){
    int array1[5], array2[5], temp;

    printf("Enter the array...\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &array1[i]);
    }

    for(int i = 0; i < 5; i++){
        array2[i] = array1[4-i];
    }
    
    printf("Array you have eneterd is...");
    for(int i = 0; i < 5; i++){
        printf("%d ", array1[i]);
    }
    printf("\nReversed array is...");
    for(int i = 0; i < 5; i++){
        printf("%d ", array2[i]);
    }
}