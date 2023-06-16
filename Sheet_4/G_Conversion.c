#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  char s[100001];
  int i, len;

  scanf("%s", s);
  len = strlen(s);

  for (i = 0; i < len; i++)
  {
    if (s[i] == ',')
      printf(" ");
    else if (s[i] >= 'a' && s[i] <= 'z')
      printf("%c", toupper(s[i]));
    else
      printf("%c", tolower(s[i]));
  }

  return (0);
}
