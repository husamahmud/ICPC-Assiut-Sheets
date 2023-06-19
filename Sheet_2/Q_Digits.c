#include <stdio.h>

int main(void)
{
  int n, i, remainder, rev;
  int input;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &input);

    if (!input)
      printf("0 ");

    else
      while (input)
      {
        printf("%d ", input % 10);
        input /= 10;
      }

    printf("\n");
  }

  return 0;
}
