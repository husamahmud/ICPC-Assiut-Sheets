#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, *arr, i, counter, result = 1000000000;
  scanf("%d", &n);

  arr = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] % 2 != 0)
    {
      printf("0\n");
      return 0;
    }
  }

  for (i = 0; i < n; i++)
  {
    if (arr[i] % 2 != 0)
    {
      printf("0\n");
      return 0;
    }

    counter = 0;
    while (arr[i] % 2 == 0)
    {
      counter++;
      arr[i] /= 2;
    }

    if (counter < result)
      result = counter;
  }

  printf("%d\n", result);

  free(arr);

  return 0;
}