#include <stdio.h>

#define N 1234

int main(void) {
    int k;
    int last = N * 8;

    printf("k\tN * k\t%% of N * 8\n");
    for (k = 1; k <= 8; k++)
        printf("%d\t%d\t%.2f\n", k, N * k, 100.0 * (N * k) / last);

    return 0;
}
