#include <stdio.h>

int main(void)
{
  int roll = 7;
  double marks = 88.456;
  char section = 'B';

  printf("%d\n", roll);
  printf("%.1f\n", marks);
  printf("%c\n", section);
  printf("%d\n", section);
  scanf("%lf", &marks);
  scanf("%d%lf", &roll, &marks);

  return 0;
}
