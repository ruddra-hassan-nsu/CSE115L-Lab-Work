#include <stdio.h>
#include <math.h>

int main(void)
{
  double input_x;
  int input_n;

  printf("Enter a positive number x> ");
  scanf("%lf", &input_x);
  printf("Enter a positive integer n> ");
  scanf("%d", &input_n);

  printf("x rounded to two places: %.4f\n", floor(input_x * 100 + 0.5) / 100);
  printf("Digits in n: %d\n", (int)(floor(log10(input_n)) + 1));

  return 0;
}
