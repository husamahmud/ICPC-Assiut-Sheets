#include <stdio.h>

int main(void)
{
  int n, i;
  long long int fibonacci[50];
  fibonacci[1] = 0;
  fibonacci[2] = 1;

  scanf("%d", &n);

  for (i = 3; i <= n; i++)
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

  printf("%lld", fibonacci[n]);

  return 0;
}