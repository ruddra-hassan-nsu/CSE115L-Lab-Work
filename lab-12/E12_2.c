#include <stdio.h>

#define N 1234

void half_of(double n, double *resultp);

int main(void) {
    double result;

    half_of(N, &result);
    printf("Half of N is %.2f\n", result);

    half_of(7.0, &result);
    printf("Half of 7.0 is %.2f\n", result);

    return 0;
}

void half_of(double n, double *resultp) {
    *resultp = n / 2.0;
}
