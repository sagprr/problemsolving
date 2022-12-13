#include<stdio.h>
int main()
{
    int a,b,weekday;
    printf("Enter the Number of day to be checked");
    scanf("%d",&weekday);

    switch(weekday)
    {
    case 1:
    {
        printf("MONDAY");
        break;
    }
    case 2:
    {
        printf("TUESDAY");
        break;
    }
    case 3:
    {
        printf("WEDNESDAY");
        break;
    }
    case 4:
    {
        printf("THRUSDAY");
        break;
    }
    case 5:
    {
        printf("FRIDAY");
        break;
    }
    case 6:
    {
        printf("SATURDAY");
        break;
    }case 7:
    {
        printf("SUNDAY");
        break;
    }

    default:
        printf("Invalid number entered");
    }
    return 0;
}