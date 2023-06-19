#include <stdio.h>

#define MAX_N 30
#define MAX_R 30

unsigned long long memo[MAX_N + 1][MAX_R + 1]; // used for the time limit

unsigned long long nCr(int n, int r) {
    if (r == 0 || r == n)
        return 1;

    if (r > n)
        return 0;

    if (memo[n][r] != 0)
        return memo[n][r];

    memo[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r); // nCr + nC(r-1) = (n+1)Cr "Algebra 3rd Sec :D"
    return memo[n][r];
}

int main(void) {
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%llu", nCr(n, r));
}
