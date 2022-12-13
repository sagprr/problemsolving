#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    ch='E';

    for (i = 1;i<=5;i++) 
    {
      for (j = 5; j>=i; j--) 
      {
        printf("%c",ch);
      } 
      ch--;
      printf("\n");
   }
    return 0;
}


