#include <stdio.h>

int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  if (a >= b)
    printf("Yes");
  else
    printf("No");
  return 0;
}
