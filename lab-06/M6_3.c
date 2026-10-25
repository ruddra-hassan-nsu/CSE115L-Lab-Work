#include <stdio.h>

int urgent_in_queue = 0, regular_in_queue = 0;

int validate_bool(int choice);
int calc_queue_position(int is_urgent);

int main(void)
{
  int is_urgent;

  printf("Is your print job urgent? (0-No, 1-Yes): ");
  scanf("%d", &is_urgent);

  if (!validate_bool(is_urgent))
  {
    printf("Illegal input.\n");
    return 0;
  }

  printf("Your current position in line is: %d\n", calc_queue_position(is_urgent));

  return 0;
}

int validate_bool(int choice)
{
  return choice == 0 || choice == 1;
}

int calc_queue_position(int is_urgent)
{
  if (is_urgent)
  {
    urgent_in_queue = urgent_in_queue + 1;
    return urgent_in_queue;
  }

  regular_in_queue = regular_in_queue + 1;
  return urgent_in_queue + regular_in_queue;
}
