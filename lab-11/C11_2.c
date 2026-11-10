#include <stdio.h>

#define SENTINEL 0

int main(void) {
    double value;
    double largest = 0;
    double smallest = 0;
    int count = 0;

    printf("Enter values (%d to stop): ", SENTINEL);
    scanf("%lf", &value);

    if (value != SENTINEL) {
        largest = value;
        smallest = value;
    }

    while (value != SENTINEL) {
        if (value > largest)
            largest = value;

        if (value < smallest)
            smallest = value;

        count++;

        printf("Enter values (%d to stop): ", SENTINEL);
        scanf("%lf", &value);
    }

    if (count == 0) {
        printf("No values entered.\n");
    } else {
        printf("Largest: %.2f\n", largest);
        printf("Smallest: %.2f\n", smallest);
        printf("Count: %d\n", count);
    }

    return 0;
}
