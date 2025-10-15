//sum of fibonacci series
#include <stdio.h>
int main() {
    int n,i,a=0,b=1,c,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum+=a;
        c=a+b;
        a=b;
        b=c;
    }
    printf("Sum of Fibonacci series: %d\n",sum);
    return 0;
}