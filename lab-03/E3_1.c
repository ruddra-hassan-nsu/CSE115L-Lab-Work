#include <stdio.h>

int main(void)
{
  int a = 17, b = 5;

  printf("a / b = %d\n", a / b);
  printf("a %% b = %d\n", a % b);
  printf("b / a = %d\n", b / a);
  printf("b %% a = %d\n", b % a);
  printf("-a / b = %d\n", -a / b);
  printf("-a %% b = %d\n", -a % b);
  printf("(double) a / b = %.4f\n", (double)a / b);
  printf("(a + b) / 2 = %d\n", (a + b) / 2);
  printf("a + b / 2 = %d\n", a + b / 2);
  printf("(int) 4.99 = %d\n", (int)4.99);

  return 0;
}
