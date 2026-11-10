#include <stdio.h>

int main(void) {
    double value;
    double total = 0;
    int count = 0;

    printf("Enter values (negative number to stop): ");
    scanf("%lf", &value);
    while (value >= 0) {
        total += value;
        count ++;
        printf("Enter values (negative number to stop): ");
        scanf("%lf", &value);
    }

    if (count > 0) {
        printf("Count\t: %d\n", count);
        printf("Total\t: %.2f\n", total);
        printf("Average\t: %.2f\n", total / count);
    } else
        printf("No values entered.\n");

    return 0;
}
