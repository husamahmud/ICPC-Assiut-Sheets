#include <stdio.h>

int main(void)
{
  int l1, r1, l2, r2, st, en;
  scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

  if ((l2 < l1 && r2 < l1) || (l2 > r1 && r2 > l2))
    printf("-1");
  else
  {
    if (l1 > l2)
      st = l1;
    else
      st = l2;

    if (r1 > r2)
      en = r2;
    else
      en = r1;

    printf("%d %d", st, en);
  }
  return 0;
}
