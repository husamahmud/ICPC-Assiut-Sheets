#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[1000001], word[1000001];
  int i, j = 0, k, len, words = 0;

  fgets(s, sizeof(s), stdin);
  len = strlen(s);

  for (i = 0; i < len; i++)
  {
    if (s[i] == ' ' || s[i] == '\n')
    {
      for (k = j - 1; k >= 0; k--)
        printf("%c", word[k]);

      words++;

      if (words < len && s[i] == ' ')
        printf(" ");

      j = 0;
    }
    else
      word[j++] = s[i];
  }

  for (i = j - 1; i >= 0; i--)
    printf("%c", word[i]);

  return 0;
}
