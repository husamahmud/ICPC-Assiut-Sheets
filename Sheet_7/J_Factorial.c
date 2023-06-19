#include<stdio.h>

long long fact(int n){
    if (n == 1)
        return 1;

    return n * fact(n-1);
}

int main(void){
    int n;

    scanf("%d", &n);
    printf("%lld", fact(n));
}
