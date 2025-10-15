//perfect number
#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)
        printf("%d is a perfect number\n",n);
    else
        printf("%d is not a perfect number\n",n);
    return 0;
}
/*A perfect number is a positive integer that equals the sum of all its proper divisors—that is, the positive factors of the number excluding the number itself.*/