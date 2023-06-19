#include <stdio.h>

int main()
{
  int k, s, c = 0, i, j;

  scanf("%d %d", &k, &s);

  for (i = 0; i <= k; i++)
  {
    for (j = 0; j <= k; j++)
    {
      if (s - i - j >= 0 && s - i - j <= k)
        c++;
    }
  }

  printf("%d", c);

  return 0;
}
