#include <stdio.h>

#define N 1234

int main(void)
{
    int size = N % 6 + 3;
    int row, column;
    int count = 0;

    for (row = 1; row <= size; row++) {
        for (column = 1; column <= size; column++) {
            printf("%2d ", row * column);
            count++;
        }
        printf("\n");
    }
    printf("Inner loop ran %d times.\n", count);

    for (row = 1; row <= size; row++) {
        for (column = 1; column <= row; column++)
            printf("*");
        printf("\n");
    }

    for (row = size; row >= 1; row--) {
        for (column = 1; column <= row; column++)
            printf("*");
        printf("\n");
    }

    return 0;
}
