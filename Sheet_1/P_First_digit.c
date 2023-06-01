#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  if ((n / 1000) % 2 == 0)
    printf("EVEN");
  else
    printf("ODD");
  return 0;
}
