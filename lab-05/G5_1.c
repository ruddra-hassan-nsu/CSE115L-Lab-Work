#include <stdio.h>

double kg_to_pound(double kg);
void show_weight(double kg, double lb);

int main(void)
{
  double kilos, pounds;

  printf("Enter a weight in kilograms> ");
  scanf("%lf", &kilos);

  pounds = kg_to_pound(kilos);
  show_weight(kilos, pounds);

  return 0;
}

double kg_to_pound(double kg)
{
  return kg * 2.20462;
}

void show_weight(double kg, double lb)
{
  printf("%7.2f kg = %7.2f lb\n", kg, lb);
}
