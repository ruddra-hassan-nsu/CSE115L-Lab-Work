#include <stdio.h>

void draw_circle(void);
void draw_intersect(void);
void draw_base(void);
void draw_triangle(void);

int main(void)
{
  draw_circle();
  draw_triangle();
  draw_intersect();

  return 0;
}

void draw_circle(void)
{
  printf("[draw_circle]\n");
  printf("    *  *  \n");
  printf(" *        *\n");
  printf("*          *\n");
  printf("*          *\n");
  printf(" *        *\n");
  printf("    *  *  \n");
}

void draw_intersect(void)
{
  printf("[draw_intersect]\n");
  printf("    /\\  \n");
  printf("   /  \\ \n");
  printf("  /    \\\n");
  printf(" /      \\\n");
  printf("/        \\\n");
}

void draw_base(void)
{
  printf("[draw_base]\n");
  printf("----------\n");
}

void draw_triangle(void)
{
  printf("[draw_triangle]\n");
  draw_intersect();
  draw_base();
}
