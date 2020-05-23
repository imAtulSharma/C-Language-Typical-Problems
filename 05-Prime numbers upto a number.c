//Programmme to print prime numbers upto n  numbers

#include<stdio.h>

void check_prime(int n){
    int temp = 1, i = 2;
    
    while(i <= n/2)
    {
        if(n % i == 0){
            temp = 0;
            break;
        }
        i++;
    }
    
    if(temp == 1)
    { 
        printf("%d ", n);
    }
}

void main(){
    int number, i = 2;

    printf("Enter a number:\n");
    scanf("%d", &number);
    
    
    if(number == 1)
    {
        printf("1 is neither prime nor composite");
    }
    
    else if (number > 2)
    {   
        printf("Prime numbers are the following...\n");
        
        while(i <= number)
        {
            check_prime(i);
            i++;
        }
    }
        
    else 
    {
        printf("Please enter natural number only");
    }
}