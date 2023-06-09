#include<stdio.h>
#include <stdlib.h>

int distinct(int n, int *arr){
    int* distinctArr = (int*) malloc(n * sizeof(int));
    int c =0, flag = 0;
    for(int i=0; i< n; i++){
        flag = 0;
        // In each element in the main array
        // Check if it is not inside distinct array
        // If not, increment c, then add it to the array
        for(int j = 0; j<c; j++){
            if(arr[i] == distinctArr[j]){
                // not distinct
                flag = 1;
                break;
            }
        }
        // If flag is still 0 then this item is distinct
        if(!flag){
            distinctArr[c] = arr[i];
            c++;
        }
    }
    free(distinctArr);
    return c;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int* arr = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    printf("%d", distinct(n, arr));
    free(arr);
}
