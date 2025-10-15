
#include <stdio.h>
int main(){ 
    int n,i,j;
    printf("enter side of square quarter: ");
    scanf("%d",&n);
    for (i=1; i<=2*n+1; i++) {
        for (j=1; j<=2*n+1; j++) {
            if ((i==1) || (j==1) || (i==2*n+1) || (j==2*n+1)) 
                printf("*");
            else if (i==n+1 || j==n+1) 
                printf("* ");
            else 
                printf("  "); 
        }
        printf("\n"); 
    }
    return 0;
}   