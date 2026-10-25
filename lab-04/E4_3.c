#include <stdio.h>
#include <math.h>

int main(void)
{
  double input_number;

  printf("Enter a positive number> ");
  scanf("%lf", &input_number);

  printf("sqrt: %.4f\n", sqrt(input_number));
  printf("pow(x,0.5): %.4f\n", pow(input_number, 0.5));
  printf("cube root: %.4f\n", pow(input_number, 1.0 / 3.0));
  printf("fifth root: %.4f\n", pow(input_number, 1.0 / 5.0));

  return 0;
}
