#include <stdio.h>

int main()
{
  int n, i, fib[45];
  fib[1] = 0;
  fib[2] = 1;

  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    if (i == 1 || i == 2)
      printf("%d ", fib[i]);
    else
    {
      fib[i] = fib[i - 1] + fib[i - 2];
      printf("%d ", fib[i]);
    }
  }

  return 0;
}
