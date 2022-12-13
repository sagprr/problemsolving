#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    scanf("%c",&ch);
    ch='A';

    for (i = 1; i <=5; i++) 
    {
      for (j = 1; j <=i; j++) 
      {
        printf("%c",ch);
        ch++;
      } 
      ch='A';
      printf("\n");
   }
    return 0;
}


