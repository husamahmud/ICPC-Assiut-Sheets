#include <stdio.h>

int main(void)
{
  int n, i, j, check = 1;
  scanf("%d", &n);

  int arr[n];

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  for (int i = 0, j = n - 1; i < j; i++, j--)
    if (arr[i] != arr[j])
    {
      check = 0;
      break;
    }

  check ? printf("YES") : printf("NO");

  return 0;
}