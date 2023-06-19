#include<stdio.h>
int s, e;

int paths(int n){
    if(n >= e)
        return n == e; // will increment 1 if the last way works

    int way1 = paths(n + 1);
    int way2 = paths(n + 2);
    int way3 = paths(n + 3);

    return way1 + way2 + way3;
}

int main(void){
    scanf("%d %d", &s, &e);
    printf("%d", paths(s));
}
