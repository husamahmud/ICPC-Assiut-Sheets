#include<stdio.h>
#include <stdlib.h>

void swapMat(int* m,int n, int x, int y){
    // Swap col x w/ col y
    for (int i=0; i<n; i++){
        int temp;
        temp = m[i*n + x];
        m[i*n + x] = m[i*n + y];
        m[i*n + y] = temp;
    }
    // Swap row x with row y
    for (int i=0; i<n; i++){
        int temp;
        temp = m[y*n + i];
        m[y*n + i] = m[x*n + i];
        m[x*n + i] = temp;
    }
}

int main(void)
{
    int n, x, y; // NxN
    scanf("%d %d %d", &n, &x, &y);
    // Create Matrix
    int* mat = malloc((n * n) * sizeof(int));
    for (int i = 0; i < n * n; i++)
        scanf("%d", mat + i);

    swapMat(mat,n, x-1, y-1);
    // Printing
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i * n + j]);

        if (i != n-1) printf("\n");
    }
    free(mat);
}
