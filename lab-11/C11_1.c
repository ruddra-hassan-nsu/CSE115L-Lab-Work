#include <stdio.h>

#define LIMIT 5
#define HALF(x) ((x) / 2.0)

int main(void) {
    int i, value;
    int total = 0;

    for (i = 1; i <= LIMIT; i++) {
        printf("Value %d: ", i);
        scanf("%d", &value);
        total += value;
    }

    i = 1;
    while (i <= LIMIT) {
        printf("%d ", i * i);
        i++;
    }
    printf("\n");

    printf("Half of the total is %.2f\n", HALF(total + 1));

    return 0;
}
