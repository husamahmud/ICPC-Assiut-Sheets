#include<stdio.h>

int mat1[100][100],mat2[100][100],result[100][100];
int R,C;

void sum(int r, int c){
    if(r == R || c == C)
        return;

    if(c < C-1) // sum over columns
        sum(r, c+1);
    else // shift one row down and cont. summing over columns
        sum(r+1, 0);

    result[r][c] = mat1[r][c] + mat2[r][c];
}

int main(void){
    scanf("%d %d", &R, &C);

    for(int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat1[i][j]);

    for(int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat2[i][j]);

    sum(0,0);

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++){
            printf("%d", result[i][j]);
            if(!((i == R - 1) &&(j == C -1)))
                printf(" ");
        }
        if (i != R-1) printf("\n");
    }
}
