#include<stdio.h>
int main()
/*
{
    float basicsa,hra,pf,da,allow,totalsal;
    char ch;
printf("Enter the value of Basic salary :");
scanf("%f",&basicsa);
hra=0.20*basicsa;
da=0.50*basicsa;
pf=0.11*basicsa;
totalsal=hra+da+pf+basicsa;

if (totalsal>=1700)
{
    printf("The grade is A:)");
}
    else if (totalsal<=1700 && totalsal>=1500)
    {
    printf("The grade is B");
    }

    else if (totalsal<=1500 && totalsal>=1300)
    {
    printf("The grade is C");
    }

else 
    printf("The grade is D");


return 0;

}*/









//PART2

{
     float basicsa,hra,pf,da,allow,totalsal;
    char ch;
    printf("Enter the value of Basic salary :");
    scanf("%f",&basicsa);
    hra=0.20*basicsa;
    da=0.50*basicsa;
    pf=0.11*basicsa;
    totalsal=hra+da+pf+basicsa;
    printf("Enter the grade of the Employee");
    scanf("%c",&ch);
    if (ch=="A")
    {
    printf("Allow 1700");
    }

    else if(ch=="B")
    {
    printf("Allow 1500");
    }

    else if(ch=="C")
    {
    printf("Allow 1300");
    }

    else{
    printf("Allow nothing ");
    }

    return 0;

    totalsal= basicsa+da+hra+allow-pf;
    printf("The total salary is :%f",totalsal);
    
    return 0;

}