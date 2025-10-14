//hourglass
#include <stdio.h>
#include <math.h>

int main() {
    
    int n,i,j,k;
    scanf("%d",&n);

    for(i=n;i>=-n;i--)
    {
        for(j=1;j<=n-abs(i);j++)
        {
            printf(" ");
        }
        
        for(k=1;k<=abs(i)+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}