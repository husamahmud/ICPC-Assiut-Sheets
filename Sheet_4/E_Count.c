#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[1000001];
  int i, sum = 0;

  scanf("%s", s);

  for (i = 0; i < strlen(s); i++)
    sum += s[i] - '0';

  printf("%d\n", sum);

  return 0;
}