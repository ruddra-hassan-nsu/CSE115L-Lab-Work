#include <stdio.h>

int main(void) {
    int value;
    int sum = 0;

    printf("Enter numbers (0 to stop): ");
    scanf("%d", &value);
    while (value != 0){
        sum += value;
        printf("Enter numbers (0 to stop): ");
        scanf("%d", &value);
    }
    printf("Sum = %d\n", sum);

    return 0;
}
