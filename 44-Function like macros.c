// Demonstrate the use of function like macros using define preprocessor directive

#include<stdio.h>
#define area(radius) printf("The area is %.2f\n", 3.14*radius*radius);

void main()
{
    int radius;

    printf("Enter the radius of circle to get area : ");
    scanf("%d", &radius);

    area(radius);
}