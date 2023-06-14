#include<stdio.h>
#include<math.h>

int main(void){
    unsigned long long n;
    scanf("%llu", &n);

    ((n & (n - 1)) == 0) ? printf("YES") : printf("NO");
    // 8 => 1000 | 8 & 7 = 1000 & 0111 = 0 | otherwise we have a non power of 2
}
