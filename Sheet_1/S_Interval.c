#include <stdio.h>

int main(void)
{
  float x;
  scanf("%f", &x);
  if (x >= 0 && x <= 25)
    printf("Interval [0,25]");
  else if (x > 25 && x <= 50)
    printf("Interval (25,50]");
  else if (x > 50 && x <= 75)
    printf("Interval (50,75]");
  else if (x > 75 && x <= 100)
    printf("Interval (75,100]");
  else
    printf("Out of Intervals");
  return 0;
}
