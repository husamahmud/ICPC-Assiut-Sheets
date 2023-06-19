#include <stdio.h>

int main(void)
{
  int n, a, b, i, x, sum_digit;
  long long int sum = 0;

  scanf("%d %d %d", &n, &a, &b);

  for (i = 1; i <= n; i++)
  {
    x = i;
    sum_digit = 0;

    while (x)
    {
      sum_digit += x % 10;
      x /= 10;
    }

    if (sum_digit >= a && sum_digit <= b)
      sum += i;
  }

  printf("%lld", sum);

  return 0;
}
