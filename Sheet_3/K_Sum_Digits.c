#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, i, digit;
  char *string;
  long long int sum = 0;

  scanf("%d", &n);

  string = (char *)malloc((n + 1) * sizeof(char));
  scanf("%s", string);

  for (i = 0; i < n; i++)
  {
    digit = string[i] - '0';
    sum += digit;
  }

  printf("%lld", sum);

  free(string);

  return 0;
}