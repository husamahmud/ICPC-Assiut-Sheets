#include<stdio.h>
int R,C;
int mat[10][10];

int max(int a, int b){
    if (a > b)
        return a;
    return b;
}

int maxPath(int start, int end){
    if(start == R - 1 && end == C - 1)
        return mat[start][end];
    else if (start == R + 1 || end == C + 1)
        return -1000000; // any negative value out of our boundary (-10^5 < M < -10^5) "will be ignored max()"


    int p1 = maxPath(start, end + 1); // Right
    int p2 = maxPath(start + 1, end); // Down
    return mat[start][end] + max(p1, p2);
}

int main(void){
    scanf("%d %d", &R, &C);

    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);

    printf("%d", maxPath(0,0));
}
