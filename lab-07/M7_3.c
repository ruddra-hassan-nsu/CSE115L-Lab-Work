#include <stdio.h>

int main(void)
{
    int mark;
    double attendance;

    printf("Enter the mark: ");
    scanf("%d", &mark);
    printf("Enter the attendance percentage: ");
    scanf("%lf", &attendance);

    if (mark >= 60)
    {
        if (attendance >= 70)
            printf("Passed\n");
        else
            printf("Failed on attendance\n");
    }
    else
    {
        if (attendance >= 70)
            printf("Failed on the mark\n");
        else
            printf("Failed on both mark and attendance\n");
    }

    return 0;
}
