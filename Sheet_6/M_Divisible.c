#include<stdio.h>
#include <string.h>

unsigned long long mod(const char* num, unsigned long long divisor) {
    int len = strlen(num);
    unsigned long long remainder = 0;
    
    for (int i = 0; i < len; i++) {
        remainder = (remainder * 10 + (num[i] - '0')) % divisor;
    }
    
    return remainder;
}

int main(void){
    // This code will not work: [(0≤N≤10^10000,1≤X≤10^9)], we need to represent N as sreing
    // unsigned long long n, x;
    // scanf("%llu %llu", &n, &x);
    // if(n%x==0)
    //     printf("YES");
    // else
    //     printf("NO");  
    /*=====================================================================================*/  
    char n[10005];
    unsigned long long x;
    scanf("%s %llu", n, &x);

    unsigned long long rem = mod(n, x);

    if(rem==0)
        printf("YES");
    else
        printf("NO");  
}
