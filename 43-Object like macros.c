// Demonstrate the use of object like macros using define preprocessor directive

#include<stdio.h>

#define PI 3.14

void main()
{
    int radius;

    printf("Enter the radius of circle to get area : ");
    scanf("%d", &radius);

    printf("The area is %.2f", PI*radius*radius);
}