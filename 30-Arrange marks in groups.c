// To arrange the marks in groups 

#include<stdio.h>

void main()
{
    int n = 10, marks[n], frequency[10]={0};

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
        printf("%d       %d\n", i, frequency[i]);
    }
}