#include <stdio.h>

double add_vat(double price);
void print_box(double value);

int main(void)
{
  double price = 100.0;

  print_box(add_vat(price));

  return 0;
}

double add_vat(double price)
{
  return price * 1.15;
}

void print_box(double value)
{
  printf("+------------+\n");
  printf("| %10.2f |\n", value);
  printf("+------------+\n");
}
