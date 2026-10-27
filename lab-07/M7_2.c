#include <stdio.h>

int main(void)
{
    int mark;
    char letter, modifier;
    double point;

    printf("Enter the total mark: ");
    scanf("%d", &mark);

    if (mark >= 0 && mark <= 100)
    {
        if (mark >= 93)
        {
            letter = 'A';
            modifier = ' ';
            point = 4.0;
        }
        else if (mark >= 90)
        {
            letter = 'A';
            modifier = '-';
            point = 3.7;
        }
        else if (mark >= 87)
        {
            letter = 'B';
            modifier = '+';
            point = 3.3;
        }
        else if (mark >= 83)
        {
            letter = 'B';
            modifier = ' ';
            point = 3.0;
        }
        else if (mark >= 80)
        {
            letter = 'B';
            modifier = '-';
            point = 2.7;
        }
        else if (mark >= 77)
        {
            letter = 'C';
            modifier = '+';
            point = 2.3;
        }
        else if (mark >= 73)
        {
            letter = 'C';
            modifier = ' ';
            point = 2.0;
        }
        else if (mark >= 70)
        {
            letter = 'C';
            modifier = '-';
            point = 1.7;
        }
        else if (mark >= 67)
        {
            letter = 'D';
            modifier = '+';
            point = 1.3;
        }
        else if (mark >= 60)
        {
            letter = 'D';
            modifier = ' ';
            point = 1.0;
        }
        else
        {
            letter = 'F';
            modifier = ' ';
            point = 0.0;
        }

        printf("Mark %3d\tGrade %c%c\tGrade point %.1f\n", mark, letter, modifier, point);
    }
    else
        printf("Invalid mark: %d (must be 0 to 100)\n", mark);

    return 0;
}
