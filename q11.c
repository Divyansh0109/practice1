//hollow triangle pattern
#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        if (i != n) {
            for (j = 1; j <= 2 * i - 1; j++) {
                if (j == 1 || j == 2 * i - 1)
                    printf("*");
                else
                    printf(" ");
            }
        } else {
            for (j = 1; j <= n; j++) {
                printf("* ");
            }
        }

        printf("\n");
    }

    return 0;
}
