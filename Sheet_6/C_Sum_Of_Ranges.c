#include<stdio.h>
#include<math.h>

int main(void){
    unsigned long long a, b;
    scanf("%llu %llu", &a, &b);

    unsigned long long min, max;
    if(a > b){
        max = a;
        min = b;
    } else{
        max = b;
        min = a;
    }

    // arithmetic series: S = n/2 * (2a+(n-1)*d)
    unsigned long long n = max - min + 1;
    unsigned long long n_even = n/2;
    unsigned long long aa; // For even
    if(min%2 ==0){
        aa = min;
    }
    else
        aa = min+1;

    if(max%2==0 && min%2==0)
        n_even++;

    unsigned long long sum = n/2.0*((2*min)+(n-1));
    unsigned long long evenSum = n_even/2.0*((2*aa)+2*(n_even-1));
    unsigned long long oddSum = sum - evenSum;

    printf("%llu\n%llu\n%llu", sum, evenSum, oddSum);
}
