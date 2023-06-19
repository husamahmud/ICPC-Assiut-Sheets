#include<stdio.h>
int c = 0;

int my_log2(unsigned long long n){
    if (n == 1){
        return c;
    }
    c++;
    my_log2(n/2);
}

int main(void){
    unsigned long long n;
    scanf("%llu", &n);
    printf("%d", my_log2(n));
}
