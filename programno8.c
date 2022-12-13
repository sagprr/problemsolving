#include<stdio.h>
int main()
{
    float cel,far,temp;
    printf("Enter the Temperature in Celsius");
    scanf("%f",&cel);

    if (cel<0)
    printf("Freezing weather");

    else if(cel>0 && cel<10)
    printf("Very cold weather :(");

    else if(cel>10 && cel<20)
    printf("Cold weather :(");
    
    else if(cel>20 && cel<30)
    printf("Normal weather :)");
    
    else if(cel>30 && cel<40)
    printf("HOt weather :(");

    else if(cel>40)
    printf("Very hot weather :(");

    else 
    printf("Entered value is invalid");
    return 0;

}