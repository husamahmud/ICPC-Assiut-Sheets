#include<stdio.h>
#include<math.h>

int main(void){
    unsigned long long n;
    scanf("%llu", &n);

    if(n==0 || n==1){
        printf("NO");
        return 0;
    }

    for (int i=2; i<= sqrt(n);i++){
        if(n % i == 0){
            printf("NO");
            return 0;
        }
    }

    printf("YES");
}
