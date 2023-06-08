#include <stdio.h>

int main(void)
{
  int n, i, input;
  long long int sum = 0;
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &input);
    sum += input;
  }

  printf("%lld", sum >= 0 ? sum : -sum);

  return 0;
}