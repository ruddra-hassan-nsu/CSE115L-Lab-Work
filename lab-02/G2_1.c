#include <stdio.h>

int main(void)
{
  double length, width, area, perimeter;

  printf("Enter the length: ");
  scanf("%lf", &length);
  printf("Enter the width: ");
  scanf("%lf", &width);

  area = length * width;
  perimeter = 2 * (length + width);

  printf("Area = %.2f\n", area);
  printf("Perimeter = %.2f\n", perimeter);

  return 0;
}
