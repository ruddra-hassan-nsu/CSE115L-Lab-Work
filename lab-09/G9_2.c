#include <stdio.h>

int main(void) {
    int i, passes;
    
    passes = 0;
    for (i = 1; i <= 7; i++) 
        passes ++;
    printf("for (i = 1; i <= 7; i++)\t= %2d times.\n", passes);

    passes = 0;
    i = 0;
    while (i < 10) { 
        passes++; 
        i++; 
    }
    printf("i = 0; while (i < 10)\t\t= %2d times.\n", passes);

    passes = 0;
    for (i = 10; i >= 1; i--) 
        passes++;
    printf("for (i = 10; i >= 1; i--)\t= %2d times.\n", passes);

    passes = 0;
    for (i = 2; i <= 2; i++) 
        passes++;
    printf("for (i = 2; i <= 2; i++)\t= %2d times.\n", passes);

    passes = 0;
    for (i = 5; i <= 1; i++) 
        passes++;
    printf("for (i = 5; i <= 1; i++)\t= %2d times.\n", passes);

    return 0;
}
