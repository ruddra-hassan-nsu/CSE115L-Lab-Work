#include <stdio.h>

void add_bonus(double *markp);

int main(void) {
    double mark = 71.0;

    add_bonus(&mark);
    printf("%.1f\n", mark);

    return 0;
}

void add_bonus(double *markp) {
    *markp += 5.0;
}
