#include<stdio.h>

void printN(int n, char c){
    for(int i = 0; i < n; i++){
        printf("%c " ,c);
    }
}

int main(void)
{
    int t; // Test cases
    scanf("%d", &t);
    for(int i = 0; i< t; i++){
        char c; int n;
        scanf("%d %c",&n, &c);
        printN(n, c);
        if(i != t) printf("\n");
    }
}
