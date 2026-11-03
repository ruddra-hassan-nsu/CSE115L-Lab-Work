#include <stdio.h>

int main(void) {
    int i;
    int count = 5;
    int total = 0;
    double average;

    for (i = 0; i <= count; i++)
        total = total + i;
    average = (double) total / count;

    printf("Total   %d\n", total);
    printf("Average %.2f\n", average);

    return 0;
}
