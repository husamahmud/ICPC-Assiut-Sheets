#include<stdio.h>

int main(void){
    unsigned long long n;
    scanf("%llu", &n);

    unsigned long long i = 1;
    while(1){
        if(i > n){
            printf("%d",i-1);
            return 0;
        }
        else
            n -= i;
        
        i++;
    }
    /*
    15 (1+2+3+4+5)
    n => 15 14  12  9    5   0
    i => 1  2   3   4   (5)   6
    =========================
    8 (1+2+3)
    n => 8  7    5   2
    i => 1  2   (3)   4
    */
}
