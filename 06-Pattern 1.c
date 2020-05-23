// Printing the pattern upto n rows till 26
// A
// AB
// ABC
// ABCD
// ABCDE

#include<stdio.h>

void main(){
    int row, i = 1;

    printf("Enter a natural number till 26\n");
    scanf("%d", &row);

    if(row <= 26 && row >= 1)
    {
        printf("The pattern is the following...\n");
        while(i <= row)
        {
            for(int x = 65; x <= i+64; x++)
            {
                printf("%c", x);
            }
            printf("\n");
            i++;
        }
    }
    else
    {
        printf("Enter natural number less than 26.");
    }
    
}