#include <stdio.h>

int main(void)
{
  int total, count;

  printf("Enter total: ");
  scanf("%d", &total);
  printf("Enter count: ");
  scanf("%d", &count);

  if (count > 0)
    printf("Average: %.2f\n", (double)total / count);
  else
    printf("Average cannot be computed.\n");

  return 0;
}
