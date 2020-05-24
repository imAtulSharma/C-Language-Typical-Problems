// Printing the pattern for given rows
// ########
// *######*
// **####**
// ***##***
// ********

#include<stdio.h>

void print(int j, int i)
{
    if(j <= i )
    {
        printf("*");
    }
    else
    {
        printf("#");
    } 
}

void main()
{
    int n;;

    printf("Please enter the number of Rows  you want: ");
    scanf("%d", &n);
    n--;
    
    // Commented(Below) Code is the alternative way of doing the same thing, run any of these two by which you are comfortable

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 1; j <= 2*n; j++)
    //     {
    //         if(j <= i || j > 2*n-i)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf("#");
    //         }  
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            print(j, i);  
        }
        for (int j = n; j >= 1; j--)
        {
            print(j, i);
        }
        
        printf("\n");
    }
}