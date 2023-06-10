#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, *mtx, i, PD = 0, SD = 0;

  // read in the dimension of the square matrix form the user
  scanf("%d", &n);

  mtx = (int *)malloc((n * n) * sizeof(int));

  // a for loop is used to read n*n integers from the user and store them in the mtx array
  for (i = 0; i < n * n; i++)
    scanf("%d", &mtx[i]);

  /*
    a for loop is used to calculate the sum of the elements on the primary diagonal of the matrx

    i * * *
    * i * *
    * * i *
    * * * i
  */
  for (i = 0; i < n * n; i += (n + 1))
    PD += mtx[i];

  /*
    a for loop is used to calculate the sum of the elements on the primary diagonal of the matrx

    * * * i
    * * i *
    * i * *
    i * * *
  */
  for (i = (n - 1); i <= n * n - 1; i += (n - 1))
    SD += mtx[i];

  // print the absolute difference between the two diagonal sums
  printf("%d", abs(PD) + abs(SD));

  free(mtx);

  return 0;
}