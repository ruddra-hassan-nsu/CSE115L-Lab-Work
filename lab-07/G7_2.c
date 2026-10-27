#include <stdio.h>

int main(void)
{
    int mark = 45;
    int registered = 1;

    if (registered)
    {
        if (mark >= 60)
            printf("Result: PASS\n");
        else
            printf("Result: FAILED\n");
    }
    else
        printf("Not registered for this course.\n");

    printf("End of report.\n");
    return 0;
}
