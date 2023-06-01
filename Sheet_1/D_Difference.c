#include <stdio.h>

int main(void)
{
  long long int a, b, c, d;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
  printf("Difference = %lld", ((a * b) - (c * d)));
  return 0;
}