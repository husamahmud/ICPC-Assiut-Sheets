#include <stdio.h>

int main(void)
{
  int n, i, index = 0;
  scanf("%d", &n);

  int arr[n];
  int min = 0;

  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);

    if (min > arr[i] || i == 0)
    {
      min = arr[i];
      index = (i + 1);
    }
  }

  printf("%d %d", min, index);

  return 0;
}