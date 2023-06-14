#include <stdio.h>
#include <string.h>

int main(void)
{
  char x[21], y[21];

  scanf("%s", x);
  scanf("%s", y);

  int res = strcmp(x, y);

  (res < 0) ? printf("%s\n", x) : printf("%s\n", y);

  return 0;
}