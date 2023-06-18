#include <stdio.h>
#include <string.h>

int main()
{
  char s[10001], *word = "hello";
  int i = 0, j = 0;

  scanf("%s", s);

  while (s[i] != '\0' && word[j] != '\0')
  {
    if (s[i] == word[j])
      j++;

    i++;
  }

  if (j == strlen(word))
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
