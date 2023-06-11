#include<stdio.h>

int main(void){
    int a, b, m;
    scanf("%d %d %d", &a, &b, &m);

    int min, max;
    if(a > b){
        max = a;
        min = b;
    } else{
        max = b;
        min = a;
    }
    unsigned long long result = 1;
    for(int i =min; i<=max; i++){
        result *= i;
        result %= m;
    }

    printf("%llu", result);
}
