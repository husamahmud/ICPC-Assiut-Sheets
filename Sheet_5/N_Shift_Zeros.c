#include<stdio.h>
#include <stdlib.h>

int* shiftZeros(int n, int *arr){
    int* newArr = (int*) malloc(n * sizeof(int));
    memset(newArr, 0, n * sizeof(int));
    int c =0, zeros =0;
    for(int i=0; i < n; i++){
        if (arr[i] == 0)
            zeros++;
        else{
            newArr[c] = arr[i];
            c++;
        }
    }
        while(zeros > 0){
            arr[c] = 0;
            c++;
            zeros--; 
        }
    return newArr;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int* arr = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    int* newArr = shiftZeros(n, arr);
    for(int i = 0; i < n; ++i) {
        printf("%d ", newArr[i]);
    }
    free(arr);
    free(newArr);
}
