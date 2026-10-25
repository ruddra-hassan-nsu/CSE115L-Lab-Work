#include <stdio.h>

int main(void)
{
  char input_char;

  printf("Enter a character: ");
  scanf("%c", &input_char);

  printf("The character is: %c\n", input_char);
  printf("Its ASCII code is: %d\n", input_char);
  printf("The next character: %c\n", input_char + 1);

  return 0;
}
