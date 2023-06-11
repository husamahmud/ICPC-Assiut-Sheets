#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, m, i, j, *a, *b;
  scanf("%d %d", &n, &m);

  a = (int *)malloc(n * sizeof(int));
  b = (int *)malloc(m * sizeof(int));

  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (i = 0; i < m; i++)
    scanf("%d", &b[i]);

  j = 0;
  for (i = 0; i < n && j < m; i++)
  {
    if (a[i] == b[j])
      j++;
  }

  (j == m) ? printf("YES\n") : printf("NO\n");

  free(a);
  free(b);

  return 0;
}