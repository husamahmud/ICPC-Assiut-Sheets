#include <stdio.h>

int main(void)
{
  int n, i, j;
  long long int sum = 0, min = 0;
  scanf("%d", &n);

  int arr[n];

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      sum = arr[i] + arr[j] + ((j + 1) - (i + 1));

      if (min > sum)
        min = sum;

      sum = 0;
    }
  }

  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}