#include<stdio.h>
long long maxVal;
int n;
long long current;

void leftMax(int ctr){
    if(ctr == n)
        return;

    scanf("%lld", &current);

    if(ctr == 0){
        printf("%lld ", current);
        maxVal = current;
    } else {
        if (current > maxVal){
            printf("%lld ", current);
            maxVal = current;
        }
        else
            printf("%lld ", maxVal);
    }
    return leftMax(ctr+1);
}


int main(void){
    scanf("%d", &n);
    leftMax(0);
}
