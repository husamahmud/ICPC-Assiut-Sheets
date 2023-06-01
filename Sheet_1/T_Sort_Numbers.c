#include <stdio.h>

int main(void)
{
  int a, b, c, tmp, hi, mid, lo;
  scanf("%d %d %d", &a, &b, &c);

  if (a > b)
  {
    mid = a;
    lo = b;
  }
  else
  {
    mid = b;
    lo = a;
  }

  if (mid > c)
  {
    hi = mid;
    if (lo > c)
    {
      mid = lo;
      lo = c;
    }
    else
    {
      mid = c;
    }
  }
  else
  {
    hi = c;
  }

  printf("%d\n%d\n%d", lo, mid, hi);
  printf("\n\n");
  printf("%d\n%d\n%d", a, b, c);
  return 0;
}
