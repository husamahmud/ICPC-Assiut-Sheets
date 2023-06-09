#include<stdio.h>
#include <stdlib.h>

int* concat(int n, int *arr1, int *arr2){
    int* arr3 = (int*) malloc(2 * n * sizeof(int));
    for(int i = 0; i < n; i++){
        arr3[i] = arr1[i];
    }
    for(int i = n; i < 2*n; i++){
        arr3[i] = arr2[i-n];
    }
    return arr3;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int* arr1 = (int*) malloc(n * sizeof(int));
    int* arr2 = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i) {
        scanf("%d", arr1 + i);
    }
    for(int i = 0; i < n; ++i) {
        scanf("%d", arr2 + i);
    }
    int* arr3 = concat(n, arr2, arr1);
    for(int i = 0; i < 2*n; ++i) {
        printf("%d ", arr3[i]);
    }
    free(arr1);
    free(arr2);
    free(arr3);
}
