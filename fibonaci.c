#include <stdio.h>

int main() {
    int n,i,a=0,b=1,c;
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for(i=0;i<n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}