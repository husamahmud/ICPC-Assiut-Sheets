#include<stdio.h>
#include <stdlib.h>

double avg(int n, double *arr){
    double sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum/n;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    double* arr = (double*) malloc(n * sizeof(double));
    for(int i = 0; i < n; i++) {
        scanf("%lf", arr + i);
    }
    printf("%.7lf", avg(n, arr));
}
