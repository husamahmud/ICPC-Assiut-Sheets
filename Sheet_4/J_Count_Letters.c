#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[10000001];
  int freq[26] = {0}, len = 0, i, index = 0;

  scanf("%s", s);
  len = strlen(s);

  for (i = 0; i < len; i++)
  {
    index = s[i] - 'a';
    freq[index]++;
  }

  for (i = 0; i < 26; i++)
  {
    if (freq[i])
      printf("%c : %d\n", i + 'a', freq[i]);
  }

  return (0);
}
