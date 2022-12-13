#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    scanf("%c",&ch);
    ch='A';

    for (i = 1; i <=5; i++) 
    {
      for (j = 1; j <= 5; j++) 
      {
        printf("%c",ch);
        ch++;
      } 
      printf("\n");
   }
    return 0;
}


