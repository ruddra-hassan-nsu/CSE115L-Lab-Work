#include <stdio.h>

void order(double *sm, double *lg);

int main(void) {
    double first, second;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &first, &second);

    order(&first, &second);
    printf("Ordered: %.2f, %.2f", first, second);

    return 0;
}

void order(double *sm, double *lg) {
    double t;

    if (*sm > *lg) {
        t = *sm;
        *sm = *lg;
        *lg = t;
    }
}
