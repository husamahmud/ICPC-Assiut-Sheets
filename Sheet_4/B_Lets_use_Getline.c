#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[1000];
  int i;

  fgets(s, sizeof(s), stdin);

  for (i = 0; i < strlen(s); i++)
  {
    if (s[i] == '\\')
      break;
    else
      printf("%c", s[i]);
  }

  return 0;
}