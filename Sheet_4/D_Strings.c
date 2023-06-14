#include <stdio.h>
#include <string.h>

int main(void)
{
  char a[11], b[11], new_string[22], tmp;
  int i, j, a_len = 0, b_len = 0;

  scanf("%s", a);
  scanf("%s", b);

  for (i = 0; a[i] != '\0'; i++)
    a_len++;

  for (i = 0; b[i] != '\0'; i++)
    b_len++;

  for (i = 0; a[i] != '\0'; i++)
    new_string[i] = a[i];

  for (j = 0; b[j] != '\0'; j++)
    new_string[i + j] = b[j];

  new_string[i + j] = '\0';

  printf("%d %d\n", a_len, b_len);
  printf("%s\n", new_string);

  tmp = a[0];
  a[0] = b[0];
  b[0] = tmp;

  printf("%s %s", a, b);

  return 0;
}