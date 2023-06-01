#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  a %= 100;
  b %= 100;
  c %= 100;
  d %= 100;
  long long res = a * b * c * d;
  int x = res % 100;
  if (x < 10)
    printf("0%d", x);
  else
    printf("%d", x);

  return 0;
}
