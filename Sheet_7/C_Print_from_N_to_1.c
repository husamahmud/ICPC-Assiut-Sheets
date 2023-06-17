#include<stdio.h>

void disp(int n){
    if(n == 0) // base case
        return;

    printf("%d", n);
    (n == 1) ? printf("") : printf(" ");
    disp(n - 1);
}

int main(void){
    int n;

    scanf("%d", &n);
    disp(n);
}
