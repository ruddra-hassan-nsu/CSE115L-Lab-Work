#include <stdio.h>

void order(double *smp, double *lgp);

int main(void) {
    double n1 = 7.5, n2 = 9.6, n3 = 5.5;

    order(&n1, &n2);
    printf("Call 1: %.1f %.1f %.1f\n", n1, n2, n3);

    order(&n1, &n3);
    printf("Call 2: %.1f %.1f %.1f\n", n1, n2, n3);

    order(&n2, &n3);
    printf("Call 3: %.1f %.1f %.1f\n", n1, n2, n3);

    return 0;
}

void order(double *smp, double *lgp) {
    double t;

    if (*smp > *lgp) {
        t = *smp;
        *smp = *lgp;
        *lgp = t;
    }
}
