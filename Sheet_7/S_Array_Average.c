#include<stdio.h>
int n;
double arr[100];

double avg(int idx, double result){
    if (idx == n)
        return result / n;

    avg(idx + 1, result + arr[idx]);
}


int main(void){
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%lf", arr + i);

    printf("%.7f", avg(0,0));
}
