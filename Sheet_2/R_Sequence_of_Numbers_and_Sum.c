#include <stdio.h>

int main(void)
{
  int n, m, i, j, count, sum, tmp;

  while (1)
  {
    scanf("%d %d", &n, &m);

    if (n <= 0 || m <= 0)
      return 0;

    if (n > m)
    {
      tmp = n;
      n = m;
      m = tmp;
    }

    sum = 0;
    for (i = n; i <= m; i++)
    {
      printf("%d ", i);
      sum += i;
    }

    printf("sum =%d\n", sum);
  }

  return 0;
}
