#include<stdio.h>
#include <stdlib.h>

void ROR_Arr(int n, int *arr, int shamt){
    int j;
    for(int i=0; i<shamt; i++){
        int temp=arr[n-1];
        for(j=n-1; j>0; j--){
           arr[j]=arr[j-1];
		}
         arr[j]=temp;
    }
}

int main(void)
{
    int n, shamt;
    scanf("%d %d", &n, &shamt);
    int* arr = (int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    ROR_Arr(n, arr, shamt);
    for(int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
}
