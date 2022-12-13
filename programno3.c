#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("Enter the value of B:");
    scanf("%d",&b);
    printf("Enter the value of C:");
    scanf("%d",&c);

    if(a>=b && a>=c)
    {
        printf("A is the greatest:");
    }

    else if(b>=c && b>=a)
    {
        printf("Greatest number is B");
    }

    else
        printf("Greatest number is C");
    return 0;
}


