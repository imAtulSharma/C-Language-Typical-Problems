// Printing the pattern for given rows
// 0
// 1 2
// 3 4 5
// 6 7 8 9
// 10 11 12 13 14

#include<stdio.h>

void main()
{
    int row, num = 0;

    printf("Enter how much rows you want to print...\n");
    scanf("%d", &row);
    
    printf("The pattern is following...\n");
    
    for(int x = 1; x <= row; x++)
    {
        for(int y = 1; y <= x; y++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}