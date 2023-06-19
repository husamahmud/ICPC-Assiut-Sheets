#include <stdio.h>

int main(void)
{
  int n, i, j;
  char s = '*';

  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < i + 1; j++)
      printf("%c", s);

    printf("\n");
  }

  return 0;
}
