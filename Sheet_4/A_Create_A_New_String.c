#include <stdio.h>

int main(void)
{
  char s[1001], t[1001], new_string[2002];
  int i, j, s_len = 0, t_len = 0;

  scanf("%s", s);
  scanf("%s", t);

  for (i = 0; s[i] != '\0'; i++)
    s_len++;

  for (j = 0; t[j] != '\0'; j++)
    t_len++;

  for (i = 0; s[i] != '\0'; i++)
    new_string[i] = s[i];

  new_string[i] = ' ';

  for (j = 0; t[j] != '\0'; j++)
    new_string[i + j + 1] = t[j];

  new_string[i + j + 1] = '\0';

  printf("%d %d\n", s_len, t_len);
  printf("%s\n", new_string);

  return 0;
}