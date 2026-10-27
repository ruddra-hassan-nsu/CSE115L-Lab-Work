#include <stdio.h>

int main(void)
{
    double input_number;

    printf("Enter a number: ");
    scanf("%lf", &input_number);

    if (input_number < 0)
        printf("Negative\n");
    else if (input_number == 0)
        printf("Zero\n");
    else
        printf("Positive\n");

    return 0;
}
