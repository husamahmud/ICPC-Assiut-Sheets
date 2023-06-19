#include <stdio.h>

int main(void)
{
  int a, b, i, count, lucky, unlucky = 0;
  scanf("%d %d", &a, &b);

  for (i = a; i <= b; i++)
  {
    count = i;
    lucky = 0;

    while (count)
    {
      if (count % 10 != 7 && count % 10 != 4)
        lucky++;

      count /= 10;
    }

    if (!lucky)
    {
      printf("%d ", i);
      unlucky++;
    }
  }

  if (!unlucky)
    printf("-1");

  return 0;
}
