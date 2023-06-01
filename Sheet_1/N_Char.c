#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char s;
  scanf("%c", &s);
  if (s >= 'A' && s <= 'Z')
    printf("%c", tolower(s));
  else if (s >= 'a' && s <= 'z')
    printf("%c", toupper(s));
  return 0;
}
