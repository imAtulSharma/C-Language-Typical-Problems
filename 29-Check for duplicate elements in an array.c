// To check duplicate elements in an array

#include<stdio.h>

void main()
{
    int array[5], temp = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter %dth element...\n", i+1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; i++)
    {   
        //Here is two methods the one which is applies and the other one is commented
        
        for (int x = i+1 /*x = 0*/ ; x < 5; x++)
        {
            if ( /*x != i &&*/ array[i] == array[x])
            {
                temp = 1;
            }
        }
    }
    (temp == 0) ? printf("No duplicates") : printf("Yes there is duplicates");
}