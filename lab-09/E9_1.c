#include <stdio.h>

int main(void) {
    int number = 10;
    int printed = 0;

    while (number >= 1) {
        printf("%d\n", number);
        printed++;
        number--;
    }

    printf("Numbers printed: %d.\n", printed);
    printf("Control variable after loop: %d.\n", number);

    return 0;
}
