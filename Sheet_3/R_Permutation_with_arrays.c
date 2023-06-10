#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr, int size);

int main(void)
{
  int n, *arr1, *arr2, i, j;
  scanf("%d", &n);

  arr1 = (int *)malloc(n * (sizeof(int)));
  arr2 = (int *)malloc(n * (sizeof(int)));

  for (i = 0; i < n; i++)
    scanf("%d", &arr1[i]);

  for (i = 0; i < n; i++)
    scanf("%d", &arr2[i]);

  bubbleSort(arr1, n);
  bubbleSort(arr2, n);

  for (i = 0; i < n; i++)
    if (arr1[i] != arr2[i])
    {
      printf("no");
      return 0;
    }

  printf("yes");

  free(arr1);
  free(arr2);

  return 0;
}

void bubbleSort(int *arr, int size)
{
  int i, j;
  for (i = 0; i < size - 1; i++)
  {
    for (j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}