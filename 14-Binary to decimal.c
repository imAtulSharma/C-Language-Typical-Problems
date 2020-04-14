//Programme to convert Binary number into decimal number

#include<stdio.h>
#include<math.h>

void main()
{
    int decimal = 0, binary, count = 0, remainder;

    printf("Enter any binary number...\n");
    scanf("%d", &binary);
    
    printf("The decimal equivalent of %d is ", binary);

    while(binary != 0)
    {
        remainder = binary%10;
        decimal += remainder*pow(2, count);
        binary /= 10;
        count++;
    }
    printf("%d", decimal);
}