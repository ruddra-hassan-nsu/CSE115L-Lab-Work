#include <stdio.h>

int main(void) {
    int i, lines = 0;

    i = 1;
    while (i <= 10) {
        printf("%3d %5d\n", i, i * i);
        lines += 1;
        i++;
    }
    printf("%d lines printed.\n", lines);
    return 0;
}
