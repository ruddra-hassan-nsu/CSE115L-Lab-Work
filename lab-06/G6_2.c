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

  printf("credits != 3: %d\ncomplement credits == 3: %d\n\n", credits != 3, credits == 3);
  printf("mark > 40 && mark < 60: %d\ncomplement mark <= 40 || mark >= 60 : %d\n\n", mark > 40 && mark < 60, mark <= 40 || mark >= 60);
  printf("age < 18 || credits == 0: %d\ncomplement age >= 18 && credits != 0: %d\n\n", age < 18 || credits == 0, age >= 18 && credits != 0);
  printf("!(mark >= 60): %d\ncomplement mark >= 60: %d\n", !(mark >= 60), mark >= 60);

  return 0;
}
