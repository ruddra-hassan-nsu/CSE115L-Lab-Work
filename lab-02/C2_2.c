#include <stdio.h>

int main(void)
{
  int id;
  char grade;

  printf("Enter your ID: ");
  scanf("%d", &id);
  printf("Enter your grade: ");
  scanf(" %c", &grade);

  printf("ID = %d, grade = %c (ASCII %d)\n", id, grade, grade);

  return 0;
}
