#include <stdio.h>

int main(void)
{
  int mark, credits, age;

  printf("Enter mark: ");
  scanf("%d", &mark);
  printf("Enter credits: ");
  scanf("%d", &credits);
  printf("Enter age: ");
  scanf("%d", &age);

  if (mark >= 0 && mark <= 100)
    printf("Mark accepted.\n");

  if (credits == 3 || credits == 4)
    printf("Standard course.\n");

  if (age < 13 || age > 19)
    printf("Not 13 to 19.\n");

  return 0;
}
