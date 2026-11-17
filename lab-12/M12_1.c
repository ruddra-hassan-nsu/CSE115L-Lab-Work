#include <stdio.h>

#define PI 3.14159
#define N 1234

void circle_facts(double r, double *areap, double *circump);

int main(void) {
    double area, circum;

    circle_facts(N / 1000.0, &area, &circum);
    printf("r = N / 1000.0 -> Area = %.2f, Circumference = %.2f\n", area, circum);

    circle_facts(2.0, &area, &circum);
    printf("r = 2.0 -> Area = %.2f, Circumference = %.2f\n", area, circum);

    return 0;
}


void circle_facts(double r, double *areap, double *circump) {
    *areap = PI * r * r;
    *circump = 2 * PI * r;
}
