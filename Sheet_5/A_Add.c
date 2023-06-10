#include<stdio.h>

void add(unsigned int x, unsigned int y){
    printf("%u", x+y);
}

int main(void)
{
    unsigned int x, y;
    scanf("%u", &x);
    scanf("%u", &y);
    add(x,y);
}
