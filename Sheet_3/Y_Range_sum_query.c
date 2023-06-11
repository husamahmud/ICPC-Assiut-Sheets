#include <stdio.h>
#include <stdlib.h>

int main()
{
  long long n, q, *array, *prefix_sum;
  scanf("%lld %lld", &n, &q);

  array = (long long *)malloc(n * sizeof(long long));
  prefix_sum = (long long *)malloc(n * sizeof(long long));

  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &array[i]);

    if (i == 0)
      prefix_sum[i] = array[i];
    else
      prefix_sum[i] = array[i] + prefix_sum[i - 1];
  }

  while (q--)
  {
    long long l, r;
    scanf("%lld %lld", &l, &r);
    l--;
    r--;

    long long sum = prefix_sum[r] - prefix_sum[l] + array[l];
    printf("%lld\n", sum);
  }

  return 0;
}