// Demonstrate the use of include preprocessor directive

#include<stdio.h>
#include"File1.c" //Make sure that file1.c is exixst in current directory otherwise the compiler shows error

void main()
{
    int a, b;

    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Enter another number : ");
    scanf("%d", &b);

    add(a, b);
}