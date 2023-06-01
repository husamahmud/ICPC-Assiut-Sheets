#include <stdio.h>

int main(void)
{
  char s;
  scanf("%c", &s);
  if (s >= 48 && s <= 57)
    printf("IS DIGIT");
  else if (s >= 63 && s <= 90 || s >= 97 && s <= 122)
  {
    printf("ALPHA\n");
    if (s >= 'A' && s <= 'Z')
      printf("IS CAPITAL");
    else if (s >= 'a' && s <= 'z')
      printf("IS SMALL");
  }
  return 0;
}
