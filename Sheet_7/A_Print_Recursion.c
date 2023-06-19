#include<stdio.h>

void disp(int n){
    if(n == 0)
        return;

    printf("I love Recursion\n");
    disp(n - 1);
}

int main(void){
    int n;

    scanf("%d", &n);
    disp(n);
}
