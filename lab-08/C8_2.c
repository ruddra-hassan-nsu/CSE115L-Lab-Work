#include <stdio.h>

int main(void)
{
    double gpa;
    int credits;

    printf("Enter the grade point and the credits: ");
    scanf("%lf%d", &gpa, &credits);

    switch ((int)gpa) {
    case 4:
        printf("Highest grade.\n");
        break;
    case 3:
        printf("Good standing.\n");
        break;
    case 2:
        printf("Satisfactory.\n");
        break;
    default:
        printf("Other.\n");
    }

    if (credits >= 3)
        printf("A full course.\n");

    return 0;
}
