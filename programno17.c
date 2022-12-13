#include <stdio.h>

void pattern(n)
{

    int i, j, k;
    int tp = 1, bm = 1, dl = n - 1;
    for(i=1;i<=n;i++)
    {
        printf("%d",tp);
    printf("\n");
    }

    for(i=1; i<n-1;i++)
    {
        for(j=0;j<2*(n-i-1);j++)
        printf(" ");

        printf("%d",dl--);
        printf("\n");
    }

    for(i=0;i<=n;i++)
    {
        printf("%d",bm);
    printf("");
    }
}

int main()

{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    pattern(n);
    return 0;
}