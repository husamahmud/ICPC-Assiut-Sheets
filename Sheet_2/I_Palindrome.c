#include <stdio.h>
#include <string.h>

int main(void)
{
  int n, tmp, rev = 0;
  scanf("%d", &n);
  tmp = n;

  while (n)
  {
    rev = rev * 10 + n % 10;
    n = n / 10;
  }

  if (rev == tmp)
  {
    printf("%d\n", rev);
    printf("YES");
  }
  else
  {
    printf("%d\n", rev);
    printf("NO");
  }

  return 0;
}
