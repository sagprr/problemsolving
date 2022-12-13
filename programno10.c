#include<stdio.h>
int main()
{
    //patterns are started from here
    int i,j,n,k=0;
    char alpha;
    printf("ENTER THE VALUE OF N ");
    scanf("%d",&n);

    for (i = 1; i <=n; i++) {
      for (j = 1; j <= i; j++) {
         printf("%d ",k);
        k++;
      }
      printf("\n");
   }
    return 0;
}


