#include<stdio.h>
#include <stdlib.h>

int main(void){
    int ra, ca, rb, cb; 

    // Create Matrix A
    scanf("%d %d", &ra, &ca);
    int* matA = malloc((ra * ca) * sizeof(int));
    for (int i = 0; i < ra * ca; i++)
        scanf("%d", matA + i);

    // Create Matrix B
    scanf("%d %d", &rb, &cb);
    int* matB = malloc((rb * cb) * sizeof(int));
    for (int i = 0; i < rb * cb; i++)
        scanf("%d", matB + i);

    // Mult
    int rc = ra, cc = cb;
    int* matC = malloc((rc * cc) * sizeof(int));

    for (int i = 0; i < rc; i++) {
        for (int j = 0; j < cc; j++) {
            int sum = 0;
            for (int k = 0; k < ca; k++) {
                sum += matA[i * ca + k] * matB[k * cb + j];
            }
            matC[i * cb + j] = sum;
        }
    }


    // Printing
    for (int i = 0; i < rc; i++) {
        for (int j = 0; j < cc; j++){
            printf("%d", matC[i * cc + j]);
            if(!((i == rc -1) &&(j == cc -1)))
                printf(" ");
        }
        if (i != rc-1) printf("\n");

    }
    free(matA);
    free(matB);
    free(matC);
}
