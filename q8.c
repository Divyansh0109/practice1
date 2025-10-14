#include <stdio.h>

int main() {
    int n,i,a,j;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(a=1;a<=i-1;a++)
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)
        {
            printf("* ");
        }
        for(j=0;j<=n-1;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}