#include <stdio.h>

int main(void)
{
    double a, b;
    char operator;

    printf("Enter an expression: ");
    scanf("%lf %c %lf", &a, &operator, &b);

    switch (operator) {
    case '+':
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    case '-':
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    case '*':
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    case '/':
        if (b == 0)
            printf("Undefined. Cannot divide by zero.\n");
        else
            printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    default:
        printf("%c is an unknown operator.\n", operator);
    }

    return 0;
}
