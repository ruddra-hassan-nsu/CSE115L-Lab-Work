#include <stdio.h>

int main(void) {
    int i, value;
    int sum = 0;
    int product = 1;

    for (i = 1; i <= 5; i++) {
        printf("Number %d: ", i);
        scanf("%d", &value);
        sum += value;
        product *= value;
    }

    printf("Sum:\t\t%d\n", sum);
    printf("Product:\t%d\n", product);
    printf("Average:\t%.2f\n", (double) sum / 5);

    return 0;
}
