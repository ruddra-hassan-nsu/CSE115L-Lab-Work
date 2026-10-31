#include <stdio.h>

int main(void)
{
    char c;

    printf("Enter a letter: ");
    scanf(" %c", &c);

    switch (c) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
    case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("%c is a vowel.\n", c);
        break;
    case 'b': case 'c': case 'd': case 'f': case 'g': case 'h':
    case 'j': case 'k': case 'l': case 'm': case 'n': case 'p':
    case 'q': case 'r': case 's': case 't': case 'v': case 'w':
    case 'x': case 'y': case 'z':
    case 'B': case 'C': case 'D': case 'F': case 'G': case 'H':
    case 'J': case 'K': case 'L': case 'M': case 'N': case 'P':
    case 'Q': case 'R': case 'S': case 'T': case 'V': case 'W':
    case 'X': case 'Y': case 'Z':
        printf("%c is a consonant.\n", c);
        break;
    default:
        printf("%c is not a letter.\n", c);
    }

    return 0;
}
