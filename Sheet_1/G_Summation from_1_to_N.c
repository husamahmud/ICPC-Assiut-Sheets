#include <stdio.h>

int main(void)
{
  long long int n, sum;
  n = sum = 0;
  scanf("%lld", &n);
  sum = (n * (n + 1)) / 2;
  printf("%lld", sum);
  return 0;
}
