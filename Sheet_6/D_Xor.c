#include<stdio.h>

int main(void){
    unsigned long long a, b, q;
    scanf("%llu %llu %llu", &a, &b, &q);

    int choice = q % 3 ;
    if(choice == 1){
        printf("%llu", a);
        return 0;
    }
    if(choice == 2){
        printf("%llu", b);
        return 0;
    }
    printf("%llu", (a ^ b));
    return 0;
}
