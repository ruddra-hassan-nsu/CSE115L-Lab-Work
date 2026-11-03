#include <stdio.h>

int main(void) {
    int number, printed;

    for (number = 10; number >= 1; number --)
        printf("%d\n", number);
    
    printed = 10 - number; /* numbers visited = start - final value */

    printf("Numbers printed: %d.\n", printed);
    printf("Control variable after loop: %d.\n", number);

    return 0;
}
