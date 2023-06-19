#include<stdio.h>
#include<stdbool.h>
unsigned long long x;


bool check(unsigned long long t){
    if (t > x)
        return false;
    else if (t == x)
        return true;
    else
        return check(t * 10) || check(t * 20);
}

int main(void){
    long long n;
    scanf("%lld", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%llu", &x);
        check(1) ? printf("YES\n") : printf("NO\n");
    }

}
