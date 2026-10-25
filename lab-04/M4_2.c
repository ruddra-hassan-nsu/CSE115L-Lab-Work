#include <stdio.h>
#include <math.h>

int main(void)
{
  double principal, rate, amount;
  int years;

  printf("Enter the principal: ");
  scanf("%lf", &principal);
  printf("Enter the rate (%%): ");
  scanf("%lf", &rate);
  printf("Enter the years: ");
  scanf("%d", &years);

  amount = principal * pow(1 + rate / 100, years);

  printf("Principal: %.2f\n", principal);
  printf("Final amount: %.2f\n", amount);
  printf("Interest earned: %.2f\n", amount - principal);

  return 0;
}
