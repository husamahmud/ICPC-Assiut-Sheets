#include <stdio.h>

int main()
{
  int n, m, x, y;
  char a[101][101];

  scanf("%d %d", &n, &m);

  for (int i = 0; i < n; i++)
    scanf("%s", a[i]);

  scanf("%d %d", &x, &y);
  x--;
  y--;

  int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
  int dy[] = {1, -1, 0, 0, 1, -1, -1, 1};
  int all_x = 1;
  for (int i = 0; i < 8; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (nx >= 0 && nx < n && ny >= 0 && ny < m)
    {
      if (a[nx][ny] != 'x')
      {
        all_x = 0;
        break;
      }
    }
  }

  if (all_x)
    printf("yes\n");
  else
    printf("no\n");

  return 0;
}