#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[100001];
  int t, i, len = 0;

  scanf("%d", &t);
  while (t--)
  {
    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len - 2; i++)
    {
      if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0' || s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
      {
        printf("Good\n");
        break;
      }
    }

    if (i == len - 2)
      printf("Bad\n");
  }

  return (0);
}
