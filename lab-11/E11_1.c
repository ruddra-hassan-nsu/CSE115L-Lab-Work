#include <stdio.h>

int main(void) {
    int n;
    int power = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (power < n)
        power = power * 2;

    printf("Smallest power of 2 >= %d is %d\n", n, power);

    return 0;
}
