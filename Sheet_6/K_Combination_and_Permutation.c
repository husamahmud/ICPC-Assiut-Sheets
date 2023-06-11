#include<stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    int i;
    for (i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main(void){
    // nPr = n! / (n-r)!
    // nCr = nPr/ r!
    int n, r;
    scanf("%d %d", &n, &r);

    unsigned long long nPr = factorial(n) / factorial(n-r);
    unsigned long long nCr = nPr / factorial(r);

    printf("%llu %llu", nCr, nPr);

}
