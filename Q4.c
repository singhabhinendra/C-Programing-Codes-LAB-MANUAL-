//C program to convert days in to years, weeks and days
//C program to convert days in to years, weeks and days

#include<stdio.h>
int main()
{
    int days, years, weeks;

    printf("Enter the days:");
    scanf("%d",&days); 

    years = days/365; 
    weeks = (days % 365)/7;
    days= ((years*365) + (weeks*7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);

    return 0;
}