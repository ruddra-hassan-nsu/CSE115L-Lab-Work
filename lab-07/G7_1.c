#include <stdio.h>

int main(void)
{
    int mark;
    double point;

    printf("Enter the total mark: ");
    scanf("%d", &mark);

    if (mark >= 93)
        point = 4.0;
    else if (mark >= 90)
        point = 3.7;
    else if (mark >= 87)
        point = 3.3;
    else if (mark >= 83)
        point = 3.0;
    else if (mark >= 80)
        point = 2.7;
    else
        point = 0.0;

    printf("Grade point %.1f\n", point);
    return 0;
}
