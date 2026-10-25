#include <stdio.h>

int main(void)
{
  int total_score = 7, num_students = 2;

  printf("Average = %.1f\n", (double)total_score / num_students);
  printf("Average = %.1f\n", total_score * 1.0 / num_students);

  return 0;
}
