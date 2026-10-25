#include <stdio.h>

void draw_roof(void);
void draw_wall(void);
void draw_door(void);

int main(void)
{
  draw_roof();
  draw_wall();
  draw_door();

  return 0;
}

void draw_roof(void)
{
  printf("  / \\\n");
  printf(" /   \\\n");
  printf("/_____\\\n");
}

void draw_wall(void)
{
  printf("|     |\n");
  printf("| [ ] |\n");
  printf("|     |\n");
}

void draw_door(void)
{
  printf("| +-+ |\n");
  printf("|_| |_|\n");
}
