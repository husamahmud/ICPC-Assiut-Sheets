#include<stdio.h>

void printInt(unsigned short int n){
    for(int i = 1; i <= n; i++){
        (i != n) ? printf("%u " , i): printf("%u", i);
    }
}

int main(void)
{
    unsigned short int n;
    scanf("%hu", &n);
    printInt(n);
}
