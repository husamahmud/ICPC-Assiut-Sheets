#include <stdio.h>

int main(void)
{
  int n, i, lucky = 0, min = 0;
  scanf("%d", &n);

  int arr[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);

    if (min > arr[i] || i == 0)
      min = arr[i];
  }

  for (i = 0; i < n; i++)
    if (min == arr[i])
      lucky++;

  (lucky % 2 != 0) ? printf("Lucky") : printf("Unlucky");

  return 0;
}