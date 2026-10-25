#include <stdio.h>

int main(void)
{
  int p = 12, q = 5;

  printf("p > q = %d\n", p > q);
  printf("p == q = %d\n", p == q);
  printf("p %% q == 2 = %d\n", p % q == 2);
  printf("!(p > q) = %d\n", !(p > q));
  printf("p > 10 && q > 10 = %d\n", p > 10 && q > 10);
  printf("p > 10 || q > 10 = %d\n", p > 10 || q > 10);
  printf("!p = %d\n", !p);
  printf("p && q = %d\n", p && q);

  return 0;
}
