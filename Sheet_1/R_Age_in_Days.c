#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int years = n / 365;
  n = n - (years * 365);
  int months = n / 30;
  int days = n % 30;
  printf("%d years\n", years);
  printf("%d months\n", months);
  printf("%d days\n", days);
  return 0;
}
