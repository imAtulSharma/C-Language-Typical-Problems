// Demonstrate the use of line preprocessor directive

#include<stdio.h>

void main()
{
    #line 50 "New file name"
    int a = 10:

    printf("The value of a is %d", a);
}