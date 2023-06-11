#include<stdio.h>

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    if (b == 0) // base case
        return a;
    else
        return gcd(b, a % b); 
        // Eucledian Algorithm: gcd(10, 4) = gcd(3, 2) = gcd(2, 1) = gcd(1, 0) = 1
}

int main(void){
    unsigned long long a,b;
    scanf("%llu %llu", &a, &b);

    unsigned long long result = gcd(a, b);
    printf("%llu %llu", result, a*b/result); // LSM = A*B/GCD(A,B)
}
