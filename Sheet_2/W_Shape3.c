#include <stdio.h>

int main(void)
{
  int n, i, j, z;

  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = n - 1; j >= i; j--)
      printf(" ");

    for (z = 1; z < i * 2; z++)
      printf("*");

    printf("\n");
  }

  for (i = n; i >= 1; i--)
  {
    for (j = n - 1; j >= i; j--)
      printf(" ");

    for (z = 1; z < i * 2; z++)
      printf("*");

    printf("\n");
  }

  return 0;
}
