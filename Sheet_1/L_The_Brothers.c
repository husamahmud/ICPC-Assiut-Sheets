#include <stdio.h>
#include <string.h>

int main(void)
{
  char first1[100], second1[100];
  char first2[100], second2[100];

  scanf("%s", first1);
  scanf("%s", second1);
  scanf("%s", first2);
  scanf("%s", second2);

  if (strcmp(second1, second2) == 0)
    printf("ARE Brothers\n");
  else
    printf("NOT\n");

  return 0;
}
