#include <stdio.h>

int main(void)
{
    int mark, branch;
    char letter, modifier;

    printf("Enter the total mark: ");
    scanf("%d", &mark);

    if (mark >= 93)
    {
        branch = 1;
        letter = 'A';
        modifier = ' ';
    }
    else if (mark >= 90)
    {
        branch = 2;
        letter = 'A';
        modifier = '-';
    }
    else if (mark >= 87)
    {
        branch = 3;
        letter = 'B';
        modifier = '+';
    }
    else if (mark >= 83)
    {
        branch = 4;
        letter = 'B';
        modifier = ' ';
    }
    else if (mark >= 80)
    {
        branch = 5;
        letter = 'B';
        modifier = '-';
    }
    else if (mark >= 77)
    {
        branch = 6;
        letter = 'C';
        modifier = '+';
    }
    else if (mark >= 73)
    {
        branch = 7;
        letter = 'C';
        modifier = ' ';
    }
    else if (mark >= 70)
    {
        branch = 8;
        letter = 'C';
        modifier = '-';
    }
    else if (mark >= 67)
    {
        branch = 9;
        letter = 'D';
        modifier = '+';
    }
    else if (mark >= 60)
    {
        branch = 10;
        letter = 'D';
        modifier = ' ';
    }
    else
    {
        branch = 11;
        letter = 'F';
        modifier = ' ';
    }

    printf("Mark %3d\tBranch %d\tGrade %c%c\n", mark, branch, letter, modifier);
    return 0;
}
