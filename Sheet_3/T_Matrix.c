#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, *mtx, i, PD = 0, SD = 0;
  scanf("%d", &n);

  mtx = (int *)malloc((n * n) * sizeof(int));
  for (i = 0; i < n * n; i++)
    scanf("%d", &mtx[i]);

  for (i = 0; i < n * n; i += (n + 1))
    PD += mtx[i];

  for (i = (n - 1); i <= n * n - 1; i += (n - 1))
    SD += mtx[i];

  printf("%d", abs(PD) + abs(SD));

  free(mtx);

  return 0;
}