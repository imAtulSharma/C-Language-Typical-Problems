// To arrange the marks in groups with help of Histogram

#include<stdio.h>

void main()
{
    int n;

    printf("Enter the number of students...\n");
    scanf("%d", &n);
    
    int marks[n], frequency[n];
    
    for(int i = 0; i < n; i++)
    {
        frequency[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        printf("Enter the marks of %dth student...\n", i+1);
        scanf("%d", &marks[i]);
        
        if(marks[i] >= 0 && marks[i] <= 100)
        {
            frequency[marks[i]/10]++;
        }
        else
        {
            printf("Enter the value between 0 and 100.\n");
            i--;
        }
        
    }
    
    printf("Group   Frequency\n");
    printf("-----------------\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d       ", i);

        for(int y = 1; y <= frequency[i]; y++)
        {
            printf("* ");
        }
        printf("\n");
    }
}