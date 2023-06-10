#include<stdio.h>

unsigned long long sum(unsigned long long n){
    // This function returns sum from 1 to n: 1+2+3+...+n
    return n * (n+1) /2.0;
}

int main(void){
    unsigned long long a, b, x;
    scanf("%llu %llu %llu", &a, &b, &x);

    unsigned long long min, max;
    if(a > b){
        max = a;
        min = b;
    } else{
        max = b;
        min = a;
    }
    
    unsigned long long result = sum(max/x)*x - sum((min-1)/x)*x; 
    printf("%llu", result);
}
