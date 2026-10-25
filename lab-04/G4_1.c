#include <stdio.h>
#include <math.h>

int main(void)
{
  double x1, y1, x2, y2, dx, dy, distance;
  int wholed_distance;

  printf("Enter x1 and y1> ");
  scanf("%lf, %lf", &x1, &y1);
  printf("Enter x2 and y2> ");
  scanf("%lf, %lf", &x2, &y2);

  dx = x2 - x1;
  dy = y2 - y1;

  distance = sqrt(pow(dx, 2.0) + pow(dy, 2.0));
  wholed_distance = (int)ceil(distance);

  printf("Horizontal gap, ignoring direction: %.1f\n", fabs(dx));
  printf("The distance is %.3f metres.\n", distance);
  printf("You must buy %d whole metres of rope.\n", wholed_distance);

  return 0;
}
