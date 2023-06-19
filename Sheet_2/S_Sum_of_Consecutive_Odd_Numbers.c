#include <stdio.h>

int main(void)
{
  int x, y, count, tmp, sum, i;

  scanf("%d", &count);

  while (count--)
  {
    sum = 0;

    scanf("%d %d", &x, &y);

    if (x > y)
    {
      tmp = x;
      x = y;
      y = tmp;
    }

    for (i = x + 1; i < y; i++)
    {
      if (i % 2 != 0)
        sum += i;
    }

    printf("%d\n", sum);
  }

  return 0;
}
