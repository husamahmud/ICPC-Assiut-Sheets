#include <stdio.h>
#include <math.h>

int main(void)
{
  float a, b;
  scanf("%f %f", &a, &b);
  printf("floor %.0f / %.0f = %.0f\n", a, b, floor(a / b));
  printf("ceil %.0f / %.0f = %.0f\n", a, b, ceil(a / b));
  printf("round %.0f / %.0f = %.0f\n", a, b, round(a / b));
  return 0;
}
