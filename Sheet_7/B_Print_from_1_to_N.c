#include<stdio.h>

void disp(int n, int original){
    if(n == original + 1) // base case
        return;

    printf("%d\n", n);
    disp(n + 1, original);
}

int main(void){
    int n;

    scanf("%d", &n);
    disp(1, n);
}
