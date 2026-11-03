#include <stdio.h>

int main(void) {
    int power;
    int value = 1;
    
    printf("Power\tValue\n");
    for (power = 1; power <= 40; power++) {
        value *= 2;
        printf("%d\t%d\n", power, value);
    }

    return 0;
}
