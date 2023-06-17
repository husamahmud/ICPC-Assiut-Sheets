#include<stdio.h>

void extract(unsigned long long x){
    if(x < 10){ // base case
        printf("%llu ", x);
        return;
    }

    extract(x / 10);

    printf("%llu ", x % 10);
}

int main(void){
    unsigned long long x;
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%llu", &x);
        if (x == 0) {
            printf("0\n");
        } else {
            extract(x);
            printf("\n");
        }
    }
}
