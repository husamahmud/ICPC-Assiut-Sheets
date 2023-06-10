#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int a, b, i;
  char *s;

  scanf("%d %d", &a, &b);

  s = (char *)malloc((a + b + 1) * sizeof(char));
  scanf("%s", s);

  if (strlen(s) != a + b + 1 || s[a] != '-')
  {
    printf("No");
    return 0;
  }

  for (i = 0; i < strlen(s); i++)
  {
    if (i == a)
    {
      continue;
    }

    if (!isdigit(s[i]))
    {
      printf("No");
      return 0;
    }
  }

  printf("Yes");

  return 0;
}