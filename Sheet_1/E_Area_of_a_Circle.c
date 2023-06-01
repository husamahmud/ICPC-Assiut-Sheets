#include <stdio.h>

int main(void)
{
  const double PI = 3.141592653;
  double r;
  scanf("%lf", &r);
  double area = PI * r * r;
  printf("%.9lf", area);
  return 0;
}
