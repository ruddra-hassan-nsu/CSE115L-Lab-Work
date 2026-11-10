#include <stdio.h>

int main(void) {
    int choice, status, character;
    double a, b;

    do {
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Quit\n");

        printf("Choice: ");
        status = scanf("%d", &choice);

        if (status == EOF)
            return 1;

        if (status != 1) {
            while ((character = getchar()) != '\n' && character != EOF)
                choice = 0;
        }

        switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf%lf", &a, &b);
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf%lf", &a, &b);
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf%lf", &a, &b);
            printf("%.2f x %.2f = %.2f\n", a, b, a * b);
            break;
        case 4:
            printf("Goodbye.\n");
            break;
        default:
            printf("Not a valid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
