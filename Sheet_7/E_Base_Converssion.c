#include<stdio.h>

void convertBase2(unsigned long long x){
    if(x == 0)
        return;

    convertBase2(x / 2);
    printf("%llu", x % 2);
}

int main(void){
    unsigned long long x;
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%llu", &x);
        convertBase2(x);
        printf("\n");
    }
}
