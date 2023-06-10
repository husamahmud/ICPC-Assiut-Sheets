#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int t, n, *arr, i, j, sub, len;
  scanf("%d", &t);

  while (t--)
  {
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    sub = n;

    for (i = 0; i < n; i++)
    {
      j = i;
      while (j < n - 1 && arr[j] <= arr[j + 1])
      {
        j++;
      }
      len = j - i + 1;
      sub += len * (len - 1) / 2;
      i = j;
    }

    printf("%d\n", sub);
  }

  return 0;
}