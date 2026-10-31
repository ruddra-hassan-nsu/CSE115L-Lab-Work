#include <stdio.h>

int main(void)
{
    char letter;

    printf("Enter the letter grade: ");
    scanf(" %c", &letter);

    switch (letter)
    {
    case 'A': case 'B':
        printf("Strong work. Keep the same study pattern.\n");
    case 'C':
        printf("A pass. Review the topics you lost marks on.\n");
    case 'D':
        printf("At risk. See the course faculty this week.\n");
    case 'F':
        printf("Not passed. The course must be repeated.\n");
    default:
        printf("%c is not a grade on the NSU scale.\n", letter);
    }

    return 0;
}
