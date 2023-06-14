#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b);
int partition(int *arr, int low, int high);
void quickSort(int *arr, int low, int high);

int main(void)
{
  int n, q, *arr, i, input;

  scanf("%d %d", &n, &q);
  arr = (int *)malloc(n * sizeof(int));

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  quickSort(arr, 0, n - 1);

  for (i = 0; i < q; i++)
  {
    scanf("%d", &input);

    if (bsearch(&input, arr, n, sizeof(int), (int (*)(const void *, const void *))cmpfunc) == NULL)
      printf("not found\n");
    else
      printf("found\n");
  }

  free(arr);

  return 0;
}

int cmpfunc(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}

void quickSort(int *arr, int low, int high)
{
  if (low < high)
  {
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}

int partition(int *arr, int low, int high)
{
  int pivot = arr[high];
  int i = low - 1;
  int j;

  for (j = low; j <= high - 1; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;

  return i + 1;
}