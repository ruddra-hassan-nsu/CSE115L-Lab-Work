#include <stdio.h>

int main(void)
{
    int month;

    printf("Enter the month number: ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("%d is not a valid month number.\n", month);
        return 0;
    }

    switch (month) {
    case 12: case 1: case 2:
        printf("Winter\n");
        break;
    case 3: case 4: case 5:
        printf("Spring\n");
        break;
    case 6: case 7: case 8:
        printf("Summer\n");
        break;
    case 9: case 10: case 11:
        printf("Autumn\n");
        break;
    }

    return 0;
}
