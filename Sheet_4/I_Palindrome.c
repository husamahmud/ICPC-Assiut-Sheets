#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[10001];
  int len = 0, i, j, checker = 0;

  scanf("%s", s);
  len = strlen(s);

  for (i = 0, j = len - 1; i < j; i++, j--)
  {
    if (s[i] != s[j])
    {
      checker++;
      break;
    }
  }

  (!checker) ? printf("YES\n") : printf("NO\n");

  return (0);
}
