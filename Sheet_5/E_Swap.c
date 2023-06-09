#include<stdio.h>

void swap(unsigned int *x, unsigned int *y){
    unsigned int tmp = *y;
    *y = *x;
    *x = tmp;
}

int main(void)
{
    unsigned int x, y;
    scanf("%u", &x);
    scanf("%u", &y);
    swap(&x,&y);
    printf("%u %u", x,y);
}
