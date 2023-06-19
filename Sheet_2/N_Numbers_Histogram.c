#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char s;
  int count, *nums, i, j, input;

  scanf("%c", &s);
  scanf("%d", &count);

  for (i = 0; i < count; i++)
  {
    scanf("%d", &input);

    for (j = 0; j < input; j++)
      printf("%c", s);

    printf("\n");
  }

  return 0;
}
