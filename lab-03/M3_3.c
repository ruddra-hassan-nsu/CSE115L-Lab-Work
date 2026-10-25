#include <stdio.h>

int main(void)
{
  printf("[%4d][%5d][%6d][%1d]\n", 234, 234, 234, 234);
  printf("[%4d][%5d][%6d][%2d]\n", -234, -234, -234, -234);
  printf("[%6.2f][%6.2f][%6.2f]\n", -9.536, 99.999, .123);

  return 0;
}
