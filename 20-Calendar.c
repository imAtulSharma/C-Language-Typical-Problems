//To print a calender given the starting dya and days in that month

#include<stdio.h>

void main(){
    int start_day, number_of_days, date = 1, i = 1;
    
    printf("Enter the starting day of the month(1 for sunday ... and 7 for saturday): ");
    scanf("%d", &start_day);

    printf("Enter the number of days in this month: ");
    scanf("%d", &number_of_days);

    printf("Sun   Mon   Tue   Wed   Thu   Fri   Sat\n");
    printf("---------------------------------------\n");

    for(; i < start_day; i++)
    {
        printf("      ");
    }

    for(; date <= number_of_days; date++)
    {
        if(start_day == 8)
        {
            start_day = 1;
            printf("\n");
        }
        printf("%3d   ", date);
        start_day++;
    }
}