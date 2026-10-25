#include <stdio.h>

int main(void)
{
  double input_number;

  printf("Enter a real number: ");
  scanf("%lf", &input_number);

  printf("Rounded: %d\n", (int)(input_number + 0.5));

  return 0;
}
