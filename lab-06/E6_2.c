#include <stdio.h>

int main(void)
{
  int input_number;

  printf("Enter an integer: ");
  scanf("%d", &input_number);

  if (input_number >= 0 && input_number <= 100)
    printf("In range\n");
  else
    printf("Out of range\n");

  if (input_number % 2 == 0)
    printf("Even\n");

  return 0;
}
