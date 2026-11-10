#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX2(a, b) ((a) > (b) ? (a) : (b))

#define HALF(x) ((x) / 2)
#define CUBE(x) ((x) * (x) * (x))
#define MAX 10

#define N 1234

int main(void) {
    int remainder = N % 97;
    int ratio, shifted;

    ratio = 100000 / SQUARE(remainder);
    shifted = 1 + MAX2(N, remainder);

    printf("N = %d\n", N);
    printf("N %% 97 = %d\n", remainder);
    printf("SQUARE(N) = %d\n", SQUARE(N));
    printf("SQUARE(N %% 97) = %d\n", SQUARE(remainder));
    printf("MAX2(N, N %% 97) = %d\n", MAX2(N, remainder));
    printf("100000 / SQUARE(N %% 97) = %d\n", ratio);
    printf("1 + MAX2(N, N %% 97) = %d\n", shifted);
    printf("HALF(N + 1) = %d, CUBE(1 + 1) = %d, MAX = %d\n", HALF(N + 1), CUBE(1 + 1), MAX);

    return 0;
}
