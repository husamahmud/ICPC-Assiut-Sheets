#include<stdio.h>

void printEven(int n, long long* arr){
    if (n <= 0)
        return;

    printEven(n - 2, arr + 2);
    printf("%lld ", arr[0]);

}

int main(void){
    int n;
    scanf("%d", &n);
    long long arr[n];

    for(int i = 0; i < n; i++){
        scanf("%lld", arr + i);
    }

    printEven(n, arr);
}
