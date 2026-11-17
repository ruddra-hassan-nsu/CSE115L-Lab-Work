#include <stdio.h>

int main(void) {
    int n = 1234;
    int *p = &n;

    printf("Value: %d\n", n);
    printf("Address: %p\n", p);
    printf("Value via pointer: %d\n", *p);
    printf("Address of pointer: %p\n", &p);

    *p = 5678;
    printf("Updated value: %d\n", n);

    return 0;
}
