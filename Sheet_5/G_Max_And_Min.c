#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Max_Min {
    // Return Value
    int max;
    int min;
};

struct Max_Min maxMin(int n, int *arr){
    int max = -INT_MAX;
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    struct Max_Min result = {max, min};
    return result;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int* arr = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    struct Max_Min res = maxMin(n, arr);
    printf("%d %d", res.min, res.max);
}
