#include<stdio.h>
int main()
{
    int a,year,n;
    printf("Enter the value of year");
    scanf("%d",&year);

    if (((year%4==0) && (year%400==0) || (year%100!=0)))
    {
        printf("Enter Year is a leap year:)");
    }
    else
    printf("It is not a leap year");
}