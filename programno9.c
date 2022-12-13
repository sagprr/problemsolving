#include<stdio.h>
int main()
{
    int x,y,cord;
    printf("Enter the value of X coordinate:");
    scanf("%u",&x);
    printf("Enter the value of Y coordinate:");
    scanf("%u",&y);
    if ( x>0 && y>0)
    {
        printf("Entered Points lies in First quadrant");
    }

    else if(x>0 && y<0)
    {
        printf("Entered Points lies in fourth quadrant");
    }

    else if(x<0 && y<0)
    {
        printf("Entered Points lies in third quadrant");
    }

    else if(y>0 && x<0)
    {
        printf("Entered Points lies in fourth quadrant");
    }

    else 
    printf("Entered Coordinates is not valid");
    
    return 0;
}