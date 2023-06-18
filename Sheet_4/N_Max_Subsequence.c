#include <stdio.h>

int main()
{
  char s[100001], t[100001];
  int n, i, len_t = 0;

  scanf("%d %s", &n, s);

  for (i = 0; s[i] != '\0'; i++)
  {
    if (len_t == 0 || s[i] != t[len_t - 1])
      t[len_t++] = s[i];
  }

  printf("%d\n", len_t);
  return 0;
}
