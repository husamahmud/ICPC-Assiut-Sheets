#include<stdio.h>
#include<math.h>

int main(void){
    unsigned long long n;
    scanf("%llu", &n);
    unsigned long long sum = 0;

    for(int i=1; i<= sqrt(n);i++){
        // We only loop on sqrt() for time constraints
        if(n%i == 0){
            sum += i;
            // Then we add the other cases (12/2 = 6, 12/6 = 2) "we take these 2 steps only at i = 2"
            if(i!=sqrt(n))
                sum += n/i;
        }
    }
    printf("%llu", sum);
}
