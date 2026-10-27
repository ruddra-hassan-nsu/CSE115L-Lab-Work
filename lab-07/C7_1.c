#include <stdio.h>

int main(void)
{
    int mark;
    char letter;

    printf("Enter the total mark: ");
    scanf("%d", &mark);

    if (mark >= 90)
        letter = 'A';
    else if (mark >= 80)
        letter = 'B';
    else if (mark >= 70)
        letter = 'C';
    else if (mark >= 65)
        letter = 'D';
    else
        letter = 'F';

    printf("Grade %c\n", letter);
    return 0;
}
