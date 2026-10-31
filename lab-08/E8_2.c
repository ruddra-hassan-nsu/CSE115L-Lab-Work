#include <stdio.h>

int main(void)
{
    int choice;

    printf("1. Accept new print job\n");
    printf("2. Display current queue\n");
    printf("3. Search job by customer\n");
    printf("4. Generate daily revenue & task report\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Would accept a new print job.\n");
        break;
    case 2:
        printf("Would display the current queue.\n");
        break;
    case 3:
        printf("Would search job by customer.\n");
        break;
    case 4:
        printf("Would generate the daily revenue and task report.\n");
        break;
    default:
        printf("%d is not a valid choice.\n", choice);
    }

    return 0;
}
