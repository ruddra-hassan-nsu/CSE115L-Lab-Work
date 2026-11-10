#define DEBUG

#include <stdio.h>

int main(void) {
    int i;
    int n = 5;
    int sum = 0;

    for (i = 1; i <= n; i++) {
        sum += i;

        #ifdef DEBUG
            printf("[trace] pass %d: i = %d, sum = %d\n", i, i, sum);
        #endif
    }

    printf("Sum of 1 to %d is %d\n", n, sum);

    return 0;
}
