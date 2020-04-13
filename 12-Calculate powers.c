//Programme to calculater powers of any integer

#include<stdio.h>

int power_of(int number, int power)
{
    int answer = 1, i = 1;

    while (i <= power)
    {
        answer *= number;
        i++;
    }
    return answer;
}

void main()
{
    int number, power;

    printf("Enter a number\n");
    scanf("%d", &number);

    printf("Enter the power\n");
    scanf("%d", &power);
    
    
    printf("The answer is %d", power_of(number, power));    
}