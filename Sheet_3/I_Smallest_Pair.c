#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
  int t, n, i, j, min = INT_MAX;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
      {
        min = (min < (arr[i] + arr[j] + j - i)) ? min : (arr[i] + arr[j] + j - i);
        // check if min is less than (arr[i] + arr[j] + j - i)
      }
    }

    printf("%d\n", min);
  }

  return 0;
}