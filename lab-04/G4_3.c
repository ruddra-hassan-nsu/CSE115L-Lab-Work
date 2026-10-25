#include <stdio.h>
#include <math.h>

int main(void)
{
  printf("sqrt(fabs(-81.0)) = %.4f\n", sqrt(fabs(-81.0)));
  printf("ceil(sqrt(50.0)) = %.4f\n", ceil(sqrt(50.0)));
  printf("pow(floor(3.7), 2.0) = %.4f\n", pow(floor(3.7), 2.0));
  printf("fabs(floor(-2.3)) = %.4f\n", fabs(floor(-2.3)));
  printf("sqrt(ceil(fabs(-7.4))) = %.4f\n", sqrt(ceil(fabs(-7.4))));

  return 0;
}
