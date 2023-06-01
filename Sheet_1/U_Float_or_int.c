#include <stdio.h>

int main(void)
{
  double n;
  scanf("%lf", &n);
  int integer = (int)n;
  double dec = n - integer;
  if (n == integer)
    printf("int %d", (int)n);
  else
    printf("float %d %.3lf", integer, dec);
  return 0;
}
