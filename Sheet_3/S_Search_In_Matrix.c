#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, m, *mtx, i, x, found = 0;
  scanf("%d %d", &n, &m);

  mtx = (int *)malloc((n * m) * sizeof(int));
  for (i = 0; i < (m * n); i++)
    scanf("%d", &mtx[i]);

  scanf("%d", &x);

  for (i = 0; i < (m * n); i++)
  {
    if (x == mtx[i])
      found++;
  }

  (found) ? printf("will not take number") : printf("will take number");

  return 0;
}