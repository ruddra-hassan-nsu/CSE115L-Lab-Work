#include <stdio.h>

int main(void)
{
  int input_amount, five_hundred, hundred, fifty, ten, five, one, rest;

  printf("Enter the amount in taka: ");
  scanf("%d", &input_amount);

  five_hundred = input_amount / 500;
  rest = input_amount % 500;
  hundred = rest / 100;
  rest = rest % 100;
  fifty = rest / 50;
  rest = rest % 50;
  ten = rest / 10;
  rest = rest % 10;
  five = rest / 5;
  one = rest % 5;

  printf("500-taka notes: %d\n", five_hundred);
  printf("100-taka notes: %d\n", hundred);
  printf("50-taka notes: %d\n", fifty);
  printf("10-taka notes: %d\n", ten);
  printf("5-taka notes: %d\n", five);
  printf("1-taka coins: %d\n", one);

  return 0;
}
