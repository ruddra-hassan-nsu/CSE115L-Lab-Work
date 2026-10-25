#include <stdio.h>

int main(void)
{
  double celsius, fahrenheit;

  printf("Enter degrees Celsius: ");
  scanf("%lf", &celsius);
  fahrenheit = 9.0 / 5.0 * celsius + 32;
  printf("%.2f C = %.2f F\n", celsius, fahrenheit);

  printf("Enter degrees Fahrenheit: ");
  scanf("%lf", &fahrenheit);
  celsius = 5.0 / 9.0 * (fahrenheit - 32);
  printf("%.2f F = %.2f C\n", fahrenheit, celsius);

  return 0;
}
