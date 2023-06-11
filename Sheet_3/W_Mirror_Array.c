#include <stdio.h>

int main()
{
  int n, m, i, j, tmp;
  scanf("%d %d", &n, &m);

  int arr[n][m];

  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      scanf("%d", &arr[i][j]);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m / 2; j++)
    {
      tmp = arr[i][j];
      arr[i][j] = arr[i][m - 1 - j];
      arr[i][m - 1 - j] = tmp;
    }
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}