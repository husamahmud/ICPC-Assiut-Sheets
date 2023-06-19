#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[51], t[51], new_string[102];
  int n, s_len = 0, t_len = 0, i, j, k;

  scanf("%d", &n);

  while (n--)
  {
    scanf("%s %s", s, t);
    s_len = strlen(s);
    t_len = strlen(t);

    for (i = 0, j = 0, k = 0; i < s_len && j < t_len; i++, j++)
    {
      new_string[k++] = s[i];
      new_string[k++] = t[j];
    }

    while (i < s_len)
      new_string[k++] = s[i++];

    while (j < t_len)
      new_string[k++] = t[j++];

    new_string[k] = '\0';

    printf("%s\n", new_string);
  }

  return (0);
}
