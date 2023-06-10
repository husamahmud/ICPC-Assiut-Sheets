#include<stdio.h>
#include<math.h>

long long int eq(int n, int x){
    double sum = 0;
    for (int i = 2; i <= n; i+=2){
        sum += pow(x,i);
    }
    return (long long int)sum;
}

int main(void)
{
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);
    printf("%lld", eq(n, x));
}
