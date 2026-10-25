#include <stdio.h>

int main(void)
{
  double celsius, fahrenheit;

  printf("Enter degrees Celsius: ");
  scanf("%lf", &celsius);
  printf("%.2f\n", celsius);

  fahrenheit = 9.0 / 5.0 * celsius + 32;
  printf("%.2f C = %.2f F\n", celsius, fahrenheit);

  return 0;
}
