#include <stdio.h>

int main(void)
{
  int mark, credits;

  printf("Enter the mark and the credits: ");
  scanf("%d%d", &mark, &credits);

  if (mark >= 0 && mark <= 100)
    printf("The mark is in range.\n");

  if (credits == 3)
    printf("This is a three-credit course.\n");

  if (mark >= 60)
    printf("Result: PASS\n");

  printf("mark %d, credits %d\n", mark, credits);
  return 0;
}
