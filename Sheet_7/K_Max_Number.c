#include<stdio.h>
long long maxVal;

long long max (long long a, long long b){
    if (a > b)
        return a;
    return b;
}

long long maxArr(int n, long long* arr){
    if (n == 1)
        return max(maxVal, arr[0]);

    maxVal = max(maxVal, arr[0]);
    maxArr(n - 1, ++arr);
}

int main(void){
    int n;
    scanf("%d", &n);
    long long arr[n];

    for(int i = 0; i < n; i++){
        scanf("%lld", arr + i);
        if(i == 0)
            maxVal = arr[0];
    }

    printf("%lld",maxArr(n, arr));
}
