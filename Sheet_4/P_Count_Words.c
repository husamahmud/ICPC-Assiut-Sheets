#include <stdio.h>
#include <string.h>

int main()
{
  char s[1000001];
  int count = 0;

  fgets(s, 1000001, stdin);
  char *token = strtok(s, " !.,?\n");

  while (token != NULL)
  {
    count++;
    token = strtok(NULL, " !.,?\n");
  }

  printf("%d\n", count);

  return 0;
}
