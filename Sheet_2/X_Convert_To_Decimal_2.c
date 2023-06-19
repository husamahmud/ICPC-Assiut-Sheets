#include <stdio.h>
#include <math.h>

int main()
{
  int t, bin, num, sum, i, j;
  scanf("%d", &t);

  for (i = 0; i < t; i++)
  {
    scanf("%d", &num);

    sum = j = 0;
    while (num)
    {
      bin = num % 2;
      num /= 2;

      if (bin)
      {
        sum += pow(2, j);
        j++;
      }
    }

    printf("%d\n", sum);
  }

  return 0;
}
