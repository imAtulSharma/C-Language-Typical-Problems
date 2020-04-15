//Programme to convert decimal number into binary number

#include<stdio.h>
#include<math.h>

void main()
{
    int decimal, binary = 0, count = 0, remainder;

    printf("Enter any decimal number...\n");
    scanf("%d", &decimal);
    
    printf("The binary equivalent of %d is ", decimal);

    while(decimal != 0)
    {
        remainder = decimal%2;
        binary = binary + remainder*pow(10, count);
        decimal /= 2;
        count++;
    }
    printf("%d", binary);
}