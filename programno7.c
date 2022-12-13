#include<stdio.h>
int main()
{
    int a,b,c,tri,new;
    printf("Enter the value of the first side of triangle:");
    scanf("%d",&a);
    printf("Enter the value of the second side of triangle:");
    scanf("%d",&b);
    printf("Enter the value of the third side of triangle:");
    scanf("%d",&c);

    if (a==b && b==c)
    {
        printf("This is an Equilateral Triangle");
    }
    
    else if (a==b && b!=c)
    {
        printf("This is an Isosceles Triangle");
    }
    else 
    printf("It is a scalence triangle");
    return 0;

}
