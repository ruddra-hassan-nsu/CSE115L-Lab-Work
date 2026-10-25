#include <stdio.h>

int main(void)
{
  char name[50];
  int id, section;
  double cgpa;

  printf("Enter name: ");
  scanf("%s", name);
  printf("Enter ID: ");
  scanf("%d", &id);
  printf("Enter section: ");
  scanf("%d", &section);
  printf("Enter CGPA: ");
  scanf("%lf", &cgpa);

  printf("Name: %s\n", name);
  printf("ID: %d\n", id);
  printf("Section: %d\n", section);
  printf("CGPA: %.2f\n", cgpa);

  return 0;
}
