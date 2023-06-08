#include <stdio.h>

int main(void)
{
  int n, i, input;
  scanf("%d", &n);

  int arr[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &input);

    if (input > 0)
      arr[i] = 1;
    else if (input < 0)
      arr[i] = 2;
    else
      arr[i] = 0;
  }

  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}