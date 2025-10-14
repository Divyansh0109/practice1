//pasal triangle
#include <stdio.h>

int main() {
    int n,i,j,a=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for (j = 0; j <= i; j++)
        {
            if(j==0 || i==0)
            {
                a=1;
            }
            else
            {
                a=a*(i-j+1)/j;
            }
            printf("%d ",a);
        }
        printf("\n");
    }
    
    return 0;
}