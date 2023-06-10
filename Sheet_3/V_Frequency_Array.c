#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, m, *arr, i;

  scanf("%d %d", &n, &m);

  arr = (int *)malloc(n * sizeof(int));

  // initialize array freq of size m+1 with 0
  int freq[m + 1];
  for (i = 1; i <= m; i++)
    freq[i] = 0;

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  // increment freq[arr[i]] for each element of arr
  for (i = 0; i < n; i++)
    freq[arr[i]]++;

  // print frequency of each number from 1 to m
  for (i = 1; i <= m; i++)
    printf("%d\n", freq[i]);

  free(arr);

  return 0;
}