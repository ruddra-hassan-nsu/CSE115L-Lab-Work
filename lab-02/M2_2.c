#include <stdio.h>

int main(void)
{
  double input_first, input_second, temp;

  printf("Enter two real numbers: ");
  scanf("%lf%lf", &input_first, &input_second);

  printf("Before: first = %.2f, second = %.2f\n", input_first, input_second);

  temp = input_first;
  input_first = input_second;
  input_second = temp;

  printf("After: first = %.2f, second = %.2f\n", input_first, input_second);

  return 0;
}
