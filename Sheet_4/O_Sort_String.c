#include <stdio.h>

int main()
{
  int s[26] = {0};
  int n, i, count;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    char c;
    scanf(" %c", &c);

    s[c - 'a']++;
  }

  for (i = 0; i < 26; i++)
  {
    count = s[i];
    while (count--)
    {
      putchar(i + 'a');
    }
  }

  return 0;
}
