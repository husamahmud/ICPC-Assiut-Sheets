#include<stdio.h>

int max(int a, int b){
    if (a > b)
        return a;
    return b;
}

int knapSack(int w, int weights[], int values[], int n){
    if (w == 0 || n == 0)
		return 0;

    if (weights[n - 1] > w)
        return knapSack(w, weights, values, n-1);
    else
        return max(
            values[n-1] + knapSack(w - weights[n-1], weights, values, n - 1),
            knapSack(w, weights, values, n - 1)
        );



}

int main(void){
    int n,w;
    scanf("%d %d", &n, &w);

    int weights[n];
    int values[n];
    for(int i = 0; i < n; i++)
        scanf("%d %d", &weights[i], &values[i]);

    printf("%d", knapSack(w, weights, values, n));
}
