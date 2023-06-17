#include<stdio.h>
int n;

void pyramid(int x){
    if(x == 0)
        return;

    for (int i = 0; i < n-x; i++)
        printf(" ");

    for (int i = 0; i < 2*x - 1; i++)
        printf("*");
    printf("\n");

    pyramid(x - 1);
}

int main(void){
    scanf("%d", &n);
    pyramid(n);
}
