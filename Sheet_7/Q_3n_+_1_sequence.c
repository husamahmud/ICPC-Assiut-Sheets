#include<stdio.h>
int c = 0;

int func(int n){
    c++;
    if (n == 1){
        return c;
    }
    if(n % 2 == 0)
        func(n/2);
    else
        func(3*n+1);
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", func(n));
}
