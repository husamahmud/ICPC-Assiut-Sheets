#include <stdio.h>

int main(void)
{
  int a, b;
  char s;
  scanf("%d", &a);
  scanf("%c", &s);
  scanf("%d", &b);
  if (s == '+')
    printf("%d", a + b);
  else if (s == '-')
    printf("%d", a - b);
  else if (s == '*')
    printf("%d", a * b);
  else if (s == '/')
    printf("%d", a / b);
  return 0;
}
