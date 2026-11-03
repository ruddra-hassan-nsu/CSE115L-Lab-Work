#include <stdio.h>

int main(void) {
    int power;
    double value = 1.0;
    
    printf("Power\tValue\n");
    for (power = 1; power <= 40; power++) {
        value *= 2;
        printf("%d\t%.0f\n", power, value);
    }

    return 0;
}
