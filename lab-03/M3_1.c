#include <stdio.h>

int main(void)
{
  int input_number, thousands, hundreds, tens, ones;

  printf("Enter a four-digit integer: ");
  scanf("%d", &input_number);

  thousands = input_number / 1000;
  hundreds = input_number % 1000 / 100;
  tens = input_number % 100 / 10;
  ones = input_number % 10;

  printf("Thousands: %d\n", thousands);
  printf("Hundreds: %d\n", hundreds);
  printf("Tens: %d\n", tens);
  printf("Ones: %d\n", ones);
  printf("Sum: %d\n", thousands + hundreds + tens + ones);

  return 0;
}
