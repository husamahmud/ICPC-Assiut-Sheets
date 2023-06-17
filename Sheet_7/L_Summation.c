#include<stdio.h>

long long sum(int n, long long* arr){
    if (n == 1)
        return arr[0];

    return arr[0] + sum(n - 1, ++arr);
}

int main(void){
    int n;

    scanf("%d", &n);
    long long arr[n];
    for(int i = 0; i < n; i++)
        scanf("%lld", arr + i);

    printf("%lld",sum(n, arr));
}
