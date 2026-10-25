#include <stdio.h>

int main(void)
{
  int count = 2183;
  int step = 7;

  printf("Before: count = %d, step = %d\n", count, step);
  count = count + step;
  printf("After: count = %d, step = %d\n", count, step);

  return 0;
}
