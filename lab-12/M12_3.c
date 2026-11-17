#include <stdio.h>

void read_positive(int *np);

int main(void) {
    int n;

    read_positive(&n);
    printf("Entered: %d\n", n);

    return 0;
}

void read_positive(int *np) {
    do {
        printf("Enter a positive integer: ");
        scanf("%d", np);
    } while (*np <= 0);
}
