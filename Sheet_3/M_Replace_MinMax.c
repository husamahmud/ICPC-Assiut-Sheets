#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, *arr, i, min, min_index, max, max_index, tmp;
  scanf("%d", &n);

  arr = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);

    if (min > arr[i] || i == 0)
    {
      min = arr[i];
      min_index = i;
    }

    if (max < arr[i] || i == 0)
    {
      max = arr[i];
      max_index = i;
    }
  }

  tmp = arr[max_index];
  arr[max_index] = arr[min_index];
  arr[min_index] = tmp;

  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  free(arr);

  return 0;
}